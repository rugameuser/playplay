#include "main.h"

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./playplay {file_id} {obfuscated_key}\n\ntoken: 01E132CAE527BD21620E822F58514932, version: 2\n\n");
        return 0;
    }

    unsigned char key[16] = {0};
    unsigned char file_id[20] = {0};
    unsigned char dst[16] = {0};

    hex2bin(std::string(argv[1]).c_str(), (char *)file_id);
    hex2bin(std::string(argv[2]).c_str(), (char *)key);

    deobfuscate_key(key, file_id, dst);

    for (auto &&i : dst)
        printf("%02x", i);
    printf("\n");

    return 0;
}