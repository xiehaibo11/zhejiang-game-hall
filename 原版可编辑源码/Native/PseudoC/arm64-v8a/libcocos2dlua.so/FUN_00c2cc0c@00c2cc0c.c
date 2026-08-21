
byte * FUN_00c2cc0c(undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  iVar3 = *(int *)((long)param_1 + 0x1c) + 1;
  *(int *)((long)param_1 + 0x1c) = iVar3;
  if (200 < iVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1[2],0x711);
  }
  bVar2 = *param_3;
LAB_00c2cc60:
  pbVar8 = param_2;
  switch(bVar2) {
  case 0:
    break;
  default:
    pbVar5 = (byte *)FUN_00c2c920(param_1 + 2,param_3);
    if ((byte *)param_1[1] <= param_2) goto LAB_00c2cc84;
    bVar1 = *param_2;
    uVar7 = (ulong)bVar1;
    if (bVar2 != 0x2e) {
      if (bVar2 == 0x5b) {
        uVar4 = FUN_00c2caec(uVar7,param_3,pbVar5 + -1);
        goto LAB_00c2ce60;
      }
      if (bVar2 == 0x25) {
        uVar13 = (ulong)param_3[1];
        goto LAB_00c2cebc;
      }
      goto LAB_00c2ce58;
    }
    bVar2 = *pbVar5;
    switch(bVar2) {
    case 0x2a:
      goto switchD_00c2cca0_caseD_2a;
    case 0x2b:
switchD_00c2ce80_caseD_2b:
      pbVar8 = (byte *)FUN_00c2d23c(param_1,param_2 + 1,param_3);
      break;
    default:
switchD_00c2ce80_caseD_2c:
      param_2 = param_2 + 1;
      param_3 = pbVar5;
      goto LAB_00c2cc60;
    case 0x2d:
      goto switchD_00c2cca0_caseD_2d;
    case 0x3f:
switchD_00c2ce80_caseD_3f:
      param_3 = pbVar5 + 1;
      pbVar8 = (byte *)FUN_00c2cc0c(param_1,param_2 + 1,param_3);
      if (pbVar8 != (byte *)0x0) break;
      bVar2 = pbVar5[1];
      goto LAB_00c2cc60;
    }
  case 0x24:
    if (param_3[1] == 0) {
      if ((byte *)param_1[1] != param_2) goto switchD_00c2cca0_caseD_2b;
      break;
    }
    pbVar5 = (byte *)FUN_00c2c920(param_1 + 2,param_3);
    if (param_2 < (byte *)param_1[1]) {
      bVar1 = *param_2;
LAB_00c2ce58:
      uVar4 = (uint)(bVar1 == bVar2);
      goto LAB_00c2ce60;
    }
LAB_00c2cc84:
    switch(*pbVar5) {
    case 0x2a:
switchD_00c2cca0_caseD_2a:
      pbVar8 = (byte *)FUN_00c2d23c(param_1,param_2,param_3);
      goto switchD_00c2ccb8_caseD_0;
    default:
      goto switchD_00c2cca0_caseD_2b;
    case 0x2d:
switchD_00c2cca0_caseD_2d:
      goto LAB_00c2cf80;
    case 0x3f:
      param_3 = pbVar5 + 1;
      bVar2 = pbVar5[1];
    }
    goto LAB_00c2cc60;
  case 0x25:
    bVar2 = param_3[1];
    uVar13 = (ulong)bVar2;
    if (bVar2 == 0x62) {
      bVar2 = param_3[2];
      if ((bVar2 == 0) || (param_3[3] == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb3a0(param_1[2],0x6fe);
      }
      if (*param_2 != bVar2) goto switchD_00c2cca0_caseD_2b;
      iVar3 = 1;
      do {
        param_2 = param_2 + 1;
        if ((byte *)param_1[1] <= param_2) goto switchD_00c2cca0_caseD_2b;
        bVar1 = *param_2;
        while (param_3[3] != bVar1) {
          param_2 = param_2 + 1;
          if (bVar2 == bVar1) {
            iVar3 = iVar3 + 1;
          }
          if ((byte *)param_1[1] <= param_2) goto switchD_00c2cca0_caseD_2b;
          bVar1 = *param_2;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      param_2 = param_2 + 1;
      if (param_2 == (byte *)0x0) goto switchD_00c2cca0_caseD_2b;
      bVar2 = param_3[4];
      param_3 = param_3 + 4;
    }
    else {
      if (bVar2 == 0x66) {
        pbVar8 = param_3 + 2;
        if (param_3[2] != 0x5b) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfb3a0(param_1[2],0x682);
        }
        param_3 = (byte *)FUN_00c2c920(param_1 + 2,pbVar8);
        if ((byte *)*param_1 == param_2) {
          bVar2 = 0;
        }
        else {
          bVar2 = param_2[-1];
        }
        iVar3 = FUN_00c2caec(bVar2,pbVar8,param_3 + -1);
        if ((iVar3 == 0) && (iVar3 = FUN_00c2caec(*param_2,pbVar8,param_3 + -1), iVar3 != 0))
        goto code_r0x00c2ce28;
        goto switchD_00c2cca0_caseD_2b;
      }
      if (((byte)(&DAT_01410f61)[bVar2] >> 3 & 1) == 0) {
        pbVar5 = (byte *)FUN_00c2c920(param_1 + 2,param_3);
        if (param_2 < (byte *)param_1[1]) {
          uVar7 = (ulong)*param_2;
LAB_00c2cebc:
          uVar12 = (uint)uVar13;
          uVar4 = (uint)uVar7;
          if ((uVar12 & 0xc0) == 0x40) {
            if ((&DAT_01411ac0)[uVar13 & 0x1f] == 0) {
              if (uVar12 == 0x7a) goto LAB_00c2d1cc;
              if (uVar12 != 0x5a) goto LAB_00c2cec8;
              uVar4 = (uint)(uVar4 != 0);
            }
            else {
              uVar4 = (uint)(byte)((&DAT_01411ac0)[uVar13 & 0x1f] & (&DAT_01410f61)[uVar7]);
              if ((uVar12 >> 5 & 1) == 0) {
LAB_00c2d1cc:
                uVar4 = (uint)(uVar4 == 0);
              }
            }
          }
          else {
LAB_00c2cec8:
            uVar4 = (uint)(uVar4 == uVar12);
          }
LAB_00c2ce60:
          if (uVar4 != 0) {
            bVar2 = *pbVar5;
            switch(bVar2) {
            case 0x2a:
              goto switchD_00c2cca0_caseD_2a;
            case 0x2b:
              goto switchD_00c2ce80_caseD_2b;
            default:
              goto switchD_00c2ce80_caseD_2c;
            case 0x2d:
              goto switchD_00c2cca0_caseD_2d;
            case 0x3f:
              goto switchD_00c2ce80_caseD_3f;
            }
          }
        }
        goto LAB_00c2cc84;
      }
      if ((((int)(bVar2 - 0x31) < 0) || (*(int *)(param_1 + 3) <= (int)(bVar2 - 0x31))) ||
         (uVar7 = param_1[uVar13 * 2 + -0x5d], uVar7 == 0xffffffffffffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb3a0(param_1[2],0x725);
      }
      if ((((ulong)(param_1[1] - (long)param_2) < uVar7) ||
          (iVar3 = memcmp((void *)param_1[uVar13 * 2 + -0x5e],param_2,uVar7), iVar3 != 0)) ||
         (param_2 = param_2 + uVar7, param_2 == (byte *)0x0)) goto switchD_00c2cca0_caseD_2b;
      bVar2 = param_3[2];
      param_3 = param_3 + 2;
    }
    goto LAB_00c2cc60;
  case 0x28:
    iVar3 = *(int *)(param_1 + 3);
    if (param_3[1] == 0x29) {
      param_3 = param_3 + 2;
      if (0x1f < iVar3) goto LAB_00c2d218;
      puVar6 = param_1 + (long)iVar3 * 2;
      uVar10 = 0xfffffffffffffffe;
      puVar6[4] = param_2;
    }
    else {
      param_3 = param_3 + 1;
      if (0x1f < iVar3) {
LAB_00c2d218:
                    /* WARNING: Subroutine does not return */
        FUN_00bfb3a0(param_1[2],0x73b,param_3);
      }
      puVar6 = param_1 + (long)iVar3 * 2;
      uVar10 = 0xffffffffffffffff;
      puVar6[4] = param_2;
    }
    puVar6[5] = uVar10;
    *(int *)(param_1 + 3) = iVar3 + 1;
    pbVar8 = (byte *)FUN_00c2cc0c(param_1,param_2);
    if (pbVar8 == (byte *)0x0) {
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
    }
    break;
  case 0x29:
    iVar3 = *(int *)(param_1 + 3) + -1;
    if (iVar3 < 0) goto LAB_00c2d1f4;
    lVar11 = (long)iVar3;
    if (param_1[lVar11 * 2 + 5] != -1) {
      plVar9 = param_1 + (long)(*(int *)(param_1 + 3) + -2) * 2 + 5;
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 == -1) {
LAB_00c2d1f4:
                    /* WARNING: Subroutine does not return */
          FUN_00bfb3a0(param_1[2],0x6a4,param_3 + 1);
        }
        lVar11 = *plVar9;
        plVar9 = plVar9 + -2;
      } while (lVar11 != -1);
      lVar11 = (long)iVar3;
    }
    param_1[lVar11 * 2 + 5] = (long)param_2 - param_1[lVar11 * 2 + 4];
    pbVar8 = (byte *)FUN_00c2cc0c(param_1,param_2);
    if (pbVar8 == (byte *)0x0) {
      param_1[lVar11 * 2 + 5] = 0xffffffffffffffff;
    }
  }
  goto switchD_00c2ccb8_caseD_0;
code_r0x00c2ce28:
  bVar2 = *param_3;
  goto LAB_00c2cc60;
LAB_00c2cf80:
  pbVar8 = (byte *)FUN_00c2cc0c(param_1,param_2,pbVar5 + 1);
  if (pbVar8 != (byte *)0x0) goto switchD_00c2ccb8_caseD_0;
  if ((byte *)param_1[1] <= param_2) goto switchD_00c2cca0_caseD_2b;
  bVar2 = *param_3;
  bVar1 = *param_2;
  if (bVar2 != 0x2e) {
    if (bVar2 == 0x5b) {
      iVar3 = FUN_00c2caec(bVar1,param_3,pbVar5 + -1);
      if (iVar3 == 0) goto switchD_00c2cca0_caseD_2b;
    }
    else if (bVar2 == 0x25) {
      bVar2 = param_3[1];
      if ((bVar2 & 0xc0) == 0x40) {
        if ((&DAT_01411ac0)[(ulong)bVar2 & 0x1f] == 0) {
          if (bVar2 != 0x7a) {
            if (bVar2 != 0x5a) goto LAB_00c2d024;
            if (bVar1 != 0) goto LAB_00c2cfcc;
            goto switchD_00c2cca0_caseD_2b;
          }
        }
        else {
          bVar1 = (&DAT_01411ac0)[(ulong)bVar2 & 0x1f] & (&DAT_01410f61)[bVar1];
          if ((bVar2 >> 5 & 1) != 0) goto LAB_00c2cfc8;
        }
        if (bVar1 != 0) goto switchD_00c2cca0_caseD_2b;
      }
      else {
LAB_00c2d024:
        if (bVar1 != bVar2) goto switchD_00c2cca0_caseD_2b;
      }
    }
    else {
      bVar1 = bVar1 == bVar2;
LAB_00c2cfc8:
      if (bVar1 == 0) goto switchD_00c2cca0_caseD_2b;
    }
  }
LAB_00c2cfcc:
  param_2 = param_2 + 1;
  goto LAB_00c2cf80;
switchD_00c2cca0_caseD_2b:
  pbVar8 = (byte *)0x0;
switchD_00c2ccb8_caseD_0:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
  return pbVar8;
}

