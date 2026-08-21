
undefined8 FUN_008f8d80(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  if ((*(byte *)(lVar1 + 0x50) & 1) == 0) {
    lVar2 = lVar1 + 0x51;
    uVar3 = (ulong)(*(byte *)(lVar1 + 0x50) >> 1);
  }
  else {
    uVar3 = *(ulong *)(lVar1 + 0x58);
    lVar2 = *(long *)(lVar1 + 0x60);
  }
  lua_pushlstring(param_1,lVar2,uVar3);
  return 1;
}

