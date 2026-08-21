
void FUN_01451388(ulong param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
                 undefined8 param_6,ulong param_7,int param_8)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int in_w8;
  uint uVar12;
  int iVar13;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  double dVar14;
  double dVar15;
  
code_r0x01451388:
  uVar11 = param_7;
  param_7 = param_1;
  bVar4 = (uVar11 & 1) == 0;
  if ((int)uVar11 == (int)param_7) {
    if (bVar4) {
      param_4 = param_4 | 2;
    }
    else {
      lVar10 = unaff_x26 + (ulong)*(uint *)(uVar11 - 1);
      iVar9 = (int)lVar10;
      if (iVar9 == param_8) {
        param_4 = param_4 | 6;
        if (NAN(*(double *)(uVar11 + 3))) goto LAB_0145165c;
      }
      else {
        uVar2 = *(ushort *)(lVar10 + 7);
        if (uVar2 < 0x40) {
          if ((uVar2 >> 5 & 1) == 0) {
            uVar12 = 0x10;
          }
          else {
            uVar12 = 0x30;
          }
          param_4 = param_4 | uVar12;
        }
        else if (uVar2 < 0xa9) {
          if (uVar2 == 0x43) {
            if (iVar9 == in_w8) {
              param_4 = param_4 | 0x3fe;
            }
            else {
              param_4 = param_4 | 0x300;
            }
          }
          else if (uVar2 == 0x41) {
            param_4 = param_4 | 0x80;
          }
          else {
            param_4 = param_4 | 0x40;
          }
        }
        else {
          param_4 = param_4 | 0x100;
        }
      }
    }
LAB_0145164c:
    uVar6 = *(undefined8 *)(unaff_x26 + 0xb8);
    goto LAB_01451660;
  }
  bVar5 = (param_7 & 1) == 0;
  iVar9 = (int)unaff_x19;
  if (bVar4) {
    if (bVar5) {
      param_4 = param_4 | 2;
    }
    else {
      lVar10 = unaff_x26 + (ulong)*(uint *)(param_7 - 1);
      iVar13 = (int)lVar10;
      if (iVar13 == param_8) {
        dVar15 = *(double *)(param_7 + 3);
        dVar14 = (double)((int)uVar11 >> 1);
LAB_0145163c:
        param_4 = param_4 | 6;
        if (dVar14 == dVar15) goto LAB_0145164c;
      }
      else {
        if (iVar13 == in_w8) {
          param_4 = 0x3fe;
          param_1 = unaff_x26 + (ulong)*(uint *)(param_7 + 0xf);
          param_7 = uVar11;
          goto code_r0x01451388;
        }
        uVar2 = *(ushort *)(lVar10 + 7);
        if (uVar2 < 0x40) {
LAB_014518a4:
          *(int *)(param_5 + -0x20) = (iVar9 + -1) * 2;
          FUN_01349ae0();
          FUN_01451388(*(undefined8 *)(unaff_x26 + 0x370));
          return;
        }
        if (uVar2 == 0x41) {
          *(int *)(param_5 + -0x20) = (iVar9 + -1) * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c18));
        }
        if (0xa8 < uVar2) {
          *(int *)(param_5 + -0x20) = (iVar9 + -1) * 2;
          FUN_01349780();
          FUN_01451388(*(undefined8 *)(unaff_x26 + 0x370));
          return;
        }
        param_4 = 0x3fe;
      }
    }
  }
  else {
    param_1 = uVar11;
    if (bVar5) goto code_r0x01451388;
    lVar10 = unaff_x26 + (ulong)*(uint *)(uVar11 - 1);
    lVar8 = unaff_x26 + (ulong)*(uint *)(param_7 - 1);
    uVar2 = *(ushort *)(lVar10 + 7);
    uVar3 = *(ushort *)(lVar8 + 7);
    if (uVar2 < 0x40) {
      if (uVar3 < 0x40) {
        *(int *)(param_5 + -0x20) = (iVar9 + -1) * 2;
        uVar6 = FUN_01345360(param_7,uVar11);
        if ((uVar2 >> 5 & 1) == 0) {
          uVar12 = 0x10;
        }
        else {
          uVar12 = 0x30;
        }
        if ((uVar3 >> 5 & 1) == 0) {
          uVar7 = 0x10;
        }
        else {
          uVar7 = 0x30;
        }
        param_4 = param_4 | uVar12 | uVar7;
LAB_01451660:
        lVar8 = *(long *)(param_5 + -0x18);
        lVar10 = unaff_x26 +
                 (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(param_5 + -0x10) + 0x13) +
                                 3);
        if (*(int *)(lVar10 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
          lVar10 = *(long *)(unaff_x26 + 0xa0);
        }
        if ((int)lVar10 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
          lVar1 = (ulong)*(ushort *)(lVar8 + unaff_x19 + 3) * 4 + 0x1f;
          uVar12 = (int)unaff_x26 + *(int *)(lVar10 + lVar1);
          param_4 = uVar12 | param_4;
          if (uVar12 != param_4) {
            *(uint *)(lVar10 + lVar1) = param_4;
            *(undefined4 *)(lVar10 + 0x17) = 0;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x014516dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x21 + (ulong)*(byte *)(lVar8 + unaff_x19 + 5) * 8))(uVar6);
        return;
      }
      goto code_r0x01451388;
    }
    if (uVar2 == 0x40) {
      if (0xa8 < uVar3) {
        param_4 = 0x3fe;
        goto code_r0x01451388;
      }
      if (uVar3 == 0x40) {
        param_4 = param_4 | 0x40;
      }
      else {
        param_4 = 0x3fe;
      }
    }
    else {
      iVar13 = (int)lVar8;
      if (uVar2 == 0x42) {
        if (uVar3 == 0x42) {
          dVar14 = *(double *)(uVar11 + 3);
          dVar15 = *(double *)(param_7 + 3);
          goto LAB_0145163c;
        }
        if (uVar3 < 0x40) goto LAB_014518a4;
        if (iVar13 == in_w8) {
          param_4 = 0x3fe;
          param_1 = unaff_x26 + (ulong)*(uint *)(param_7 + 0xf);
          param_7 = uVar11;
          goto code_r0x01451388;
        }
        if (uVar3 == 0x41) {
          param_4 = 0x3fe;
          goto code_r0x01451388;
        }
        if (0xa8 < uVar3) {
          param_4 = 0x3fe;
          goto code_r0x01451388;
        }
        param_4 = 0x3fe;
      }
      else if (uVar2 == 0x43) {
        if ((int)lVar10 == in_w8) {
          if (iVar13 == (int)lVar10) {
            param_4 = 0x3fe;
            goto LAB_0145165c;
          }
          param_4 = 0x3fe;
          param_1 = param_7;
          param_7 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xf);
          goto code_r0x01451388;
        }
        if ((*(byte *)(lVar8 + 9) >> 4 & 1) != 0) {
          param_4 = 0x300;
          goto LAB_0145164c;
        }
        if (uVar3 < 0xa9) {
          if (iVar13 == in_w8) {
            param_4 = 0x3fe;
          }
          else {
            param_4 = 0x300;
          }
        }
        else {
          param_4 = 0x300;
        }
      }
      else if (uVar2 == 0x41) {
        if (iVar13 == param_8) {
          *(int *)(param_5 + -0x20) = (iVar9 + -1) * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c18));
        }
        if (uVar3 == 0x41) {
          *(int *)(param_5 + -0x20) = (iVar9 + -1) * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c10));
        }
        if (uVar3 < 0x40) {
          *(int *)(param_5 + -0x20) = (iVar9 + -1) * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c20));
        }
        if (iVar13 == in_w8) {
          FUN_01451388(unaff_x26 + (ulong)*(uint *)(param_7 + 0xf),param_2,param_3,0x3fe);
          return;
        }
        if (0xa8 < uVar3) goto code_r0x01451388;
      }
      else if (uVar3 < 0xa9) {
        if ((*(byte *)(lVar8 + 9) >> 4 & 1) == 0) {
          FUN_014516e0();
          return;
        }
        if ((*(byte *)(lVar10 + 9) >> 4 & 1) != 0) {
          param_4 = 0x300;
          goto LAB_0145164c;
        }
        param_4 = 0x300;
      }
      else {
        param_4 = param_4 | 0x100;
      }
    }
  }
LAB_0145165c:
  uVar6 = *(undefined8 *)(unaff_x26 + 0xc0);
  goto LAB_01451660;
}

