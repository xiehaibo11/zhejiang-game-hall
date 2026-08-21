
undefined8
FUN_00e6e148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,undefined8 param_7)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ushort uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  
  plVar1 = (long *)(param_1 + 0x128);
  *(long **)(param_1 + 0x40) = plVar1;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x148) = param_2;
  *(undefined8 *)(param_1 + 0x150) = param_3;
  *(undefined8 *)(param_1 + 0x138) = param_4;
  *(undefined8 *)(param_1 + 0x140) = param_5;
  *(long *)(param_1 + 0x128) = param_6;
  *(undefined8 *)(param_1 + 0x130) = param_7;
  plVar9 = plVar1;
  do {
    uVar8 = plVar9[7];
    uVar21 = plVar9[1];
    lVar11 = plVar9[5];
    lVar13 = plVar9[3];
    uVar12 = uVar8;
    uVar15 = uVar21;
    if ((long)uVar21 < (long)uVar8) {
      uVar12 = uVar21;
      uVar15 = uVar8;
    }
    lVar18 = lVar11;
    lVar14 = lVar13;
    if (lVar11 <= lVar13) {
      lVar18 = lVar13;
      lVar14 = lVar11;
    }
    if ((lVar14 < (long)uVar12) || ((long)uVar15 < lVar18)) {
      plVar10 = plVar9 + 6;
      lVar18 = (long)(lVar13 + 1 + uVar21) >> 1;
      lVar13 = (lVar13 + 1 + lVar11 >> 1) + 1;
      plVar9[0xc] = *plVar10;
      plVar9[0xd] = uVar8;
      plVar9[3] = lVar18;
      lVar17 = (long)(uVar8 + lVar11 + 1) >> 1;
      lVar19 = plVar9[2] + 1 + param_6 >> 1;
      lVar14 = *plVar10 + plVar9[4] + 1 >> 1;
      lVar11 = (plVar9[2] + 1 + plVar9[4] >> 1) + 1;
      plVar9[10] = lVar14;
      plVar9[0xb] = lVar17;
      lVar18 = lVar13 + lVar18 >> 1;
      lVar13 = lVar13 + lVar17 >> 1;
      lVar17 = lVar11 + lVar19 >> 1;
      lVar11 = lVar11 + lVar14 >> 1;
      plVar9[5] = lVar18;
      plVar9[4] = lVar17;
      plVar9[8] = lVar11;
      plVar9[9] = lVar13;
      plVar9[2] = lVar19;
      *plVar10 = lVar11 + lVar17 + 1 >> 1;
      plVar9[7] = lVar13 + lVar18 + 1 >> 1;
      *(long **)(param_1 + 0x40) = plVar10;
LAB_00e6e2b4:
      plVar9 = *(long **)(param_1 + 0x40);
    }
    else {
      if (uVar8 != uVar21) {
        iVar3 = *(int *)(param_1 + 0x98);
        iVar20 = 1;
        if ((long)uVar21 <= (long)uVar8) {
          iVar20 = 2;
        }
        if (iVar3 != iVar20) {
          iVar5 = *(int *)(param_1 + 4);
          if ((long)uVar21 < (long)uVar8) {
            uVar12 = uVar8 & (long)(iVar5 + -1);
            lVar11 = (long)*(int *)(param_1 + 8);
            if (iVar3 != 0) goto LAB_00e6e2fc;
LAB_00e6e3ac:
            lVar13 = *(long *)(param_1 + 0x88);
joined_r0x00e6e374:
            if (lVar13 == 0) {
              lVar13 = *(long *)(param_1 + 0x30);
              uVar15 = lVar13 + 0x40;
              *(long *)(param_1 + 0x80) = lVar13;
              *(long *)(param_1 + 0x88) = lVar13;
              *(ulong *)(param_1 + 0x30) = uVar15;
              if (uVar15 < *(ulong *)(param_1 + 0x28)) goto LAB_00e6e3c4;
            }
            else {
              uVar15 = *(ulong *)(param_1 + 0x30);
              if (uVar15 < *(ulong *)(param_1 + 0x28)) {
LAB_00e6e3c4:
                lVar13 = *(long *)(param_1 + 0x80);
                *(undefined8 *)(lVar13 + 0x20) = 0;
                *(undefined8 *)(lVar13 + 0x28) = 0;
                *(undefined8 *)(lVar13 + 8) = 0;
                *(ulong *)(lVar13 + 0x10) = uVar15;
                *(undefined8 *)(lVar13 + 0x38) = 0;
                uVar16 = (ushort)*(byte *)(param_1 + 0x120);
                *(ushort *)(lVar13 + 0x18) = uVar16;
                if ((long)uVar21 < (long)uVar8) {
                  if (lVar11 <= (long)uVar12) {
                    uVar16 = uVar16 | 0x10;
                    goto LAB_00e6e408;
                  }
                }
                else {
                  *(ushort *)(lVar13 + 0x18) = uVar16 | 8;
                  if (lVar11 <= (long)uVar12) {
                    uVar16 = uVar16 | 0x28;
LAB_00e6e408:
                    *(ushort *)(lVar13 + 0x18) = uVar16;
                  }
                }
                if (*(long *)(param_1 + 0x90) == 0) {
                  *(long *)(param_1 + 0x90) = lVar13;
                }
                *(int *)(param_1 + 0x98) = iVar20;
                *(undefined2 *)(param_1 + 0x7a) = 1;
                goto LAB_00e6e420;
              }
            }
          }
          else {
            uVar12 = ((uVar8 + (long)iVar5) - 1 & -(long)iVar5) - uVar8;
            lVar11 = (long)*(int *)(param_1 + 8);
            if (iVar3 == 0) goto LAB_00e6e3ac;
LAB_00e6e2fc:
            lVar18 = *(long *)(param_1 + 0x80);
            uVar15 = *(ulong *)(param_1 + 0x30);
            lVar13 = uVar15 - *(long *)(lVar18 + 0x10);
            if (lVar13 < 0) {
              uVar7 = 99;
              goto LAB_00e6e4f8;
            }
            if (lVar13 != 0) {
              *(long *)(lVar18 + 0x20) = lVar13 >> 3;
              if (lVar11 <= (long)uVar12) {
                uVar16 = 0x20;
                if ((*(ushort *)(lVar18 + 0x18) & 8) != 0) {
                  uVar16 = 0x10;
                }
                *(ushort *)(lVar18 + 0x18) = *(ushort *)(lVar18 + 0x18) | uVar16;
              }
              uVar2 = uVar15 + 0x40;
              *(ulong *)(param_1 + 0x80) = uVar15;
              *(ulong *)(param_1 + 0x30) = uVar2;
              *(undefined8 *)(uVar15 + 0x20) = 0;
              *(ulong *)(uVar15 + 0x10) = uVar2;
              *(ulong *)(lVar18 + 0x38) = uVar15;
              *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
              if (*(ulong *)(param_1 + 0x28) <= uVar2) goto LAB_00e6e4e0;
LAB_00e6e36c:
              *(undefined1 *)(param_1 + 0x7b) = 0;
              lVar13 = *(long *)(param_1 + 0x88);
              goto joined_r0x00e6e374;
            }
            if (uVar15 < *(ulong *)(param_1 + 0x28)) goto LAB_00e6e36c;
          }
LAB_00e6e4e0:
          uVar7 = 0x62;
LAB_00e6e4f8:
          *(undefined4 *)(param_1 + 0x38) = uVar7;
          return 1;
        }
LAB_00e6e420:
        lVar11 = *(long *)(param_1 + 0x68);
        lVar13 = *(long *)(param_1 + 0x70);
        if ((long)uVar21 < (long)uVar8) {
          lVar18 = *(long *)(param_1 + 0x40);
          *(long *)(lVar18 + 8) = -*(long *)(lVar18 + 8);
          *(long *)(lVar18 + 0x18) = -*(long *)(lVar18 + 0x18);
          *(long *)(lVar18 + 0x28) = -*(long *)(lVar18 + 0x28);
          *(long *)(lVar18 + 0x38) = -*(long *)(lVar18 + 0x38);
          cVar4 = *(char *)(param_1 + 0x7a);
          cVar6 = FUN_00e6e7a0(param_1,3,FUN_00e6e998,-lVar13,-lVar11);
          if ((cVar4 != '\0') && (*(char *)(param_1 + 0x7a) == '\0')) {
            *(long *)(*(long *)(param_1 + 0x80) + 0x28) =
                 -*(long *)(*(long *)(param_1 + 0x80) + 0x28);
          }
          *(long *)(lVar18 + 8) = -*(long *)(lVar18 + 8);
        }
        else {
          cVar6 = FUN_00e6e7a0(param_1,3,FUN_00e6e998);
        }
        if (cVar6 != '\0') {
          return 1;
        }
        goto LAB_00e6e2b4;
      }
      *(long **)(param_1 + 0x40) = plVar9 + -6;
      plVar9 = *(long **)(param_1 + 0x40);
    }
    if (plVar9 < plVar1) {
      *(long *)(param_1 + 0x58) = param_6;
      *(ulong *)(param_1 + 0x60) = uVar21;
      return 0;
    }
    param_6 = *plVar9;
  } while( true );
}

