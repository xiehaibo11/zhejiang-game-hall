
void FUN_010ab380(uint param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  
  if (param_4 != 0) {
    iVar3 = -param_6;
    lVar6 = (long)param_5;
    uVar4 = 0x80;
    uVar1 = 0x100;
    if (param_6 != 2) {
      uVar1 = 0x80;
      uVar4 = 0x100;
    }
    do {
      uVar7 = *(uint *)(param_3 + 0x1c);
      if ((uVar7 >> 4 & 1) == 0) {
        cVar2 = *(char *)(param_3 + 0x20);
        iVar10 = (int)cVar2;
        lVar8 = *(long *)(param_3 + 0x30);
        if ((cVar2 == param_6) || (cVar2 == iVar3)) {
LAB_010ab3e0:
          if (iVar10 != 0) {
            if (iVar10 == param_6) {
              if (param_1 != 0) {
                lVar11 = 0;
LAB_010ab3f4:
                piVar12 = *(int **)(param_2 + lVar11 * 8);
                if (lVar6 <= lVar8 - *piVar12 || lVar6 <= -(lVar8 - *piVar12))
                goto code_r0x010ab410;
                uVar7 = uVar7 | 0x210;
LAB_010ab500:
                *(uint *)(param_3 + 0x1c) = uVar7;
                *(int **)(param_3 + 0x28) = piVar12;
              }
            }
            else {
                    /* try { // try from 010ab464 to 011ab46b has its CatchHandler @ 010ab488 */
              if ((iVar10 == iVar3) && (param_1 != 0)) {
                    /* try { // try from 010ab46c to 011ab49b has its CatchHandler @ 010ab434 */
                lVar11 = 0;
                do {
                  piVar12 = *(int **)(param_2 + lVar11 * 8);
                  lVar5 = (lVar8 - *piVar12) - (long)piVar12[1];
                    /* catch() { ... } // from try @ 010ab464 with catch @ 010ab488 */
                  if ((lVar5 < lVar6) && (-lVar5 < lVar6)) {
                    uVar7 = uVar7 | 0x410;
                    goto LAB_010ab500;
                  }
                  lVar11 = lVar11 + 1;
                    /* try { // try from 010ab49c to 011ab55b has its CatchHandler @ 010ab49c
                       catch() { ... } // from try @ 010ab49c with catch @ 010ab49c
                       catch() { ... } // from try @ 010ab564 with catch @ 010ab49c */
                } while ((uint)lVar11 < param_1);
              }
            }
            goto LAB_010ab55c;
          }
        }
        else {
          cVar2 = *(char *)(param_3 + 0x21);
          iVar10 = (int)cVar2;
          if ((cVar2 == param_6) || (cVar2 == iVar3)) goto LAB_010ab3e0;
        }
        if ((uVar7 >> 6 & 1) != 0) {
          if ((uVar7 & uVar4) == 0) {
            if (((uVar7 & uVar1) != 0) && (param_1 != 0)) {
              lVar11 = 0;
LAB_010ab4bc:
              piVar12 = *(int **)(param_2 + lVar11 * 8);
              lVar5 = (lVar8 - *piVar12) - (long)piVar12[1];
              if ((lVar6 <= lVar5) || (lVar6 <= -lVar5)) goto LAB_010ab4e0;
              uVar7 = uVar7 | 0x410;
              *(int **)(param_3 + 0x28) = piVar12;
LAB_010ab514:
              *(uint *)(param_3 + 0x1c) = uVar7;
            }
          }
          else {
            if (param_1 == 0) goto LAB_010ab55c;
            lVar11 = 0;
            do {
                    /* try { // try from 010ab434 to 011ab463 has its CatchHandler @ 010ab434
                       catch() { ... } // from try @ 010ab434 with catch @ 010ab434
                       catch() { ... } // from try @ 010ab46c with catch @ 010ab434 */
              piVar12 = *(int **)(param_2 + lVar11 * 8);
              lVar5 = lVar8 - *piVar12;
              if (lVar5 < lVar6 && -lVar5 < lVar6) {
                *(int **)(param_3 + 0x28) = piVar12;
                uVar7 = uVar7 | 0x210;
                goto LAB_010ab514;
              }
              lVar11 = lVar11 + 1;
            } while ((uint)lVar11 < param_1);
          }
LAB_010ab518:
          if ((*(long *)(param_3 + 0x28) == 0) && (param_1 != 0)) {
            uVar9 = 0;
            do {
              piVar12 = *(int **)(param_2 + uVar9 * 8);
              if ((*piVar12 <= lVar8) && (lVar8 <= (long)piVar12[1] + (long)*piVar12)) {
                *(int **)(param_3 + 0x28) = piVar12;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < param_1);
          }
        }
      }
LAB_010ab55c:
                    /* try { // try from 010ab55c to 011ab563 has its CatchHandler @ 010ab59c */
      param_4 = param_4 + -1;
      param_3 = param_3 + 0x48;
                    /* try { // try from 010ab564 to 011ab5b3 has its CatchHandler @ 010ab49c */
    } while (param_4 != 0);
  }
  return;
code_r0x010ab410:
  lVar11 = lVar11 + 1;
  if (param_1 <= (uint)lVar11) goto LAB_010ab55c;
  goto LAB_010ab3f4;
LAB_010ab4e0:
  lVar11 = lVar11 + 1;
  if (param_1 <= (uint)lVar11) goto LAB_010ab518;
  goto LAB_010ab4bc;
}

