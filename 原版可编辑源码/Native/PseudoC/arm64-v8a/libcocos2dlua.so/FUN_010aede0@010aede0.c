
undefined8 FUN_010aede0(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

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
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  
  uVar9 = *(ulong *)(param_1 + 0x70);
  plVar1 = (long *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x168) = uVar9;
  *(undefined8 *)(param_1 + 0x150) = param_2;
  *(long *)(param_1 + 0x158) = param_3;
  *(long *)(param_1 + 0x140) = param_4;
  *(ulong *)(param_1 + 0x148) = param_5;
  *(long **)(param_1 + 0x48) = plVar1;
  plVar10 = plVar1;
  do {
    uVar12 = uVar9;
    uVar14 = param_5;
    if ((long)uVar9 <= (long)param_5) {
      uVar12 = param_5;
      uVar14 = uVar9;
    }
    if ((param_3 < (long)uVar14) || ((long)uVar12 < param_3)) {
      lVar15 = plVar10[4];
      lVar13 = param_5 + param_3;
      plVar10[8] = lVar15;
      plVar10[9] = uVar9;
      param_3 = param_3 + uVar9;
      lVar15 = plVar10[2] + lVar15;
      lVar16 = param_4 + plVar10[2];
      if (lVar15 < 0) {
        lVar15 = lVar15 + 1;
      }
      if (lVar16 < 0) {
        lVar16 = lVar16 + 1;
      }
      plVar10[2] = lVar16 >> 1;
      lVar16 = (lVar16 >> 1) + (lVar15 >> 1);
      if (lVar16 < 0) {
        lVar16 = lVar16 + 1;
      }
      if (param_3 < 0) {
        param_3 = param_3 + 1;
      }
      if (lVar13 < 0) {
        lVar13 = lVar13 + 1;
      }
      plVar10[6] = lVar15 >> 1;
      plVar10[7] = param_3 >> 1;
      lVar15 = (lVar13 >> 1) + (param_3 >> 1);
      if (lVar15 < 0) {
        lVar15 = lVar15 + 1;
      }
      plVar10[3] = lVar13 >> 1;
      plVar10[4] = lVar16 >> 1;
      plVar10[5] = lVar15 >> 1;
      *(long **)(param_1 + 0x48) = plVar10 + 4;
    }
    else if (uVar9 == param_5) {
      *(long **)(param_1 + 0x48) = plVar10 + -4;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xa8);
      iVar17 = 1;
      if ((long)param_5 <= (long)uVar9) {
        iVar17 = 2;
      }
      if (iVar3 != iVar17) {
        iVar6 = *(int *)(param_1 + 4);
        if ((long)uVar9 < (long)param_5) {
          uVar12 = ((uVar9 + (long)iVar6) - 1 & -(long)iVar6) - uVar9;
          lVar13 = (long)*(int *)(param_1 + 8);
          if (iVar3 != 0) goto LAB_010aef40;
LAB_010aefb8:
          lVar15 = *(long *)(param_1 + 0x98);
joined_r0x010aefe0:
          if (lVar15 == 0) {
            lVar15 = *(long *)(param_1 + 0x38);
            uVar14 = lVar15 + 0x40;
            *(long *)(param_1 + 0x90) = lVar15;
            *(long *)(param_1 + 0x98) = lVar15;
            *(ulong *)(param_1 + 0x38) = uVar14;
          }
          else {
            uVar14 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar14 < *(ulong *)(param_1 + 0x30)) {
            lVar15 = *(long *)(param_1 + 0x90);
            *(undefined8 *)(lVar15 + 0x20) = 0;
            *(undefined8 *)(lVar15 + 0x28) = 0;
            *(undefined8 *)(lVar15 + 8) = 0;
            *(ulong *)(lVar15 + 0x10) = uVar14;
            *(undefined8 *)(lVar15 + 0x38) = 0;
            bVar4 = *(byte *)(param_1 + 0x138);
            *(uint *)(lVar15 + 0x18) = (uint)bVar4;
            if ((long)uVar9 < (long)param_5) {
              *(uint *)(lVar15 + 0x18) = bVar4 | 8;
                    /* try { // try from 010af02c to 011af033 has its CatchHandler @ 010af198 */
              if (lVar13 <= (long)uVar12) {
                uVar11 = bVar4 | 0x28;
                    /* try { // try from 010af034 to 011af0af has its CatchHandler @ 010aec70 */
LAB_010af044:
                *(uint *)(lVar15 + 0x18) = uVar11;
              }
            }
            else if (lVar13 <= (long)uVar12) {
              uVar11 = bVar4 | 0x10;
              goto LAB_010af044;
            }
            if (*(long *)(param_1 + 0xa0) == 0) {
              *(long *)(param_1 + 0xa0) = lVar15;
            }
            *(int *)(param_1 + 0xa8) = iVar17;
            *(undefined2 *)(param_1 + 0x8a) = 1;
            goto LAB_010af05c;
          }
        }
        else {
                    /* try { // try from 010aefa4 to 011aefaf has its CatchHandler @ 010af19c */
          uVar12 = uVar9 & ((long)-iVar6 ^ 0xffffffffffffffffU);
          lVar13 = (long)*(int *)(param_1 + 8);
          if (iVar3 == 0) goto LAB_010aefb8;
LAB_010aef40:
          lVar15 = *(long *)(param_1 + 0x90);
          uVar14 = *(ulong *)(param_1 + 0x38);
                    /* try { // try from 010aef48 to 011aef4f has its CatchHandler @ 010af1cc */
          lVar16 = uVar14 - *(long *)(lVar15 + 0x10);
                    /* try { // try from 010aef50 to 011aefa3 has its CatchHandler @ 010aec70 */
          if (lVar16 < 0) {
            uVar8 = 99;
            goto LAB_010af118;
          }
          if (lVar16 != 0) {
            *(long *)(lVar15 + 0x20) = lVar16 >> 3;
            if (lVar13 <= (long)uVar12) {
              *(uint *)(lVar15 + 0x18) =
                   ((*(uint *)(lVar15 + 0x18) << 1 ^ 0xffffffff) & 0x10) + 0x10 |
                   *(uint *)(lVar15 + 0x18);
            }
            uVar2 = uVar14 + 0x40;
            *(ulong *)(param_1 + 0x90) = uVar14;
            *(ulong *)(param_1 + 0x38) = uVar2;
            *(undefined8 *)(uVar14 + 0x20) = 0;
            *(ulong *)(uVar14 + 0x10) = uVar2;
            *(ulong *)(lVar15 + 0x38) = uVar14;
            *(short *)(param_1 + 0x88) = *(short *)(param_1 + 0x88) + 1;
            uVar14 = uVar2;
          }
          if (uVar14 < *(ulong *)(param_1 + 0x30)) {
            *(undefined1 *)(param_1 + 0x8b) = 0;
            lVar15 = *(long *)(param_1 + 0x98);
            goto joined_r0x010aefe0;
          }
        }
        uVar8 = 0x62;
LAB_010af118:
        *(undefined4 *)(param_1 + 0x40) = uVar8;
        return 1;
      }
LAB_010af05c:
      lVar13 = *(long *)(param_1 + 0x78);
      lVar15 = *(long *)(param_1 + 0x80);
      if ((long)uVar9 < (long)param_5) {
        cVar7 = FUN_010af774(param_1,2,FUN_010af6ec);
      }
      else {
        lVar16 = *(long *)(param_1 + 0x48);
        *(long *)(lVar16 + 8) = -*(long *)(lVar16 + 8);
                    /* try { // try from 010af0b0 to 011af0bb has its CatchHandler @ 010af194 */
        *(long *)(lVar16 + 0x18) = -*(long *)(lVar16 + 0x18);
        *(long *)(lVar16 + 0x28) = -*(long *)(lVar16 + 0x28);
        cVar5 = *(char *)(param_1 + 0x8a);
        cVar7 = FUN_010af774(param_1,2,FUN_010af6ec,-lVar15,-lVar13);
        if ((cVar5 != '\0') && (*(char *)(param_1 + 0x8a) == '\0')) {
          *(long *)(*(long *)(param_1 + 0x90) + 0x28) = -*(long *)(*(long *)(param_1 + 0x90) + 0x28)
          ;
        }
        *(long *)(lVar16 + 8) = -*(long *)(lVar16 + 8);
      }
      if (cVar7 != '\0') {
        return 1;
      }
    }
    plVar10 = *(long **)(param_1 + 0x48);
    if (plVar10 < plVar1) {
                    /* try { // try from 010af104 to 011af143 has its CatchHandler @ 010aec70 */
      *(long *)(param_1 + 0x68) = param_4;
      *(ulong *)(param_1 + 0x70) = param_5;
      return 0;
    }
    uVar9 = plVar10[5];
    param_3 = plVar10[3];
    param_4 = *plVar10;
    param_5 = plVar10[1];
  } while( true );
}

