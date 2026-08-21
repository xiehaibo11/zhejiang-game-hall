
undefined8 FUN_00e6d96c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ushort uVar14;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 == 2) {
    lVar11 = *(long *)(param_1 + 0x60);
    if (lVar11 < param_3) {
      uVar8 = *(ulong *)(param_1 + 0x80);
      uVar9 = *(ulong *)(param_1 + 0x30);
      lVar3 = uVar9 - *(long *)(uVar8 + 0x10);
      if (-1 < lVar3) {
        iVar2 = *(int *)(param_1 + 8);
        lVar11 = ((lVar11 + *(int *)(param_1 + 4)) - 1U & -(long)*(int *)(param_1 + 4)) - lVar11;
        if (lVar3 == 0) {
          uVar12 = *(ulong *)(param_1 + 0x28);
          uVar10 = uVar9;
          if (uVar9 < uVar12) goto LAB_00e6dc44;
        }
        else {
          *(long *)(uVar8 + 0x20) = lVar3 >> 3;
          if (iVar2 <= lVar11) {
            uVar14 = 0x20;
            if ((*(ushort *)(uVar8 + 0x18) & 8) != 0) {
              uVar14 = 0x10;
            }
            *(ushort *)(uVar8 + 0x18) = *(ushort *)(uVar8 + 0x18) | uVar14;
          }
          uVar10 = uVar9 + 0x40;
          *(ulong *)(param_1 + 0x80) = uVar9;
          *(ulong *)(param_1 + 0x30) = uVar10;
          *(undefined8 *)(uVar9 + 0x20) = 0;
          *(ulong *)(uVar9 + 0x10) = uVar10;
          *(ulong *)(uVar8 + 0x38) = uVar9;
          *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
          uVar12 = *(ulong *)(param_1 + 0x28);
          uVar8 = uVar9;
          if (uVar10 < uVar12) {
LAB_00e6dc44:
            *(undefined1 *)(param_1 + 0x7b) = 0;
            uVar9 = uVar10;
            if (*(long *)(param_1 + 0x88) == 0) {
              uVar9 = uVar10 + 0x40;
              *(ulong *)(param_1 + 0x80) = uVar10;
              *(ulong *)(param_1 + 0x88) = uVar10;
              *(ulong *)(param_1 + 0x30) = uVar9;
              uVar8 = uVar10;
            }
            if (uVar9 < uVar12) {
              *(undefined8 *)(uVar8 + 0x20) = 0;
              *(undefined8 *)(uVar8 + 0x28) = 0;
              *(undefined8 *)(uVar8 + 8) = 0;
              *(ulong *)(uVar8 + 0x10) = uVar9;
              *(undefined8 *)(uVar8 + 0x38) = 0;
              uVar14 = 0x28;
              if (lVar11 < iVar2) {
                uVar14 = 8;
              }
              *(ushort *)(uVar8 + 0x18) = uVar14 | *(byte *)(param_1 + 0x120);
              if (*(long *)(param_1 + 0x90) == 0) {
                *(ulong *)(param_1 + 0x90) = uVar8;
              }
              goto LAB_00e6dc9c;
            }
          }
        }
        goto LAB_00e6dda4;
      }
LAB_00e6db5c:
      uVar7 = 99;
LAB_00e6dda8:
      *(undefined4 *)(param_1 + 0x38) = uVar7;
    }
    else {
LAB_00e6dd50:
      cVar4 = *(char *)(param_1 + 0x7a);
      cVar5 = FUN_00e6e51c(param_1,*(undefined8 *)(param_1 + 0x58),-lVar11,param_2,-param_3,
                           -*(long *)(param_1 + 0x70),-*(long *)(param_1 + 0x68));
      if ((cVar4 != '\0') && (*(char *)(param_1 + 0x7a) == '\0')) {
        *(long *)(*(long *)(param_1 + 0x80) + 0x28) = -*(long *)(*(long *)(param_1 + 0x80) + 0x28);
      }
      if (cVar5 == '\0') goto LAB_00e6db4c;
    }
LAB_00e6ddac:
    uVar6 = 1;
  }
  else {
    if (iVar2 == 1) {
      uVar8 = *(ulong *)(param_1 + 0x60);
      if (param_3 < (long)uVar8) {
        uVar9 = *(ulong *)(param_1 + 0x80);
        uVar10 = *(ulong *)(param_1 + 0x30);
        lVar11 = uVar10 - *(long *)(uVar9 + 0x10);
        if (lVar11 < 0) goto LAB_00e6db5c;
        iVar2 = *(int *)(param_1 + 8);
        uVar8 = uVar8 & (long)(*(int *)(param_1 + 4) + -1);
        if (lVar11 == 0) {
          uVar13 = *(ulong *)(param_1 + 0x28);
          uVar12 = uVar10;
          if (uVar10 < uVar13) goto LAB_00e6dbe0;
        }
        else {
          *(long *)(uVar9 + 0x20) = lVar11 >> 3;
          if ((long)iVar2 <= (long)uVar8) {
            uVar14 = 0x20;
            if ((*(ushort *)(uVar9 + 0x18) & 8) != 0) {
              uVar14 = 0x10;
            }
            *(ushort *)(uVar9 + 0x18) = *(ushort *)(uVar9 + 0x18) | uVar14;
          }
          uVar12 = uVar10 + 0x40;
          *(ulong *)(param_1 + 0x80) = uVar10;
          *(ulong *)(param_1 + 0x30) = uVar12;
          *(undefined8 *)(uVar10 + 0x20) = 0;
          *(ulong *)(uVar10 + 0x10) = uVar12;
          *(ulong *)(uVar9 + 0x38) = uVar10;
          *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
          uVar13 = *(ulong *)(param_1 + 0x28);
          uVar9 = uVar10;
          if (uVar12 < uVar13) {
LAB_00e6dbe0:
            *(undefined1 *)(param_1 + 0x7b) = 0;
            uVar10 = uVar12;
            if (*(long *)(param_1 + 0x88) == 0) {
              uVar10 = uVar12 + 0x40;
              *(ulong *)(param_1 + 0x80) = uVar12;
              *(ulong *)(param_1 + 0x88) = uVar12;
              *(ulong *)(param_1 + 0x30) = uVar10;
              uVar9 = uVar12;
            }
            if (uVar10 < uVar13) {
              *(undefined8 *)(uVar9 + 0x20) = 0;
              *(undefined8 *)(uVar9 + 0x28) = 0;
              *(undefined8 *)(uVar9 + 8) = 0;
              *(ulong *)(uVar9 + 0x10) = uVar10;
              *(undefined8 *)(uVar9 + 0x38) = 0;
              uVar14 = *(byte *)(param_1 + 0x120) | 0x10;
              if ((long)uVar8 < (long)iVar2) {
                uVar14 = (ushort)*(byte *)(param_1 + 0x120);
              }
              *(ushort *)(uVar9 + 0x18) = uVar14;
              if (*(long *)(param_1 + 0x90) == 0) {
                *(ulong *)(param_1 + 0x90) = uVar9;
              }
              goto LAB_00e6dd34;
            }
          }
        }
        goto LAB_00e6dda4;
      }
LAB_00e6dcb4:
      cVar4 = FUN_00e6e51c(param_1,*(undefined8 *)(param_1 + 0x58),uVar8,param_2,param_3,
                           *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
      if (cVar4 != '\0') goto LAB_00e6ddac;
    }
    else if (iVar2 == 0) {
      uVar8 = *(ulong *)(param_1 + 0x60);
      if ((long)uVar8 < param_3) {
        iVar2 = *(int *)(param_1 + 4);
        iVar1 = *(int *)(param_1 + 8);
        if (*(long *)(param_1 + 0x88) == 0) {
          lVar11 = *(long *)(param_1 + 0x30);
          *(long *)(param_1 + 0x80) = lVar11;
          *(long *)(param_1 + 0x88) = lVar11;
          uVar9 = lVar11 + 0x40;
          *(ulong *)(param_1 + 0x30) = uVar9;
          if (uVar9 < *(ulong *)(param_1 + 0x28)) goto LAB_00e6db80;
        }
        else {
          uVar9 = *(ulong *)(param_1 + 0x30);
          if (uVar9 < *(ulong *)(param_1 + 0x28)) {
LAB_00e6db80:
            lVar11 = *(long *)(param_1 + 0x80);
            *(undefined8 *)(lVar11 + 0x20) = 0;
            *(undefined8 *)(lVar11 + 0x28) = 0;
            *(undefined8 *)(lVar11 + 8) = 0;
            *(ulong *)(lVar11 + 0x10) = uVar9;
            *(undefined8 *)(lVar11 + 0x38) = 0;
            uVar14 = 8;
            if ((long)iVar1 <= (long)(((uVar8 + (long)iVar2) - 1 & -(long)iVar2) - uVar8)) {
              uVar14 = 0x28;
            }
            *(ushort *)(lVar11 + 0x18) = uVar14 | *(byte *)(param_1 + 0x120);
            if (*(long *)(param_1 + 0x90) == 0) {
              *(long *)(param_1 + 0x90) = lVar11;
            }
LAB_00e6dc9c:
            *(undefined4 *)(param_1 + 0x98) = 1;
            *(undefined1 *)(param_1 + 0x7a) = 1;
            uVar8 = *(ulong *)(param_1 + 0x60);
            *(undefined1 *)(param_1 + 0x7b) = 0;
            goto LAB_00e6dcb4;
          }
        }
LAB_00e6dda4:
        uVar7 = 0x62;
        goto LAB_00e6dda8;
      }
      if (param_3 < (long)uVar8) {
        iVar2 = *(int *)(param_1 + 4);
        iVar1 = *(int *)(param_1 + 8);
        if (*(long *)(param_1 + 0x88) == 0) {
          lVar11 = *(long *)(param_1 + 0x30);
          *(long *)(param_1 + 0x80) = lVar11;
          *(long *)(param_1 + 0x88) = lVar11;
          uVar9 = lVar11 + 0x40;
          *(ulong *)(param_1 + 0x30) = uVar9;
          if (uVar9 < *(ulong *)(param_1 + 0x28)) goto LAB_00e6dcf8;
        }
        else {
          uVar9 = *(ulong *)(param_1 + 0x30);
          if (uVar9 < *(ulong *)(param_1 + 0x28)) {
LAB_00e6dcf8:
            lVar11 = *(long *)(param_1 + 0x80);
            *(undefined8 *)(lVar11 + 0x20) = 0;
            *(undefined8 *)(lVar11 + 0x28) = 0;
            *(undefined8 *)(lVar11 + 8) = 0;
            *(ulong *)(lVar11 + 0x10) = uVar9;
            *(undefined8 *)(lVar11 + 0x38) = 0;
            uVar14 = (ushort)*(byte *)(param_1 + 0x120);
            if ((long)iVar1 <= (long)(uVar8 & (long)(iVar2 + -1))) {
              uVar14 = *(byte *)(param_1 + 0x120) | 0x10;
            }
            *(ushort *)(lVar11 + 0x18) = uVar14;
            if (*(long *)(param_1 + 0x90) == 0) {
              *(long *)(param_1 + 0x90) = lVar11;
            }
LAB_00e6dd34:
            *(undefined4 *)(param_1 + 0x98) = 2;
            *(undefined1 *)(param_1 + 0x7a) = 1;
            lVar11 = *(long *)(param_1 + 0x60);
            *(undefined1 *)(param_1 + 0x7b) = 0;
            goto LAB_00e6dd50;
          }
        }
        goto LAB_00e6dda4;
      }
    }
LAB_00e6db4c:
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x58) = param_2;
    *(long *)(param_1 + 0x60) = param_3;
  }
  return uVar6;
}

