
void FUN_00c05fac(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  byte bVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  bVar3 = *(byte *)(lVar2 + 0xc1) & 0x7f;
  if ((*(byte *)(lVar2 + 0xc1) >> 5 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0xc1) = 0x20;
    uVar1 = DAT_017856c4;
    DAT_017856c4 = 0;
    FUN_00bfe9d0(lVar2);
    (*DAT_01785690)(DAT_01785698,param_1,uVar1,DAT_017856c8);
    bVar3 = *(byte *)(lVar2 + 0xc1) & 0x80 | bVar3;
  }
  *(byte *)(lVar2 + 0xc1) = bVar3;
  FUN_00bfe9d0(lVar2);
  return;
}

