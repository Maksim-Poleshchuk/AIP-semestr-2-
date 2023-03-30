/*
 * 1. Реализовать чтение заголовков файлов форматов. Проверить работоспособность
можно по примерам.
a. ICO: ICONDIR и ICONDIRENTRY
*/

#include <iostream>
#include <fstream>

typedef short int WORD;
typedef char SHWORD;
typedef int LWORD;


#pragma pack(push, 2)

struct IconDir {
    WORD Reserved;
    WORD Type;
    WORD Count;
};

struct IconDirEntry {
    SHWORD Width;
    SHWORD Height;
    SHWORD ColorCount;
    SHWORD Reserved;
    WORD Planes;
    WORD BitCount;
    LWORD BytesInRes;
    LWORD ImageOffset;
};

#pragma pack(pop)

int main() {
    std::string filename = "rotation.ico";

    std::ifstream file(filename, std::ios::binary);
    if (!file) {
        std::cout << "Error: can't open file" << std::endl;
        return -1;
    }

    IconDir icon_dir;
    file.read((char*)&icon_dir, sizeof(icon_dir));

    std::cout << "\t--ICONDIR--" << std::endl;
    std::cout << "\tReserved: " << icon_dir.Reserved << std::endl;
    std::cout << "\tType: " << icon_dir.Type << std::endl;
    std::cout << "\tCount: " << icon_dir.Count << std::endl << std::endl;

    const std::string kIconEntryPrefix = "\t--ICONDIRENTRY--\n";

    for (int i = 0; i < icon_dir.Count; i++) {
        IconDirEntry icon_dir_entry;
        file.read((char*)&icon_dir_entry, sizeof(icon_dir_entry));

        std::cout << kIconEntryPrefix;
        std::cout << "\tIcon #" << i << std::endl;
        std::cout << "\tWidth: " << (short)(icon_dir_entry.Width) << std::endl;
        std::cout << "\tHeight: " << (short)(icon_dir_entry.Height) << std::endl;
        std::cout << "\tColorCount: " << (short)(icon_dir_entry.ColorCount) << std::endl;
        std::cout << "\tPlanes: " << icon_dir_entry.Planes << std::endl;
        std::cout << "\tBitCount: " << icon_dir_entry.BitCount << std::endl;
        std::cout << "\tBytesInRes: " << icon_dir_entry.BytesInRes << std::endl;
        std::cout << "\tImageOffset: " << icon_dir_entry.ImageOffset << std::endl;
    }

    file.close();
    return 0;
}
