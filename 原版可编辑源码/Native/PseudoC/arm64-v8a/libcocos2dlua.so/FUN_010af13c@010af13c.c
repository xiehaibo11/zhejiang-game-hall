
undefined8
FUN_010af13c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
            long param_6,ulong param_7)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  
                    /* try { // try from 010af144 to 011af14b has its CatchHandler @ 010af178 */
                    /* try { // try from 010af14c to 011af15b has its CatchHandler @ 010af17c */
                    /* try { // try from 010af15c to 011af16f has its CatchHandler @ 010aec70 */
  uVar9 = *(ulong *)(param_1 + 0x70);
  plVar1 = (long *)(param_1 + 0x140);
                    /* try { // try from 010af170 to 011af177 has its CatchHandler @ 010af180 */
                    /* catch() { ... } // from try @ 010af144 with catch @ 010af178
                       try { // try from 010af178 to 011af1e7 has its CatchHandler @ 010aec70 */
                    /* catch() { ... } // from try @ 010af14c with catch @ 010af17c */
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x178) = uVar9;
                    /* catch() { ... } // from try @ 010af0fc with catch @ 010af180
                       catch() { ... } // from try @ 010af170 with catch @ 010af180 */
  *(undefined8 *)(param_1 + 0x160) = param_2;
  *(long *)(param_1 + 0x168) = param_3;
  *(undefined8 *)(param_1 + 0x150) = param_4;
  *(long *)(param_1 + 0x158) = param_5;
  *(long *)(param_1 + 0x140) = param_6;
  *(ulong *)(param_1 + 0x148) = param_7;
                    /* catch() { ... } // from try @ 010af0b0 with catch @ 010af194 */
  *(long **)(param_1 + 0x48) = plVar1;
  plVar11 = plVar1;
                    /* catch() { ... } // from try @ 010af02c with catch @ 010af198 */
  do {
    uVar14 = uVar9;
    uVar18 = param_7;
    if ((long)param_7 < (long)uVar9) {
      uVar14 = param_7;
      uVar18 = uVar9;
    }
    lVar15 = param_3;
    lVar19 = param_5;
    if (param_3 <= param_5) {
      lVar15 = param_5;
      lVar19 = param_3;
    }
                    /* catch() { ... } // from try @ 010aef48 with catch @ 010af1cc */
    if ((lVar19 < (long)uVar14) || ((long)uVar18 < lVar15)) {
      plVar10 = plVar11 + 6;
                    /* try { // try from 010af1e8 to 011af2fb has its CatchHandler @ 010af1e8
                       catch() { ... } // from try @ 010af1e8 with catch @ 010af1e8
                       catch() { ... } // from try @ 010af308 with catch @ 010af1e8
                       catch() { ... } // from try @ 010af3f0 with catch @ 010af1e8 */
      lVar21 = (long)(param_7 + param_5 + 1) >> 1;
      lVar15 = (param_5 + 1 + param_3 >> 1) + 1;
      plVar11[0xc] = *plVar10;
      plVar11[0xd] = uVar9;
      plVar11[3] = lVar21;
      lVar16 = (long)(uVar9 + param_3 + 1) >> 1;
      lVar20 = param_6 + plVar11[2] + 1 >> 1;
      lVar13 = *plVar10 + plVar11[4] + 1 >> 1;
      lVar19 = (plVar11[2] + 1 + plVar11[4] >> 1) + 1;
      plVar11[10] = lVar13;
      plVar11[0xb] = lVar16;
      lVar21 = lVar15 + lVar21 >> 1;
      lVar16 = lVar15 + lVar16 >> 1;
      lVar17 = lVar19 + lVar20 >> 1;
      lVar15 = lVar19 + lVar13 >> 1;
      plVar11[5] = lVar21;
      plVar11[4] = lVar17;
      plVar11[8] = lVar15;
      plVar11[9] = lVar16;
      plVar11[2] = lVar20;
      *plVar10 = lVar17 + lVar15 + 1 >> 1;
      plVar11[7] = lVar21 + lVar16 + 1 >> 1;
      *(long **)(param_1 + 0x48) = plVar10;
    }
    else if (uVar9 == param_7) {
      *(long **)(param_1 + 0x48) = plVar11 + -6;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xa8);
      iVar22 = 1;
      if ((long)param_7 <= (long)uVar9) {
        iVar22 = 2;
      }
      if (iVar3 != iVar22) {
        iVar6 = *(int *)(param_1 + 4);
        if ((long)param_7 < (long)uVar9) {
          uVar14 = uVar9 & ((long)-iVar6 ^ 0xffffffffffffffffU);
          lVar15 = (long)*(int *)(param_1 + 8);
          if (iVar3 == 0) goto LAB_010af358;
LAB_010af2e0:
          lVar19 = *(long *)(param_1 + 0x90);
          uVar18 = *(ulong *)(param_1 + 0x38);
          lVar21 = uVar18 - *(long *)(lVar19 + 0x10);
          if (lVar21 < 0) {
            uVar8 = 99;
            goto LAB_010af4c4;
          }
          if (lVar21 != 0) {
                    /* try { // try from 010af2fc to 011af307 has its CatchHandler @ 010af4b8 */
            *(long *)(lVar19 + 0x20) = lVar21 >> 3;
            if (lVar15 <= (long)uVar14) {
                    /* try { // try from 010af308 to 011af3e3 has its CatchHandler @ 010af1e8 */
              *(uint *)(lVar19 + 0x18) =
                   ((*(uint *)(lVar19 + 0x18) << 1 ^ 0xffffffff) & 0x10) + 0x10 |
                   *(uint *)(lVar19 + 0x18);
            }
            uVar2 = uVar18 + 0x40;
            *(ulong *)(param_1 + 0x90) = uVar18;
            *(ulong *)(param_1 + 0x38) = uVar2;
            *(undefined8 *)(uVar18 + 0x20) = 0;
            *(ulong *)(uVar18 + 0x10) = uVar2;
            *(ulong *)(lVar19 + 0x38) = uVar18;
            *(short *)(param_1 + 0x88) = *(short *)(param_1 + 0x88) + 1;
            uVar18 = uVar2;
          }
          if (uVar18 < *(ulong *)(param_1 + 0x30)) {
            *(undefined1 *)(param_1 + 0x8b) = 0;
            lVar19 = *(long *)(param_1 + 0x98);
            goto joined_r0x010af380;
          }
        }
        else {
          uVar14 = ((uVar9 + (long)iVar6) - 1 & -(long)iVar6) - uVar9;
          lVar15 = (long)*(int *)(param_1 + 8);
          if (iVar3 != 0) goto LAB_010af2e0;
LAB_010af358:
          lVar19 = *(long *)(param_1 + 0x98);
joined_r0x010af380:
          if (lVar19 == 0) {
            lVar19 = *(long *)(param_1 + 0x38);
            uVar18 = lVar19 + 0x40;
            *(long *)(param_1 + 0x90) = lVar19;
            *(long *)(param_1 + 0x98) = lVar19;
            *(ulong *)(param_1 + 0x38) = uVar18;
          }
          else {
            uVar18 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar18 < *(ulong *)(param_1 + 0x30)) {
            lVar19 = *(long *)(param_1 + 0x90);
            *(undefined8 *)(lVar19 + 0x20) = 0;
            *(undefined8 *)(lVar19 + 0x28) = 0;
            *(undefined8 *)(lVar19 + 8) = 0;
            *(ulong *)(lVar19 + 0x10) = uVar18;
            *(undefined8 *)(lVar19 + 0x38) = 0;
            bVar4 = *(byte *)(param_1 + 0x138);
            *(uint *)(lVar19 + 0x18) = (uint)bVar4;
            if ((long)param_7 < (long)uVar9) {
              if (lVar15 <= (long)uVar14) {
                uVar12 = bVar4 | 0x10;
                goto LAB_010af3e4;
              }
            }
            else {
              *(uint *)(lVar19 + 0x18) = bVar4 | 8;
              if (lVar15 <= (long)uVar14) {
                uVar12 = bVar4 | 0x28;
LAB_010af3e4:
                    /* try { // try from 010af3e4 to 011af3ef has its CatchHandler @ 010af4cc */
                *(uint *)(lVar19 + 0x18) = uVar12;
              }
            }
            if (*(long *)(param_1 + 0xa0) == 0) {
                    /* try { // try from 010af3f0 to 011af4e7 has its CatchHandler @ 010af1e8 */
              *(long *)(param_1 + 0xa0) = lVar19;
            }
            *(int *)(param_1 + 0xa8) = iVar22;
            *(undefined2 *)(param_1 + 0x8a) = 1;
            goto LAB_010af3fc;
          }
        }
                    /* catch() { ... } // from try @ 010af2fc with catch @ 010af4b8 */
        uVar8 = 0x62;
LAB_010af4c4:
        *(undefined4 *)(param_1 + 0x40) = uVar8;
        return 1;
      }
LAB_010af3fc:
      lVar15 = *(long *)(param_1 + 0x78);
      lVar19 = *(long *)(param_1 + 0x80);
      if ((long)param_7 < (long)uVar9) {
        lVar21 = *(long *)(param_1 + 0x48);
        *(long *)(lVar21 + 8) = -*(long *)(lVar21 + 8);
        *(long *)(lVar21 + 0x18) = -*(long *)(lVar21 + 0x18);
        *(long *)(lVar21 + 0x28) = -*(long *)(lVar21 + 0x28);
        *(long *)(lVar21 + 0x38) = -*(long *)(lVar21 + 0x38);
        cVar5 = *(char *)(param_1 + 0x8a);
        cVar7 = FUN_010af774(param_1,3,FUN_010af960,-lVar19,-lVar15);
        if ((cVar5 != '\0') && (*(char *)(param_1 + 0x8a) == '\0')) {
          *(long *)(*(long *)(param_1 + 0x90) + 0x28) = -*(long *)(*(long *)(param_1 + 0x90) + 0x28)
          ;
        }
        *(long *)(lVar21 + 8) = -*(long *)(lVar21 + 8);
      }
      else {
        cVar7 = FUN_010af774(param_1,3,FUN_010af960);
      }
      if (cVar7 != '\0') {
        return 1;
      }
    }
    plVar11 = *(long **)(param_1 + 0x48);
    if (plVar11 < plVar1) {
      *(long *)(param_1 + 0x68) = param_6;
      *(ulong *)(param_1 + 0x70) = param_7;
                    /* catch() { ... } // from try @ 010af3e4 with catch @ 010af4cc */
      return 0;
    }
                    /* catch() { ... } // from try @ 010aefa4 with catch @ 010af19c */
    uVar9 = plVar11[7];
    param_3 = plVar11[5];
    param_5 = plVar11[3];
    param_6 = *plVar11;
    param_7 = plVar11[1];
  } while( true );
}

