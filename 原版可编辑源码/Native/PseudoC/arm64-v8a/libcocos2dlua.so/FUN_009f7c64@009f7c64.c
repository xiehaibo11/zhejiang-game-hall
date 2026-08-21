
undefined8 FUN_009f7c64(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)luaL_checkudata(param_1,1,"pb.Slice");
  lua_pushinteger(param_1,plVar1[1] - *plVar1);
  lua_pushinteger(param_1,(long)(((ulong)(uint)((int)*plVar1 - (int)plVar1[2]) << 0x20) +
                                0x100000000) >> 0x20);
  return 2;
}

