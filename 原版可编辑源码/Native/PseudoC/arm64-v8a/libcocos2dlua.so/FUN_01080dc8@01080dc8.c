
void FUN_01080dc8(long param_1)

{
  long lVar1;
  short sVar2;
  long lVar3;
  short *psVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar3 = *(long *)(param_1 + 0x38);
  psVar4 = *(short **)(lVar3 + 0x28);
  if (psVar4 != (short *)0x0) {
    sVar2 = *psVar4;
    lVar5 = (long)sVar2;
    if (lVar5 < 2) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulong)((int)*(short *)(*(long *)(psVar4 + 0xc) + lVar5 * 2 + -4) + 1);
    }
    sVar6 = psVar4[1];
    lVar7 = (long)sVar6;
    if (1 < lVar7) {
      lVar9 = *(long *)(psVar4 + 4);
      lVar1 = lVar9 + lVar7 * 0x10;
      if (((*(long *)(lVar9 + (-(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4)) ==
            *(long *)(lVar1 + -0x10)) &&
          (*(long *)(lVar9 + (long)(int)uVar8 * 0x10 + 8) == *(long *)(lVar1 + -8))) &&
         (*(char *)(*(long *)(psVar4 + 8) + lVar7 + -1) == '\x01')) {
        sVar6 = sVar6 + -1;
        psVar4[1] = sVar6;
      }
    }
    if (0 < sVar2) {
      if ((int)uVar8 == sVar6 + -1) {
        *psVar4 = sVar2 + -1;
        psVar4[1] = sVar6 + -1;
        *(undefined1 *)(lVar3 + 0x80) = 0;
        return;
      }
      *(short *)(*(long *)(psVar4 + 0xc) + lVar5 * 2 + -2) = (short)(sVar6 + -1);
    }
  }
  *(undefined1 *)(lVar3 + 0x80) = 0;
  return;
}

