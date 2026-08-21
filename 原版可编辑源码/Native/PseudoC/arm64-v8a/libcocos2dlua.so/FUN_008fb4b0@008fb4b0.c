
undefined8 FUN_008fb4b0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  uVar1 = lua_tointeger(param_1,2);
  *(undefined4 *)(lVar2 + 0x28) = uVar1;
  return 0;
}

