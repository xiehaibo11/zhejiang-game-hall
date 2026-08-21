
int FUN_00c2b218(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  iVar4 = (int)(lVar3 - (long)*(ulong **)(param_1 + 0x20) >> 3);
  if (((iVar4 < 1) || (uVar2 = **(ulong **)(param_1 + 0x20), (int)((long)uVar2 >> 0x2f) != -5)) ||
     (*(char *)((uVar2 & 0x7fffffffffff) + 0x18) != '#')) {
    iVar1 = FUN_00c29cf0(param_1,1);
    if (iVar1 < 0) {
      iVar1 = iVar1 + iVar4;
    }
    else if (iVar4 < iVar1) {
      iVar1 = iVar4;
    }
    iVar4 = iVar4 - iVar1;
    if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb458(param_1,1,0x446);
    }
  }
  else {
    *(int *)(lVar3 + -8) = iVar4 + -1;
    iVar4 = 1;
    *(undefined4 *)(lVar3 + -4) = 0xfff90000;
  }
  return iVar4;
}

