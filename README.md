# macos-dumper

roblox dumper that derives from disassembly. that means its not detected & its mostly just a parser.

# how to use?

1. paste this in terminal:

```otool -arch x86_64 -tvV  /Applications/Roblox.app/Contents/MacOS/RobloxPlayer  > roblox.asm```

*this creates the file in /Users/ so you can extract instructions*.

2. details

if you go to `dump.c` you can see how it works. you can tweak a few like for example:

to find spawn its "**Spawn function requires 1 argument**",

that starts at pushq	%rbp [__text:000000010144705C                 push    rbp]

so you just tweak or make another searcher that specifically finds that instruction above the spawn string

3. optional*

you are free to change anything I only made this for a temporary auto print sploit for Mac whilst I was busy irl

I personally use capstone (rip eyestep) as this is a good disasm framework for Mac; anyways have fun and modify whatever..

some things can take a bit to load. disassembly is around 200MB's to 300MB so its normal to take a second more for search(es)

AND YES. this METHOD won't die ! its literally looking for instructions with an assist of a string. if roblox **EVEN** changes the way print identity works  (it won't happen, trust me) then make fallbacks. 

# for Windows?

*yes* and *no*. you can use **IDA** to produce an assembly file. and `dump.c` must be modified  a little bit.
