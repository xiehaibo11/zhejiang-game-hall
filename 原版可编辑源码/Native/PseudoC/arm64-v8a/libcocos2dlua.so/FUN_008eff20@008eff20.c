
undefined8 FUN_008eff20(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  lua_pushboolean(param_1,*(undefined1 *)(lVar1 + 0x280));
  return 1;
}

