
undefined8 FUN_008e11f8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  lua_pushboolean(param_1,*(undefined1 *)(lVar1 + 0x2e1));
  return 1;
}

