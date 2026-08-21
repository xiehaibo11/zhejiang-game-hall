
undefined8
FUN_00e6ddc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ushort uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  
  plVar1 = (long *)(param_1 + 0x128);
  *(long **)(param_1 + 0x40) = plVar1;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x138) = param_2;
  *(undefined8 *)(param_1 + 0x140) = param_3;
  *(long *)(param_1 + 0x128) = param_4;
  *(undefined8 *)(param_1 + 0x130) = param_5;
  plVar10 = plVar1;
  do {
    uVar9 = plVar10[5];
    uVar18 = plVar10[1];
    lVar11 = plVar10[3];
    uVar12 = uVar9;
    uVar13 = uVar18;
    if ((long)uVar9 <= (long)uVar18) {
      uVar12 = uVar18;
      uVar13 = uVar9;
    }
    if ((lVar11 < (long)uVar13) || ((long)uVar12 < lVar11)) {
      lVar16 = plVar10[4];
      plVar10[8] = lVar16;
      plVar10[9] = uVar9;
      lVar14 = lVar11 + uVar9;
      lVar11 = uVar18 + lVar11;
      lVar16 = plVar10[2] + lVar16;
      lVar3 = plVar10[2] + param_4;
      if (lVar16 < 0) {
        lVar16 = lVar16 + 1;
      }
      if (lVar3 < 0) {
        lVar3 = lVar3 + 1;
      }
      plVar10[2] = lVar3 >> 1;
      lVar3 = (lVar3 >> 1) + (lVar16 >> 1);
      if (lVar3 < 0) {
        lVar3 = lVar3 + 1;
      }
      if (lVar14 < 0) {
        lVar14 = lVar14 + 1;
      }
      if (lVar11 < 0) {
        lVar11 = lVar11 + 1;
      }
      plVar10[6] = lVar16 >> 1;
      plVar10[7] = lVar14 >> 1;
      lVar14 = (lVar11 >> 1) + (lVar14 >> 1);
      if (lVar14 < 0) {
        lVar14 = lVar14 + 1;
      }
      plVar10[3] = lVar11 >> 1;
      plVar10[4] = lVar3 >> 1;
      plVar10[5] = lVar14 >> 1;
      *(long **)(param_1 + 0x40) = plVar10 + 4;
LAB_00e6deec:
      plVar10 = *(long **)(param_1 + 0x40);
    }
    else {
      if (uVar9 != uVar18) {
        iVar4 = *(int *)(param_1 + 0x98);
        iVar17 = 1;
        if ((long)uVar18 <= (long)uVar9) {
          iVar17 = 2;
        }
        if (iVar4 != iVar17) {
          iVar6 = *(int *)(param_1 + 4);
          if ((long)uVar9 < (long)uVar18) {
            uVar12 = ((uVar9 + (long)iVar6) - 1 & -(long)iVar6) - uVar9;
            lVar11 = (long)*(int *)(param_1 + 8);
            if (iVar4 == 0) goto LAB_00e6dfe4;
LAB_00e6df34:
            lVar16 = *(long *)(param_1 + 0x80);
            uVar13 = *(ulong *)(param_1 + 0x30);
            lVar14 = uVar13 - *(long *)(lVar16 + 0x10);
            if (lVar14 < 0) {
              uVar8 = 99;
              goto LAB_00e6e124;
            }
            if (lVar14 != 0) {
              *(long *)(lVar16 + 0x20) = lVar14 >> 3;
              if (lVar11 <= (long)uVar12) {
                uVar15 = 0x20;
                if ((*(ushort *)(lVar16 + 0x18) & 8) != 0) {
                  uVar15 = 0x10;
                }
                *(ushort *)(lVar16 + 0x18) = *(ushort *)(lVar16 + 0x18) | uVar15;
              }
              uVar2 = uVar13 + 0x40;
              *(ulong *)(param_1 + 0x80) = uVar13;
              *(ulong *)(param_1 + 0x30) = uVar2;
              *(undefined8 *)(uVar13 + 0x20) = 0;
              *(ulong *)(uVar13 + 0x10) = uVar2;
              *(ulong *)(lVar16 + 0x38) = uVar13;
              *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
              if (*(ulong *)(param_1 + 0x28) <= uVar2) goto LAB_00e6e10c;
LAB_00e6dfa4:
              *(undefined1 *)(param_1 + 0x7b) = 0;
              lVar14 = *(long *)(param_1 + 0x88);
              goto joined_r0x00e6dfac;
            }
            if (uVar13 < *(ulong *)(param_1 + 0x28)) goto LAB_00e6dfa4;
          }
          else {
            uVar12 = uVar9 & (long)(iVar6 + -1);
            lVar11 = (long)*(int *)(param_1 + 8);
            if (iVar4 != 0) goto LAB_00e6df34;
LAB_00e6dfe4:
            lVar14 = *(long *)(param_1 + 0x88);
joined_r0x00e6dfac:
            if (lVar14 == 0) {
              lVar14 = *(long *)(param_1 + 0x30);
              uVar13 = lVar14 + 0x40;
              *(long *)(param_1 + 0x80) = lVar14;
              *(long *)(param_1 + 0x88) = lVar14;
              *(ulong *)(param_1 + 0x30) = uVar13;
              if (uVar13 < *(ulong *)(param_1 + 0x28)) goto LAB_00e6dffc;
            }
            else {
              uVar13 = *(ulong *)(param_1 + 0x30);
              if (uVar13 < *(ulong *)(param_1 + 0x28)) {
LAB_00e6dffc:
                lVar14 = *(long *)(param_1 + 0x80);
                *(undefined8 *)(lVar14 + 0x20) = 0;
                *(undefined8 *)(lVar14 + 0x28) = 0;
                *(undefined8 *)(lVar14 + 8) = 0;
                *(ulong *)(lVar14 + 0x10) = uVar13;
                *(undefined8 *)(lVar14 + 0x38) = 0;
                uVar15 = (ushort)*(byte *)(param_1 + 0x120);
                *(ushort *)(lVar14 + 0x18) = uVar15;
                if ((long)uVar9 < (long)uVar18) {
                  *(ushort *)(lVar14 + 0x18) = uVar15 | 8;
                  if (lVar11 <= (long)uVar12) {
                    uVar15 = uVar15 | 0x28;
LAB_00e6e040:
                    *(ushort *)(lVar14 + 0x18) = uVar15;
                  }
                }
                else if (lVar11 <= (long)uVar12) {
                  uVar15 = uVar15 | 0x10;
                  goto LAB_00e6e040;
                }
                if (*(long *)(param_1 + 0x90) == 0) {
                  *(long *)(param_1 + 0x90) = lVar14;
                }
                *(int *)(param_1 + 0x98) = iVar17;
                *(undefined2 *)(param_1 + 0x7a) = 1;
                goto LAB_00e6e058;
              }
            }
          }
LAB_00e6e10c:
          uVar8 = 0x62;
LAB_00e6e124:
          *(undefined4 *)(param_1 + 0x38) = uVar8;
          return 1;
        }
LAB_00e6e058:
        lVar11 = *(long *)(param_1 + 0x68);
        lVar14 = *(long *)(param_1 + 0x70);
        if ((long)uVar9 < (long)uVar18) {
          cVar7 = FUN_00e6e7a0(param_1,2,FUN_00e6e718);
        }
        else {
          lVar16 = *(long *)(param_1 + 0x40);
          *(long *)(lVar16 + 8) = -*(long *)(lVar16 + 8);
          *(long *)(lVar16 + 0x18) = -*(long *)(lVar16 + 0x18);
          *(long *)(lVar16 + 0x28) = -*(long *)(lVar16 + 0x28);
          cVar5 = *(char *)(param_1 + 0x7a);
          cVar7 = FUN_00e6e7a0(param_1,2,FUN_00e6e718,-lVar14,-lVar11);
          if ((cVar5 != '\0') && (*(char *)(param_1 + 0x7a) == '\0')) {
            *(long *)(*(long *)(param_1 + 0x80) + 0x28) =
                 -*(long *)(*(long *)(param_1 + 0x80) + 0x28);
          }
          *(long *)(lVar16 + 8) = -*(long *)(lVar16 + 8);
        }
        if (cVar7 != '\0') {
          return 1;
        }
        goto LAB_00e6deec;
      }
      *(long **)(param_1 + 0x40) = plVar10 + -4;
      plVar10 = *(long **)(param_1 + 0x40);
    }
    if (plVar10 < plVar1) {
      *(long *)(param_1 + 0x58) = param_4;
      *(ulong *)(param_1 + 0x60) = uVar18;
      return 0;
    }
    param_4 = *plVar10;
  } while( true );
}

