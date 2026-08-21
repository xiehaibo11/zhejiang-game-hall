
undefined8 FUN_0091ab90(undefined8 param_1)

{
  ulong uVar1;
  
  lua_pushlightuserdata(param_1,adler32);
  lua_pushlightuserdata(param_1,adler32_combine);
  uVar1 = adler32(0,0,0);
  lua_pushnumber((double)uVar1,param_1);
                    /* try { // try from 0091abd8 to 00a1abdf has its CatchHandler @ 0091ad00 */
                    /* try { // try from 0091abe0 to 00a1ac77 has its CatchHandler @ 0091ab08 */
  lua_pushnumber(0,param_1);
  lua_pushcclosure(param_1,FUN_0091b244,4);
  return 1;
}

