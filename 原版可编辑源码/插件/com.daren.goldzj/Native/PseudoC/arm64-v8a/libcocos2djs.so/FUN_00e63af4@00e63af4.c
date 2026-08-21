
void FUN_00e63af4(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  
  lVar6 = 0x18;
  lVar7 = 8;
  if (param_3 != 0) {
    lVar7 = 0x10;
  }
  lVar5 = param_1 + (ulong)param_3 * 0x38a8;
  lVar7 = *(long *)(param_2 + lVar7);
  if (param_3 != 0) {
    lVar6 = 0x20;
  }
  lVar6 = *(long *)(param_2 + lVar6);
  if ((*(long *)(lVar5 + 0x38e8) != lVar7) || (*(long *)(lVar5 + 0x38f0) != lVar6)) {
    *(long *)(lVar5 + 0x38e8) = lVar7;
    *(long *)(lVar5 + 0x38f0) = lVar6;
    lVar5 = param_1 + (ulong)param_3 * 0x38a8;
    *(long *)(lVar5 + 0x50) = lVar7;
    *(long *)(lVar5 + 0x58) = lVar6;
    if (*(int *)(lVar5 + 0x1fc) != 0) {
      uVar8 = 0;
      puVar9 = (uint *)(param_1 + (ulong)param_3 * 0x38a8 + 0x230);
      do {
        lVar2 = FT_MulFix(*(undefined8 *)(puVar9 + -0xc),lVar7);
        *(long *)(puVar9 + -10) = lVar2 + lVar6;
        *(long *)(puVar9 + -8) = lVar2 + lVar6;
        lVar2 = FT_MulFix(*(undefined8 *)(puVar9 + -6),lVar7);
        *(long *)(puVar9 + -4) = lVar2 + lVar6;
        *(long *)(puVar9 + -2) = lVar2 + lVar6;
        *puVar9 = *puVar9 & 0xfffffffe;
        lVar2 = FT_MulFix(*(long *)(puVar9 + -0xc) - *(long *)(puVar9 + -6),lVar7);
        if (lVar2 + 0x30U < 0x61) {
          uVar3 = *(long *)(puVar9 + -10) + 0x20U & 0xffffffffffffffc0;
          *(ulong *)(puVar9 + -8) = uVar3;
          lVar4 = FT_DivFix(uVar3,lVar7);
          lVar4 = lVar4 - *(long *)(puVar9 + -6);
          lVar2 = -lVar4;
          if (-1 < lVar4) {
            lVar2 = lVar4;
          }
          lVar2 = FT_MulFix(lVar2,lVar7);
          uVar3 = 0;
          if (0x1f < lVar2) {
            uVar3 = lVar2 + 0x20U & 0xffffffffffffffc0;
          }
          uVar1 = -uVar3;
          if (-1 < lVar4) {
            uVar1 = uVar3;
          }
          *(ulong *)(puVar9 + -2) = *(long *)(puVar9 + -8) - uVar1;
          *puVar9 = *puVar9 | 1;
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 0xe;
      } while (uVar8 < *(uint *)(lVar5 + 0x1fc));
    }
  }
  return;
}

