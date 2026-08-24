// start
// Thu Aug 20

#include <fstream>
#include <iostream>
#include <regex>
#include <string>
#include <string.h>

// READ https://github.com/speedstarkawaii/macos-dumper TO USE
const std::string &rbxloc = "/Users/speednextdoor/Desktop/roblox.asm"; // if you are thinking about placing this in a public exploit(which i dont advise you... PS. take a look at capstone if you want to make an actual macos dumper) hide the location in /Users/speedsterkawaii OR upload the disassembly on your website and send http requests to get.

// AND another note: why do we flex patternless dumpers nowadays?? it was the norm years ago

namespace funcs{
std::string ins;

std::string getprint()//this is specifically forprint (finds next call after identity string)
{
    std::ifstream disasm(rbxloc);

    std::regex inswel4(R"(callq\s+0x([0-9a-fA-F]+))");

    while (std::getline(disasm, ins))
    {
        if (ins.find("Current identity is %d") == std::string::npos) // other ways to get print. but roblox wont be removing this any time soon.
            continue;

        while (std::getline(disasm, ins))
        {
            std::smatch got;

            if (std::regex_search(ins, got, inswel4))
                return got[1].str();
        }

        break;
    }

    disasm.close();
    return {};
}
 

}

int main()// god this whole project reminds me of the eyecrawl days...
{
    std::cout << "// roblox dumper\n";
    std::cout << "// arch: x86_64\n";
    std::cout << "\n";

    std::string rbxsoprintf = funcs::getprint();
    if (rbxsoprintf.empty()) { std::cout << "#define print \"?\"\n";rbxsoprintf="0";} // someone make a better  handler thx
    std::cout << "#define RBX::printf_singelton 0x" << rbxsoprintf << '\n';

    std::cout << "done! this only gets print so. extend as wished !";

    return true;
}
