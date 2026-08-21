
void FUN_010773cc(long *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if (((param_2 <= param_3) && (param_4 < *(uint *)(param_1 + 3))) &&
     (param_5 < *(uint *)(param_1 + 3))) {
    lVar7 = *(long *)(param_1[2] + (ulong)param_4 * 0x10);
    lVar9 = *(long *)(param_1[2] + (ulong)param_5 * 0x10);
    lVar4 = *param_1;
    lVar3 = param_1[1];
                    /* try { // try from 01077430 to 0117745b has its CatchHandler @ 01077430
                       catch() { ... } // from try @ 01077430 with catch @ 01077430
                       catch() { ... } // from try @ 01077460 with catch @ 01077430 */
    uVar1 = param_4;
    if (lVar7 <= lVar9) {
      uVar1 = param_5;
    }
    if (lVar7 <= lVar9) {
      param_5 = param_4;
    }
    lVar12 = *(long *)(lVar4 + (ulong)param_5 * 0x10);
    lVar13 = *(long *)(lVar4 + (ulong)uVar1 * 0x10);
    lVar10 = *(long *)(lVar3 + (ulong)param_5 * 0x10);
    lVar5 = *(long *)(lVar3 + (ulong)uVar1 * 0x10);
    lVar8 = lVar9;
    if (lVar7 <= lVar9) {
      lVar8 = lVar7;
      lVar7 = lVar9;
    }
                    /* try { // try from 0107745c to 0117745f has its CatchHandler @ 01077470 */
                    /* try { // try from 01077460 to 01177483 has its CatchHandler @ 01077430 */
    lVar9 = lVar5 - lVar13;
                    /* catch() { ... } // from try @ 0107745c with catch @ 01077470 */
    if (lVar7 - lVar8 == 0) {
      do {
        uVar6 = (ulong)param_2;
        lVar8 = *(long *)(lVar4 + uVar6 * 0x10);
        param_2 = param_2 + 1;
        lVar7 = lVar9;
        if (lVar8 <= lVar12) {
          lVar7 = lVar10 - lVar12;
        }
        *(long *)(lVar3 + uVar6 * 0x10) = lVar7 + lVar8;
      } while (param_2 <= param_3);
    }
    else {
      uVar11 = 0;
      bVar2 = false;
      while( true ) {
        lVar14 = (ulong)param_2 * 0x10;
        lVar4 = *(long *)(lVar4 + lVar14);
        if (lVar12 < lVar4) {
          if (lVar4 < lVar13) {
            if (!bVar2) {
              uVar11 = FT_DivFix(lVar5 - lVar10,lVar7 - lVar8);
              bVar2 = true;
            }
            lVar4 = FT_MulFix(*(long *)(param_1[2] + lVar14) - lVar8,uVar11);
            lVar3 = param_1[1];
            lVar4 = lVar4 + lVar10;
          }
          else {
            lVar4 = lVar4 + lVar9;
          }
        }
        else {
          lVar4 = lVar4 + (lVar10 - lVar12);
        }
        param_2 = param_2 + 1;
        *(long *)(lVar3 + lVar14) = lVar4;
        if (param_3 < param_2) break;
        lVar4 = *param_1;
      }
    }
  }
  return;
}

