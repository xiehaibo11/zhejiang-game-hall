
void FUN_00e745d8(long param_1)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  short *psVar4;
  long lVar5;
  short sVar6;
  ulong uVar7;
  long lVar8;
  
  psVar4 = *(short **)(param_1 + 0x28);
  if (psVar4 != (short *)0x0) {
    sVar3 = *psVar4;
    lVar5 = (long)sVar3;
    if (lVar5 < 2) {
      if (sVar3 == 0) {
        sVar6 = psVar4[1];
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        sVar6 = psVar4[1];
        if (sVar6 == 0) goto LAB_00e74638;
      }
    }
    else {
      uVar2 = (int)*(short *)(*(long *)(psVar4 + 0xc) + lVar5 * 2 + -4) + 1;
      uVar7 = (ulong)uVar2;
      sVar6 = psVar4[1];
      if (uVar2 == (int)sVar6) {
LAB_00e74638:
        *psVar4 = sVar3 + -1;
        return;
      }
    }
    if (1 < sVar6) {
      lVar8 = *(long *)(psVar4 + 4);
      lVar1 = lVar8 + (long)sVar6 * 0x10;
      if (((*(long *)(lVar8 + (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4)) ==
            *(long *)(lVar1 + -0x10)) &&
          (*(long *)(lVar8 + (long)(int)uVar7 * 0x10 + 8) == *(long *)(lVar1 + -8))) &&
         (*(char *)(*(long *)(psVar4 + 8) + (long)sVar6 + -1) == '\x01')) {
        sVar6 = sVar6 + -1;
        psVar4[1] = sVar6;
      }
    }
    if (0 < sVar3) {
      if ((int)uVar7 == sVar6 + -1) {
        *psVar4 = sVar3 + -1;
        psVar4[1] = sVar6 + -1;
        return;
      }
      *(short *)(*(long *)(psVar4 + 0xc) + lVar5 * 2 + -2) = (short)(sVar6 + -1);
    }
  }
  return;
}

