// start
// Thu Aug 20

#include <fstream>
#include <iostream>
#include <regex>
#include <string>
#include <string.h>

// READ https://github.com/speedstarkawaii/macos-dumper TO USE
const std::string &rbxloc = "/Users/speednextdoor/Desktop/roblox.asm"; // if you are thinking about placing this in a public exploit(which i dont advise you... PS. take a look at capstone if you want to make an actual macos dumper) hide the location in /Users/speedsterkawaii OR upload the disassembly on your website and send http requests to get.

// AND another note: why do we flex patternless dumpers nowadays?? it was literally default simple shit  years ago

namespace funcs{
std::string ins;

// EDIT: if your smart,   you can return gettop tolstring & RBX::Security::getUpdatedSecurityContext & printidentity with this same exact function

std::string getprint()//this is specifically forprint (finds next call after identity string)
{
    bool fallbacked = false; //DIY
    std::ifstream disasm(rbxloc);

    std::regex inswel4(R"(callq\s+0x([0-9a-fA-F]+))"); // certain instruction we looking for

    while (std::getline(disasm, ins))
    {
        
         //  ## literal pool for: "Skip coverage stats because script is missing (name: %s)"
        //   ## literal pool for: "Lua heap saved to %s"
        //  ## literal pool for: "Native code generation of script %s failed:  %s."
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

    // uncomment if u want auto updating printsploit
    //disasm.close();
    return {}; 
}

}

int main()//   this whole project reminded me of eyecrawl
{
    std::cout << "// roblox dumper\n";
    std::cout << "// macos, x86_64\n";
    std::cout << "\n----------------\n\n";

    std::string rbxsoprintf = funcs::getprint();
    if (rbxsoprintf.empty()) { std::cout << "#define print \"?\"\n";rbxsoprintf="0";} // someone make a better  handler thx
    std::cout << "#define RBX_printf_singelton 0x" << rbxsoprintf << '\n';

    //DIY 

    std::cout << "done! this only gets print";
    std::cout << "\n\n https://github.com/speedstarkawaii/macos-dumper";
    return true;
}
