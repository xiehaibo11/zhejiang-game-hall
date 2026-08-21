
undefined4 * FUN_00fa2828(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  
                    /* try { // try from 00fa2834 to 010a283f has its CatchHandler @ 00fa287c */
                    /* try { // try from 00fa2840 to 010a2883 has its CatchHandler @ 00fa271c */
  if (param_1 + 1 == param_2) {
    uVar2 = *param_1;
    sVar3 = (long)param_3 - (long)param_2;
    if (sVar3 != 0) {
      memmove(param_1,param_2,sVar3);
    }
    param_2 = param_1 + ((long)sVar3 >> 2);
    *param_2 = uVar2;
  }
  else if (param_2 + 1 == param_3) {
    uVar2 = param_3[-1];
    sVar3 = (long)(param_3 + -1) - (long)param_1;
    param_2 = param_3;
    if (sVar3 != 0) {
      param_2 = (undefined4 *)((long)param_3 - sVar3);
      memmove(param_2,param_1,sVar3);
    }
    *param_1 = uVar2;
  }
  else {
    lVar5 = (long)param_2 - (long)param_1 >> 2;
    lVar4 = (long)param_3 - (long)param_2 >> 2;
    lVar11 = lVar5;
    lVar8 = lVar4;
    puVar6 = param_2;
    if (lVar5 == lVar4) {
      for (; param_1 != param_2; param_1 = param_1 + 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa27e4 with catch @ 00fa287c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa280c with catch @ 00fa287c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2834 with catch @ 00fa287c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa2784 with catch @ 00fa2880
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa27b0 with catch @ 00fa2880
                        */
        uVar2 = *param_1;
        *param_1 = *puVar6;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      do {
        lVar7 = lVar8;
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar11 / lVar7;
        }
        lVar8 = lVar11 - lVar8 * lVar7;
        lVar11 = lVar7;
      } while (lVar8 != 0);
      if (lVar7 != 0) {
        puVar6 = param_1 + lVar7;
        do {
          puVar6 = puVar6 + -1;
          uVar2 = *puVar6;
          puVar9 = puVar6;
          puVar1 = puVar6 + lVar5;
          do {
            puVar10 = puVar1;
            lVar11 = (long)param_3 - (long)puVar10 >> 2;
            puVar1 = puVar10 + lVar5;
            if (lVar11 <= lVar5) {
              puVar1 = param_1 + (lVar5 - lVar11);
            }
            *puVar9 = *puVar10;
            puVar9 = puVar10;
          } while (puVar1 != puVar6);
          *puVar10 = uVar2;
        } while (puVar6 != param_1);
      }
      param_2 = param_1 + lVar4;
    }
  }
  return param_2;
}

