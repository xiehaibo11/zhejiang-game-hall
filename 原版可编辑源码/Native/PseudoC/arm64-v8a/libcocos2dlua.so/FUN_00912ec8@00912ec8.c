
undefined8 FUN_00912ec8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  if ((*(byte *)(lVar1 + 0x98) & 1) == 0) {
    lVar1 = lVar1 + 0x99;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0xa8);
  }
  lua_pushstring(param_1,lVar1);
  return 1;
}

