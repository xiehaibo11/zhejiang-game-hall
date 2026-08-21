
ulong bn_sub_part_words(ulong *param_1,ulong *param_2,ulong *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  int iVar11;
  
                    /* try { // try from 00b0bb14 to 00c0bb1f has its CatchHandler @ 00b0bbe4 */
                    /* try { // try from 00b0bb20 to 00c0bb47 has its CatchHandler @ 00b0ba80 */
  uVar3 = bn_sub_words(param_1,param_2,param_3,param_4);
  if (param_5 != 0) {
    lVar6 = (long)param_4;
    puVar5 = param_1 + param_4;
    if (param_5 < 0) {
      lVar4 = param_3[lVar6] + uVar3;
      if (param_3[lVar6] != 0) {
        uVar3 = 1;
      }
      *puVar5 = -lVar4;
      if (param_5 != -1) {
        param_5 = param_5 + -4;
        param_1 = param_1 + lVar6 + 2;
        puVar5 = param_3 + lVar6;
        do {
          lVar6 = puVar5[1] + uVar3;
          if (puVar5[1] != 0) {
            uVar3 = 1;
          }
          param_1[-1] = -lVar6;
          if (param_5 == -6) {
            return uVar3;
          }
          lVar6 = puVar5[2] + uVar3;
          if (puVar5[2] != 0) {
            uVar3 = 1;
          }
          *param_1 = -lVar6;
          if (-4 < param_5 + 4) {
            return uVar3;
          }
          lVar6 = puVar5[3] + uVar3;
          if (puVar5[3] != 0) {
            uVar3 = 1;
          }
          param_1[1] = -lVar6;
          if (param_5 == -8) {
            return uVar3;
          }
          uVar8 = puVar5[4];
          param_5 = param_5 + 4;
          lVar6 = uVar8 + uVar3;
          if (uVar8 != 0) {
            uVar3 = 1;
          }
          param_1[2] = -lVar6;
          param_1 = param_1 + 4;
          puVar5 = puVar5 + 4;
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
                    /* try { // try from 00b0bb48 to 00c0bb4f has its CatchHandler @ 00b0bbe0 */
        do {
                    /* try { // try from 00b0bb50 to 00c0bb6f has its CatchHandler @ 00b0ba80 */
          lVar7 = *(long *)((long)param_2 + lVar4 + lVar6);
          lVar9 = lVar7 - uVar3;
          if (lVar7 != 0) {
            uVar3 = 0;
          }
          *(long *)((long)param_1 + lVar4 + lVar6) = lVar9;
          if (param_5 < 2) {
            iVar11 = param_5;
            param_5 = param_5 + -1;
LAB_00b0bccc:
            puVar5 = (ulong *)((long)param_1 + lVar4 + lVar6);
            puVar10 = (ulong *)((long)param_2 + lVar4 + lVar6);
            if ((0 < param_5) && (iVar2 = iVar11 - param_5, param_5 < iVar11)) {
              if (iVar2 == 3) {
LAB_00b0bd4c:
                param_5 = param_5 + -1;
                *(undefined8 *)((long)param_1 + lVar4 + lVar6 + 0x18) =
                     *(undefined8 *)((long)param_2 + lVar4 + lVar6 + 0x18);
              }
              else {
                iVar11 = param_5;
                if ((iVar2 == 2) ||
                   ((iVar2 == 1 &&
                    (*(undefined8 *)((long)param_1 + lVar4 + lVar6 + 8) =
                          *(undefined8 *)((long)param_2 + lVar4 + lVar6 + 8), bVar1 = 1 < param_5,
                    iVar11 = param_5 + -1, param_5 = param_5 + -1, bVar1)))) {
                  param_5 = iVar11 + -1;
                  *(undefined8 *)((long)param_1 + lVar4 + lVar6 + 0x10) =
                       *(undefined8 *)((long)param_2 + lVar4 + lVar6 + 0x10);
                  if (1 < iVar11) goto LAB_00b0bd4c;
                }
              }
              puVar10 = (ulong *)((long)param_2 + lVar4 + lVar6 + 0x20);
              puVar5 = (ulong *)((long)param_1 + lVar4 + lVar6 + 0x20);
            }
            goto LAB_00b0bd84;
          }
                    /* try { // try from 00b0bb70 to 00c0bb77 has its CatchHandler @ 00b0bbe0 */
          lVar7 = *(long *)((long)param_2 + lVar4 + lVar6 + 8);
                    /* try { // try from 00b0bb78 to 00c0bb97 has its CatchHandler @ 00b0ba80 */
          lVar9 = lVar7 - uVar3;
          if (lVar7 != 0) {
            uVar3 = 0;
          }
          *(long *)((long)param_1 + lVar4 + lVar6 + 8) = lVar9;
          if (param_5 == 2) {
            return uVar3;
          }
          lVar7 = *(long *)((long)param_2 + lVar4 + lVar6 + 0x10);
                    /* try { // try from 00b0bb98 to 00c0bba3 has its CatchHandler @ 00b0bbe0 */
          lVar9 = lVar7 - uVar3;
          if (lVar7 != 0) {
            uVar3 = 0;
          }
                    /* try { // try from 00b0bba4 to 00c0bbe7 has its CatchHandler @ 00b0ba80 */
          *(long *)((long)param_1 + lVar4 + lVar6 + 0x10) = lVar9;
          if (param_5 < 4) {
            return uVar3;
          }
          lVar7 = *(long *)((long)param_2 + lVar4 + lVar6 + 0x18);
          uVar8 = uVar3;
          if (lVar7 != 0) {
            uVar8 = 0;
          }
          param_5 = param_5 + -4;
          *(ulong *)((long)param_1 + lVar4 + lVar6 + 0x18) = lVar7 - uVar3;
          if (param_5 == 0) {
            uVar3 = uVar8;
            iVar11 = 4;
            goto LAB_00b0bccc;
          }
          lVar4 = lVar4 + 0x20;
        } while (uVar8 != 0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b0bb48 with catch @ 00b0bbe0
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0bb70 with catch @ 00b0bbe0
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0bb98 with catch @ 00b0bbe0
                        */
        puVar5 = (ulong *)((long)param_1 + lVar4 + lVar6);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b0bae8 with catch @ 00b0bbe4
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0bb14 with catch @ 00b0bbe4
                        */
        puVar10 = (ulong *)((long)param_2 + lVar4 + lVar6);
        uVar3 = uVar8;
LAB_00b0bd84:
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
          bVar1 = param_5 < 6;
          param_5 = param_5 + -4;
          puVar10 = puVar10 + 4;
          if (bVar1) {
            return uVar3;
          }
        }
      }
    }
  }
  return uVar3;
}

