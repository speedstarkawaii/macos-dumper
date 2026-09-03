`lua_gettop` gets mentioned around 1,238 times 

first call above ## literal pool for: "Random.new requires 0 or 1 argument" 

literally anywhere that arguments get checked

fun fact lua_settop is only a function down.

around  at least 8 instructions above

***************************************************************************

`lua_tolstring` gets mentioned around 35 times 

first call above ## literal pool for: "Attempted to index fixed array with string key '%s'. Number indices only."

uses 0xFFFFFFFFLL for 2nd argument

literally 1 instruction above

***************************************************************************

`lua_getthreaddata` (AKA L->userdata) gets mentioned around 208 times 

second call above ## literal pool for: "A module script may only connect in parallel if this instantiation of the script was required by a script associated with an actor."

uses lua state for the only argument

alternative to using user data offset.
