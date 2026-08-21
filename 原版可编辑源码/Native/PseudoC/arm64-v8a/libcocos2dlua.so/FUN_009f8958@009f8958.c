
undefined8 FUN_009f8958(undefined8 param_1)

{
  undefined8 uVar1;
  
  lua_settop(param_1,4);
  uVar1 = lua_newuserdata(param_1,0x60);
  FUN_009fb208(param_1,2,uVar1,0x60);
  lua_getfield(param_1,0xffffd8f0,"pb.Slice");
  lua_setmetatable(param_1,0xfffffffe);
  return 1;
}

