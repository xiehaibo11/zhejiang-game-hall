
void FUN_00e78bb4(long param_1)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  short *psVar5;
  long lVar6;
  short sVar7;
  ulong uVar8;
  long lVar9;
  
  lVar4 = *(long *)(param_1 + 0x38);
  psVar5 = *(short **)(lVar4 + 0x28);
  if (psVar5 != (short *)0x0) {
    sVar3 = *psVar5;
    lVar6 = (long)sVar3;
    if (lVar6 < 2) {
      if (sVar3 == 0) {
        sVar7 = psVar5[1];
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        sVar7 = psVar5[1];
        if (sVar7 == 0) goto LAB_00e78c18;
      }
    }
    else {
      uVar2 = (int)*(short *)(*(long *)(psVar5 + 0xc) + lVar6 * 2 + -4) + 1;
      uVar8 = (ulong)uVar2;
      sVar7 = psVar5[1];
      if (uVar2 == (int)sVar7) {
LAB_00e78c18:
        *psVar5 = sVar3 + -1;
        *(undefined1 *)(lVar4 + 0x58) = 0;
        return;
      }
    }
    if (1 < sVar7) {
      lVar9 = *(long *)(psVar5 + 4);
      lVar1 = lVar9 + (long)sVar7 * 0x10;
      if (((*(long *)(lVar9 + (-(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4)) ==
            *(long *)(lVar1 + -0x10)) &&
          (*(long *)(lVar9 + (long)(int)uVar8 * 0x10 + 8) == *(long *)(lVar1 + -8))) &&
         (*(char *)(*(long *)(psVar5 + 8) + (long)sVar7 + -1) == '\x01')) {
        sVar7 = sVar7 + -1;
        psVar5[1] = sVar7;
      }
    }
    if (0 < sVar3) {
      if ((int)uVar8 == sVar7 + -1) {
        *psVar5 = sVar3 + -1;
        psVar5[1] = sVar7 + -1;
        *(undefined1 *)(lVar4 + 0x58) = 0;
        return;
      }
      *(short *)(*(long *)(psVar5 + 0xc) + lVar6 * 2 + -2) = (short)(sVar7 + -1);
    }
  }
  *(undefined1 *)(lVar4 + 0x58) = 0;
  return;
}

