
undefined8 FUN_008f8d34(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
                    /* catch() { ... } // from try @ 008f8c40 with catch @ 008f8d40 */
  lVar1 = tolua_tousertype(param_1,1,0);
  if ((*(byte *)(lVar1 + 0x38) & 1) == 0) {
    lVar2 = lVar1 + 0x39;
    uVar3 = (ulong)(*(byte *)(lVar1 + 0x38) >> 1);
  }
  else {
    uVar3 = *(ulong *)(lVar1 + 0x40);
    lVar2 = *(long *)(lVar1 + 0x48);
  }
  lua_pushlstring(param_1,lVar2,uVar3);
  return 1;
}

