
void FUN_00c05f28(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = DAT_01785688;
  DAT_017856c4 = DAT_017856c4 + 1;
  if ((*(byte *)(DAT_01785688 + 0xc1) & 0xa0) != 0) {
    return;
  }
  iVar1 = *(int *)(DAT_01785688 + 0x80);
  DAT_017856c8 = 0x4e;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      DAT_017856c8 = 0x49;
    }
    else if (iVar1 == -2) {
      DAT_017856c8 = 0x43;
    }
    else {
      DAT_017856c8 = 0x47;
      if (iVar1 != -3) {
        DAT_017856c8 = 0x4a;
      }
    }
  }
  *(byte *)(DAT_01785688 + 0xc1) = *(byte *)(DAT_01785688 + 0xc1) | 0x80;
  FUN_00bfe9d0(lVar2);
  return;
}

