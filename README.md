# macos-dumper

roblox dumper that derives from disassembly. that means its not detected & its mostly just a parser. calling it a dumper sounds too much imo.

# how to use?

1. dumping disassembly

```otool -arch x86_64 -tvV  /Applications/Roblox.app/Contents/MacOS/RobloxPlayer  > roblox.asm```

*this creates the file in /Users/speedsterkawaii so you can derive/path this in the parser*


2. example.

if you go to `parse.h` you can see how it works. you can tweak a few like for example:

to find spawn its "**Spawn function requires 1 argument**",

that starts at pushq	%rbp [__text:000000010144705C                 push    rbp]

so you just tweak or make another searcher that specifically finds that instruction above the spawn string

3. optional*

you are free to change anything or even buff this. I only made this for a temporary auto print sploit for Mac whilst I was busy irl

I personally use capstone (rip eyestep) as this is a good disasm framework; anyways have fun !

some things can take a bit to load. my disassembly is around 200MB's so its normal to take a second more for searches 
