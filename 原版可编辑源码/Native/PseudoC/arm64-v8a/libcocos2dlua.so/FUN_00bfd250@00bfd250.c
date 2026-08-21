
undefined8 FUN_00bfd250(long param_1,char *param_2,long param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  cVar5 = *param_2;
  if (cVar5 == '>') {
    param_2 = param_2 + 1;
    lVar16 = 0;
    lVar13 = 0;
    puVar8 = (ulong *)(*(long *)(param_1 + 0x28) + -8);
    uVar14 = *puVar8;
    *(ulong **)(param_1 + 0x28) = puVar8;
    cVar5 = *param_2;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x238);
    lVar13 = *(long *)(param_1 + 0x38) + (ulong)(ushort)uVar1 * 8;
    uVar14 = *(ulong *)(lVar13 + -8);
    lVar16 = lVar13 + (ulong)(ushort)(uVar1 >> 0x10) * 8;
    if (uVar1 >> 0x10 == 0) {
      lVar16 = 0;
    }
  }
  uVar14 = uVar14 & 0x7fffffffffff;
  if (cVar5 != '\0') {
    bVar3 = false;
    bVar4 = false;
    do {
      while (cVar5 != 'S') {
        if (cVar5 == 'l') {
          if (lVar13 == 0) {
            *(undefined4 *)(param_3 + 0x28) = 0xffffffff;
          }
          else {
            uVar6 = FUN_00bfc748(param_1,uVar14,lVar16);
            *(undefined4 *)(param_3 + 0x28) = uVar6;
          }
        }
        else if (cVar5 == 'u') {
          *(uint *)(param_3 + 0x2c) = (uint)*(byte *)(uVar14 + 0xb);
          if (param_4 != 0) {
            if (*(char *)(uVar14 + 10) == '\0') {
              lVar11 = *(long *)(uVar14 + 0x20);
              *(uint *)(param_3 + 0x23c) = (uint)*(byte *)(lVar11 + -0x5e);
              *(uint *)(param_3 + 0x240) = *(byte *)(lVar11 + -0x2b) >> 1 & 1;
            }
            else {
              *(undefined4 *)(param_3 + 0x23c) = 0;
              *(undefined4 *)(param_3 + 0x240) = 1;
            }
          }
        }
        else if (cVar5 == 'n') {
          if (lVar13 != 0) {
            lVar11 = FUN_00bfcc0c(param_1,lVar13,param_3 + 8);
            *(long *)(param_3 + 0x10) = lVar11;
            if (lVar11 != 0) goto LAB_00bfd304;
          }
          *(char **)(param_3 + 0x10) = "";
          *(undefined8 *)(param_3 + 8) = 0;
        }
        else if (cVar5 == 'f') {
          bVar4 = true;
        }
        else {
          if (cVar5 != 'L') {
            return 0;
          }
          bVar3 = true;
        }
LAB_00bfd304:
        param_2 = param_2 + 1;
        cVar5 = *param_2;
        if (cVar5 == '\0') goto LAB_00bfd354;
      }
      if (*(char *)(uVar14 + 10) == '\0') {
        lVar15 = *(long *)(uVar14 + 0x20);
        iVar2 = *(int *)(lVar15 + -0x20);
        lVar11 = *(long *)(lVar15 + -0x28);
        *(long *)(param_3 + 0x20) = lVar11 + 0x18;
        FUN_00bfcd70(param_3 + 0x38,lVar11,iVar2);
        iVar7 = *(int *)(lVar15 + -0x1c);
        *(int *)(param_3 + 0x30) = iVar2;
        *(int *)(param_3 + 0x34) = iVar7 + iVar2;
        if ((iVar2 == 0) && (iVar7 != 0)) {
          *(undefined **)(param_3 + 0x18) = &DAT_0140ff30;
        }
        else {
          *(undefined **)(param_3 + 0x18) = &DAT_0140ff28;
        }
        goto LAB_00bfd304;
      }
      *(undefined1 *)(param_3 + 0x38) = 0x5b;
      *(undefined1 *)(param_3 + 0x39) = 0x43;
      *(undefined **)(param_3 + 0x20) = &DAT_0140ff38;
      *(undefined1 *)(param_3 + 0x3a) = 0x5d;
      *(undefined1 *)(param_3 + 0x3b) = 0;
      *(undefined4 *)(param_3 + 0x30) = 0xffffffff;
      *(undefined4 *)(param_3 + 0x34) = 0xffffffff;
      *(undefined **)(param_3 + 0x18) = &DAT_0140ff40;
      param_2 = param_2 + 1;
      cVar5 = *param_2;
    } while (cVar5 != '\0');
LAB_00bfd354:
    if (bVar4) {
      **(ulong **)(param_1 + 0x28) = uVar14 | 0xfffb800000000000;
      uVar9 = *(long *)(param_1 + 0x28) + 8;
      *(ulong *)(param_1 + 0x28) = uVar9;
      if (*(ulong *)(param_1 + 0x30) <= uVar9) {
        FUN_00bfe164(param_1);
      }
    }
    if (bVar3) {
      if (*(char *)(uVar14 + 10) == '\0') {
        uVar9 = FUN_00c1b840(param_1,0,0);
        lVar13 = *(long *)(uVar14 + 0x20);
        lVar16 = *(long *)(lVar13 + -0x18);
        if (lVar16 != 0) {
          iVar7 = 1;
          iVar2 = *(int *)(lVar13 + -0x20);
          if ((0xff < *(int *)(lVar13 + -0x1c)) && (iVar7 = 2, 0xffff < *(int *)(lVar13 + -0x1c))) {
            iVar7 = 4;
          }
          uVar1 = *(int *)(lVar13 + -0x5c) - 1;
          if (*(int *)(lVar13 + -0x5c) != 1) {
            lVar13 = 0;
            do {
              while( true ) {
                if (iVar7 == 1) {
                  uVar12 = (uint)*(byte *)(lVar13 + lVar16);
                }
                else if (iVar7 == 2) {
                  uVar12 = (uint)*(ushort *)(lVar16 + lVar13 * 2);
                }
                else {
                  uVar12 = *(uint *)(lVar16 + lVar13 * 4);
                }
                uVar12 = uVar12 + iVar2;
                if (uVar12 < *(uint *)(uVar9 + 0x30)) break;
                lVar13 = lVar13 + 1;
                puVar10 = (undefined8 *)FUN_00c1c648(param_1,uVar9);
                *puVar10 = 0xfffeffffffffffff;
                if (uVar1 <= (uint)lVar13) goto LAB_00bfd5c8;
              }
              lVar13 = lVar13 + 1;
              *(undefined8 *)(*(long *)(uVar9 + 0x10) + (long)(int)uVar12 * 8) = 0xfffeffffffffffff;
            } while ((uint)lVar13 < uVar1);
          }
        }
LAB_00bfd5c8:
        **(ulong **)(param_1 + 0x28) = uVar9 | 0xfffa000000000000;
      }
      else {
        **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
      }
      uVar14 = *(long *)(param_1 + 0x28) + 8;
      *(ulong *)(param_1 + 0x28) = uVar14;
      if (*(ulong *)(param_1 + 0x30) <= uVar14) {
        FUN_00bfe164(param_1);
      }
    }
  }
  return 1;
}

