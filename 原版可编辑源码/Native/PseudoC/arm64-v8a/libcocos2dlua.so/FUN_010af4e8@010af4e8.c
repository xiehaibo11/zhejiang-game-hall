
undefined8
FUN_010af4e8(uint *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
            long param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  
  uVar12 = param_5 - param_3;
  uVar3 = 0;
  if (((0 < (long)uVar12) && (param_6 <= param_5)) && (param_3 <= param_7)) {
    param_4 = param_4 - param_2;
    if (param_6 - param_3 == 0 || param_6 < param_3) {
      uVar7 = (ulong)*param_1;
      iVar10 = (int)(param_3 >> (uVar7 & 0x3f));
      uVar6 = param_1[1] - 1 & (uint)param_3;
    }
    else {
      lVar4 = FT_MulDiv(param_4,param_6 - param_3,uVar12);
      uVar7 = (ulong)*param_1;
      uVar6 = 0;
      param_2 = lVar4 + param_2;
      iVar10 = (int)(param_6 >> (uVar7 & 0x3f));
    }
    if (param_7 < param_5) {
      uVar14 = 0;
      param_5 = param_7;
    }
    else {
      uVar14 = param_1[1] - 1 & (uint)param_5;
    }
    iVar13 = (int)(param_5 >> (uVar7 & 0x3f));
    if ((int)uVar6 < 1) {
      if (*(char *)((long)param_1 + 0x8b) != '\0') {
        *(undefined1 *)((long)param_1 + 0x8b) = 0;
        *(long *)(param_1 + 0xe) = *(long *)(param_1 + 0xe) + -8;
      }
    }
    else {
      if (iVar10 == iVar13) {
        return 0;
      }
      lVar4 = FT_MulDiv(param_4,(long)(int)param_1[1] - (long)(int)uVar6,uVar12);
      param_2 = lVar4 + param_2;
      iVar10 = iVar10 + 1;
    }
    *(bool *)((long)param_1 + 0x8b) = uVar14 == 0;
    if (*(char *)((long)param_1 + 0x8a) != '\0') {
      *(long *)(*(long *)(param_1 + 0x24) + 0x28) = (long)iVar10;
      *(undefined1 *)((long)param_1 + 0x8a) = 0;
    }
    if ((ulong)(*(long *)(param_1 + 0xe) + (long)((iVar13 - iVar10) + 1) * 8) <
        *(ulong *)(param_1 + 0xc)) {
      if (param_4 < 1) {
        lVar4 = -param_4;
        lVar5 = FT_MulDiv_No_Round((long)(int)param_1[1],lVar4,uVar12);
        param_4 = (long)(int)param_1[1];
        lVar5 = -lVar5;
        uVar7 = 0xffffffffffffffff;
        plVar8 = *(long **)(param_1 + 0xe);
      }
      else {
        lVar5 = FT_MulDiv_No_Round((long)(int)param_1[1],param_4,uVar12);
        lVar4 = (long)(int)param_1[1];
        uVar7 = 1;
        plVar8 = *(long **)(param_1 + 0xe);
                    /* catch() { ... } // from try @ 010af698 with catch @ 010af650 */
      }
      if (-1 < iVar13 - iVar10) {
                    /* try { // try from 010af690 to 011af697 has its CatchHandler @ 010af7c8 */
        lVar2 = 0;
        if (uVar12 != 0) {
          lVar2 = (param_4 * lVar4) / (long)uVar12;
        }
                    /* try { // try from 010af698 to 011af7e3 has its CatchHandler @ 010af650 */
        lVar11 = -uVar12;
        iVar10 = (iVar13 + 2) - iVar10;
        plVar9 = plVar8;
        do {
          lVar11 = lVar11 + (param_4 * lVar4 - lVar2 * uVar12);
          iVar10 = iVar10 + -1;
          uVar1 = lVar11 >> 0x3f;
          plVar8 = plVar9 + 1;
          *plVar9 = param_2;
          param_2 = param_2 + lVar5 + (uVar7 & (uVar1 ^ 0xffffffffffffffff));
          lVar11 = lVar11 - (uVar12 & (uVar1 ^ 0xffffffffffffffff));
          plVar9 = plVar8;
        } while (1 < iVar10);
      }
      uVar3 = 0;
      *(long **)(param_1 + 0xe) = plVar8;
    }
    else {
      param_1[0x10] = 0x62;
      uVar3 = 1;
    }
  }
  return uVar3;
}

