
void FUN_010ac8d8(undefined8 *param_1,int param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long local_160;
  long local_158 [31];
  
  if (0 < (int)param_3) {
    lVar11 = 0;
    do {
      uVar6 = param_3;
      if (0xf < (int)param_3) {
        uVar6 = 0x10;
      }
                    /* try { // try from 010ac9a0 to 011ac9ab has its CatchHandler @ 010acaa0 */
      lVar13 = (long)(int)(uVar6 << 1);
      lVar7 = 0;
      do {
                    /* try { // try from 010ac9ac to 011aca83 has its CatchHandler @ 010ac564 */
        lVar11 = *(long *)(param_4 + lVar7 * 8) + lVar11;
        lVar4 = FT_RoundFix(lVar11);
        lVar1 = lVar7 + 1;
        local_158[lVar7 + -1] = lVar4 >> 0x10;
        lVar7 = lVar1;
      } while (lVar1 < lVar13);
      lVar7 = lVar13;
      if (lVar13 < 3) {
        lVar7 = 2;
      }
      uVar2 = (lVar7 - 1U >> 1) + 1;
      if ((uVar2 < 2) || (uVar8 = uVar2 & 0xfffffffffffffffe, uVar8 == 0)) {
        lVar7 = 0;
LAB_010aca38:
        do {
          lVar1 = lVar7 + 2;
          local_158[lVar7] = local_158[lVar7] - local_158[lVar7 + -1];
          lVar7 = lVar1;
        } while (lVar1 < lVar13);
      }
      else {
        uVar9 = uVar8;
        plVar10 = local_158 + 2;
        do {
          uVar9 = uVar9 - 2;
          plVar10[-2] = plVar10[-2] - plVar10[-3];
          *plVar10 = *plVar10 - plVar10[-1];
          plVar10 = plVar10 + 4;
        } while (uVar9 != 0);
        lVar7 = uVar8 << 1;
        if (uVar2 != uVar8) goto LAB_010aca38;
      }
                    /* try { // try from 010ac93c to 011ac943 has its CatchHandler @ 010aca9c */
                    /* try { // try from 010ac944 to 011ac99f has its CatchHandler @ 010ac564 */
      if (((*(int *)(param_1 + 1) == 0) && (*(int *)(param_1 + 2) - 1U < 2)) && (uVar6 != 0)) {
        uVar5 = 0xffffffef;
        if (-0x11 < (int)~param_3) {
          uVar5 = ~param_3;
        }
        plVar10 = &local_160;
        iVar12 = uVar5 + 1;
        do {
          iVar3 = FUN_010ac668(param_1 + (ulong)(param_2 != 0) * 6 + 3,(int)*plVar10,(int)plVar10[1]
                               ,*param_1,0);
          if (iVar3 != 0) {
            *(int *)(param_1 + 1) = iVar3;
            break;
          }
          iVar12 = iVar12 + 1;
          plVar10 = plVar10 + 2;
        } while (iVar12 != 0);
      }
      param_3 = param_3 - uVar6;
    } while (0 < (int)param_3);
  }
                    /* try { // try from 010aca84 to 011aca9b has its CatchHandler @ 010aca9c */
  return;
}

