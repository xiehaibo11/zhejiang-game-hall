
void FUN_010b5e88(long param_1)

{
  long lVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  psVar3 = *(short **)(param_1 + 0x28);
  if (psVar3 != (short *)0x0) {
    sVar2 = *psVar3;
    lVar4 = (long)sVar2;
    if (lVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)((int)*(short *)(*(long *)(psVar3 + 0xc) + lVar4 * 2 + -4) + 1);
    }
    sVar5 = psVar3[1];
    lVar6 = (long)sVar5;
    if (1 < lVar6) {
      lVar8 = *(long *)(psVar3 + 4);
      lVar1 = lVar8 + lVar6 * 0x10;
      if (((*(long *)(lVar8 + (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4)) ==
            *(long *)(lVar1 + -0x10)) &&
          (*(long *)(lVar8 + (long)(int)uVar7 * 0x10 + 8) == *(long *)(lVar1 + -8))) &&
         (*(char *)(*(long *)(psVar3 + 8) + lVar6 + -1) == '\x01')) {
        sVar5 = sVar5 + -1;
        psVar3[1] = sVar5;
      }
    }
    if (0 < sVar2) {
      if ((int)uVar7 == sVar5 + -1) {
        *psVar3 = sVar2 + -1;
        psVar3[1] = sVar5 + -1;
        return;
      }
      *(short *)(*(long *)(psVar3 + 0xc) + lVar4 * 2 + -2) = (short)(sVar5 + -1);
    }
  }
  return;
}

