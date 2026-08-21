
undefined8 FUN_00912f10(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  if ((*(byte *)(lVar1 + 0x70) & 1) == 0) {
    lVar2 = lVar1 + 0x71;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x80);
  }
  lua_pushlstring(param_1,lVar2,*(undefined8 *)(lVar1 + 0x88));
  return 1;
}

