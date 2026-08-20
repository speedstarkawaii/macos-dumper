# macos-dumper

roblox dumper that derives from disassembly. that means its not detected & its mostly just a parser. calling it a dumper sounds too much imo.

# how to use?

1. dumping disassembly

```otool -arch x86_64 -tvV  /Applications/Roblox.app/Contents/MacOS/RobloxPlayer  > roblox.asm```

*this creates the file in /Users/speedsterkawaii so you can derive/path this in the parser*


2. setting up

you are free to change anything or even buff this. I personally use capstone (rip eyestep) as this is a good disasm framework; anyways have fun !
