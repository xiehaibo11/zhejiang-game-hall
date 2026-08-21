
/* WARNING: Removing unreachable block (ram,0x00b0c1fc) */

ulong bn_add_part_words(ulong *param_1,ulong *param_2,ulong *param_3,int param_4,int param_5)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  int iVar12;
  
  uVar3 = bn_add_words(param_1,param_2,param_3,param_4);
  if (param_5 != 0) {
    lVar6 = (long)param_4;
    puVar5 = param_1 + param_4;
    if (param_5 < 0) {
      if (uVar3 == 0) {
        param_3 = param_3 + lVar6;
      }
      else {
        do {
          puVar5 = param_3 + lVar6;
          puVar10 = param_1 + lVar6;
          uVar9 = (ulong)CARRY8(*puVar5,uVar3);
          *puVar10 = *puVar5 + uVar3;
          if (-2 < param_5) {
            iVar7 = param_5 + 1;
            uVar3 = uVar9;
            if (-1 < iVar7) {
              return uVar9;
            }
LAB_00b0c0d4:
            iVar12 = iVar7 - param_5;
            param_5 = iVar7;
            if (iVar12 == 3) {
LAB_00b0c128:
              param_5 = param_5 + 1;
              param_1[lVar6 + 3] = param_3[lVar6 + 3];
            }
            else {
              iVar8 = iVar7;
              if (iVar12 == 2) {
LAB_00b0c10c:
                param_5 = iVar8 + 1;
                param_1[lVar6 + 2] = param_3[lVar6 + 2];
                if (iVar8 < -1) goto LAB_00b0c128;
              }
              else if (iVar12 == 1) {
                param_5 = iVar7 + 1;
                param_1[lVar6 + 1] = param_3[lVar6 + 1];
                iVar8 = param_5;
                if (iVar7 < -1) goto LAB_00b0c10c;
              }
            }
            param_3 = param_3 + lVar6 + 4;
            puVar5 = param_1 + lVar6 + 4;
            goto LAB_00b0c14c;
          }
          uVar3 = (ulong)CARRY8(puVar5[1],uVar9);
          puVar10[1] = puVar5[1] + uVar9;
          if (param_5 == -2) {
            return uVar3;
          }
          uVar9 = (ulong)CARRY8(puVar5[2],uVar3);
          puVar10[2] = puVar5[2] + uVar3;
          if (-4 < param_5) {
            iVar7 = param_5 + 3;
            param_5 = -3;
            uVar3 = uVar9;
            if (-1 < iVar7) {
              return uVar9;
            }
            goto LAB_00b0c0d4;
          }
          uVar11 = puVar5[3] + uVar9;
          uVar3 = (ulong)CARRY8(puVar5[3],uVar9);
          puVar10[3] = uVar11;
          bVar2 = param_5 == -4;
          param_5 = param_5 + 4;
          if (bVar2) {
            return uVar3;
          }
          param_3 = param_3 + 4;
          param_1 = param_1 + 4;
                    /* try { // try from 00b0bf6c to 00c0bf73 has its CatchHandler @ 00b0c034 */
        } while (uVar11 < uVar9);
        uVar3 = 0;
        puVar5 = param_1 + lVar6;
                    /* try { // try from 00b0bf7c to 00c0bf87 has its CatchHandler @ 00b0c024 */
        param_3 = param_3 + lVar6;
LAB_00b0c14c:
        if (-1 < param_5) {
          return uVar3;
        }
      }
      *puVar5 = *param_3;
      if (param_5 != -1) {
        param_5 = param_5 + -4;
        puVar5 = puVar5 + 2;
        do {
          puVar5[-1] = param_3[1];
          if (param_5 == -6) {
            return uVar3;
          }
          *puVar5 = param_3[2];
          if (-4 < param_5 + 4) {
            return uVar3;
          }
          puVar5[1] = param_3[3];
          if (param_5 == -8) {
            return uVar3;
          }
          param_5 = param_5 + 4;
          puVar5[2] = param_3[4];
          puVar5 = puVar5 + 4;
          param_3 = param_3 + 4;
        } while (param_5 < -5);
      }
    }
    else {
      if (uVar3 == 0) {
        puVar10 = param_2 + lVar6;
      }
      else {
        lVar6 = lVar6 * 8;
        lVar4 = 0;
        do {
          uVar9 = *(ulong *)((long)param_2 + lVar4 + lVar6);
          lVar1 = uVar9 + uVar3;
          uVar3 = (ulong)CARRY8(uVar9,uVar3);
          *(long *)((long)param_1 + lVar4 + lVar6) = lVar1;
          if (param_5 < 2) {
            iVar7 = param_5 + -1;
            iVar12 = param_5;
LAB_00b0bfac:
            puVar5 = (ulong *)((long)param_1 + lVar4 + lVar6);
            puVar10 = (ulong *)((long)param_2 + lVar4 + lVar6);
            param_5 = iVar7;
            if ((0 < iVar7) && (iVar8 = iVar12 - iVar7, iVar7 < iVar12)) {
              if (iVar8 == 3) {
LAB_00b0c02c:
                    /* catch() { ... } // from try @ 00b0bf6c with catch @ 00b0c034 */
                    /* catch() { ... } // from try @ 00b0bf9c with catch @ 00b0c038 */
                iVar7 = iVar7 + -1;
                *(undefined8 *)((long)param_1 + lVar4 + lVar6 + 0x18) =
                     *(undefined8 *)((long)param_2 + lVar4 + lVar6 + 0x18);
              }
              else {
                iVar12 = iVar7;
                if ((iVar8 == 2) ||
                   ((iVar8 == 1 &&
                    (*(undefined8 *)((long)param_1 + lVar4 + lVar6 + 8) =
                          *(undefined8 *)((long)param_2 + lVar4 + lVar6 + 8), bVar2 = 1 < iVar7,
                    iVar12 = iVar7 + -1, iVar7 = iVar7 + -1, bVar2)))) {
                  iVar7 = iVar12 + -1;
                    /* catch() { ... } // from try @ 00b0bf7c with catch @ 00b0c024 */
                  *(undefined8 *)((long)param_1 + lVar4 + lVar6 + 0x10) =
                       *(undefined8 *)((long)param_2 + lVar4 + lVar6 + 0x10);
                  if (1 < iVar12) goto LAB_00b0c02c;
                }
              }
              puVar10 = (ulong *)((long)param_2 + lVar4 + lVar6 + 0x20);
              puVar5 = (ulong *)((long)param_1 + lVar4 + lVar6 + 0x20);
              param_5 = iVar7;
            }
            goto joined_r0x00b0c068;
          }
                    /* try { // try from 00b0be6c to 00c0bf6b has its CatchHandler @ 00b0be6c
                       catch() { ... } // from try @ 00b0be6c with catch @ 00b0be6c
                       catch() { ... } // from try @ 00b0bfa8 with catch @ 00b0be6c */
          uVar11 = *(ulong *)((long)param_2 + lVar4 + lVar6 + 8);
          uVar9 = (ulong)CARRY8(uVar11,uVar3);
          *(ulong *)((long)param_1 + lVar4 + lVar6 + 8) = uVar11 + uVar3;
          if (param_5 == 2) {
            return uVar9;
          }
          uVar3 = *(ulong *)((long)param_2 + lVar4 + lVar6 + 0x10);
          uVar11 = (ulong)CARRY8(uVar3,uVar9);
          *(ulong *)((long)param_1 + lVar4 + lVar6 + 0x10) = uVar3 + uVar9;
          if (param_5 < 4) {
            return uVar11;
          }
          uVar3 = *(ulong *)((long)param_2 + lVar4 + lVar6 + 0x18);
          uVar9 = uVar3 + uVar11;
          uVar3 = (ulong)CARRY8(uVar3,uVar11);
          param_5 = param_5 + -4;
          *(ulong *)((long)param_1 + lVar4 + lVar6 + 0x18) = uVar9;
          if (param_5 == 0) {
                    /* try { // try from 00b0bfa8 to 00c0c07f has its CatchHandler @ 00b0be6c */
            iVar12 = 4;
            iVar7 = param_5;
            goto LAB_00b0bfac;
          }
          lVar4 = lVar4 + 0x20;
        } while (uVar9 < uVar11);
        uVar3 = 0;
        puVar5 = (ulong *)((long)param_1 + lVar4 + lVar6);
        puVar10 = (ulong *)((long)param_2 + lVar4 + lVar6);
joined_r0x00b0c068:
        if (param_5 < 1) {
          return uVar3;
        }
      }
      *puVar5 = *puVar10;
      if (param_5 != 1) {
        puVar5 = puVar5 + 2;
        while( true ) {
          puVar5[-1] = puVar10[1];
          if (param_5 == 2) break;
          *puVar5 = puVar10[2];
          if (param_5 < 4) {
            return uVar3;
          }
          puVar5[1] = puVar10[3];
          if (param_5 + -4 == 0) {
            return uVar3;
          }
          puVar5[2] = puVar10[4];
          puVar5 = puVar5 + 4;
          bVar2 = param_5 < 6;
          param_5 = param_5 + -4;
          puVar10 = puVar10 + 4;
          if (bVar2) {
            return uVar3;
          }
        }
      }
    }
  }
  return uVar3;
}

