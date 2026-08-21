
undefined8 FUN_0091ac08(undefined8 param_1)

{
  ulong uVar1;
  
  lua_pushlightuserdata(param_1,crc32);
  lua_pushlightuserdata(param_1,crc32_combine);
  uVar1 = crc32(0,0,0);
  lua_pushnumber((double)uVar1,param_1);
  lua_pushnumber(0,param_1);
  lua_pushcclosure(param_1,FUN_0091b244,4);
                    /* try { // try from 0091ac78 to 00a1ac7f has its CatchHandler @ 0091acfc */
  return 1;
}

