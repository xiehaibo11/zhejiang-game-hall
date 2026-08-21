
/* cocos2d::ccGetBufferDataSize() */

int cocos2d::ccGetBufferDataSize(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = 0;
  iVar1 = 0;
  piVar3 = &DAT_01d1b0e8;
  do {
    if (((DAT_01d36d18 & 1 << (ulong)((uint)lVar2 & 0x1f)) != 0) && (piVar3[-1] == DAT_01d1b2e0)) {
      iVar4 = piVar3[1];
      if (iVar4 - 0x1400U < 2) {
        iVar4 = *piVar3;
      }
      else if (iVar4 - 0x1402U < 2) {
        iVar4 = *piVar3 << 1;
      }
      else if (iVar4 == 0x1406) {
        iVar4 = *piVar3 << 2;
      }
      else {
        iVar4 = 0;
      }
      iVar1 = iVar4 + iVar1;
    }
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 8;
  } while (lVar2 != 0x10);
  return iVar1;
}

