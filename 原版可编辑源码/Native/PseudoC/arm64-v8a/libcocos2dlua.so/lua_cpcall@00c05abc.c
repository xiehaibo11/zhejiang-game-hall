
void lua_cpcall(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(lVar3 + 0xc1);
  iVar2 = FUN_00c17684();
  if (iVar2 != 0) {
    *(byte *)(lVar3 + 0xc1) = bVar1 & 0xf0 | *(byte *)(lVar3 + 0xc1) & 0xf;
  }
  return;
}

