
void png_do_bgr(int *param_1,undefined1 *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  
  bVar3 = *(byte *)(param_1 + 4);
  if ((bVar3 >> 1 & 1) != 0) {
    iVar6 = *param_1;
    if (*(char *)((long)param_1 + 0x11) == '\x10') {
      if (bVar3 == 2) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar4 = *param_2;
                    /* try { // try from 010d58fc to 011d5903 has its CatchHandler @ 010d5934 */
          uVar5 = param_2[1];
                    /* try { // try from 010d5904 to 011d594f has its CatchHandler @ 010d587c */
          *param_2 = param_2[4];
          param_2[4] = uVar4;
          param_2[1] = param_2[5];
          param_2[5] = uVar5;
          param_2 = param_2 + 6;
        }
      }
      else if (bVar3 == 6) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar4 = *param_2;
          uVar5 = param_2[1];
          *param_2 = param_2[4];
          param_2[4] = uVar4;
          param_2[1] = param_2[5];
          param_2[5] = uVar5;
                    /* try { // try from 010d58cc to 011d58cf has its CatchHandler @ 010d5938 */
          param_2 = param_2 + 8;
        }
      }
    }
    else if (*(char *)((long)param_1 + 0x11) == '\b') {
      if (bVar3 == 2) {
        if (iVar6 != 0) {
          uVar1 = (ulong)(iVar6 - 1U) + 1;
          if (uVar1 < 2) {
            lVar7 = 0;
          }
          else {
                    /* try { // try from 010d59a0 to 011d5aa7 has its CatchHandler @ 010d5950 */
            uVar2 = ~(iVar6 - 1U) & 1;
            lVar7 = uVar1 - uVar2;
            if (lVar7 != 0) {
              puVar8 = param_2 + 2;
              lVar9 = lVar7;
              do {
                uVar5 = puVar8[-2];
                uVar4 = puVar8[1];
                lVar9 = lVar9 + -2;
                puVar8[-2] = *puVar8;
                puVar8[1] = puVar8[3];
                *puVar8 = uVar5;
                puVar8[3] = uVar4;
                puVar8 = puVar8 + 6;
              } while (lVar9 != 0);
              param_2 = param_2 + lVar7 * 3;
              if (uVar2 == 0) {
                return;
              }
            }
          }
          iVar6 = iVar6 - (int)lVar7;
          do {
            uVar4 = *param_2;
            iVar6 = iVar6 + -1;
            *param_2 = param_2[2];
            param_2[2] = uVar4;
            param_2 = param_2 + 3;
          } while (iVar6 != 0);
        }
      }
      else if ((bVar3 == 6) && (iVar6 != 0)) {
                    /* try { // try from 010d587c to 011d58cb has its CatchHandler @ 010d587c
                       catch(type#1 @ 00000000) { ... } // from try @ 010d587c with catch @ 010d587c
                       catch(type#1 @ 00000000) { ... } // from try @ 010d5904 with catch @ 010d587c
                        */
        uVar1 = (ulong)(iVar6 - 1U) + 1;
        if (uVar1 < 2) {
          lVar7 = 0;
        }
        else {
          uVar2 = ~(iVar6 - 1U) & 1;
          lVar7 = uVar1 - uVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d58fc with catch @ 010d5934
                        */
          if (lVar7 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d58cc with catch @ 010d5938
                        */
            puVar8 = param_2 + 4;
            lVar9 = lVar7;
            do {
              uVar5 = puVar8[-4];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d59a0 with catch @ 010d5950
                        */
              uVar4 = *puVar8;
              lVar9 = lVar9 + -2;
              puVar8[-4] = puVar8[-2];
              *puVar8 = puVar8[2];
              puVar8[-2] = uVar5;
              puVar8[2] = uVar4;
              puVar8 = puVar8 + 8;
            } while (lVar9 != 0);
            param_2 = param_2 + lVar7 * 4;
            if (uVar2 == 0) {
              return;
            }
          }
        }
        iVar6 = iVar6 - (int)lVar7;
        do {
          uVar4 = *param_2;
          iVar6 = iVar6 + -1;
          *param_2 = param_2[2];
          param_2[2] = uVar4;
                    /* try { // try from 010d5994 to 011d599f has its CatchHandler @ 010d5aa4 */
          param_2 = param_2 + 4;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}

