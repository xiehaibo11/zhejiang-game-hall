
void FUN_0012b908(byte *param_1,ulong param_2,byte *param_3,ulong *param_4,int param_5,
                 undefined4 *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar17 = *param_4;
  *param_4 = 0;
  *param_6 = 0;
  uVar13 = *(uint *)(param_1 + 0x5c);
  if (uVar13 < 0x113) {
LAB_0012b980:
    pbVar15 = param_1 + 0x68;
    if (uVar13 == 0) goto LAB_0012bbf4;
LAB_0012b988:
    if (uVar13 == 0x112) {
      uVar8 = 1;
      if (*(int *)(param_1 + 0x3c) == 0) {
        *param_6 = 1;
        uVar8 = 0;
      }
    }
    else {
      uVar18 = *(ulong *)(param_1 + 0x28);
      uVar8 = (ulong)uVar13;
      if (((ulong)uVar13 <= param_2 - uVar18) ||
         (uVar8 = param_2 - uVar18, (int)(param_2 - uVar18) != 0)) {
        uVar10 = (uint)uVar8;
        if (*(int *)(param_1 + 0x44) == 0) {
          iVar7 = *(int *)(param_1 + 0x40);
          if ((uint)(*(int *)(param_1 + 4) - iVar7) <= uVar10) {
            *(int *)(param_1 + 0x44) = *(int *)(param_1 + 4);
          }
        }
        else {
          iVar7 = *(int *)(param_1 + 0x40);
        }
        uVar4 = *(uint *)(param_1 + 0x48);
        *(uint *)(param_1 + 0x40) = iVar7 + uVar10;
        lVar2 = *(long *)(param_1 + 0x18);
        lVar3 = *(long *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x5c) = uVar13 - uVar10;
        do {
          lVar1 = lVar3;
          if (uVar4 <= uVar18) {
            lVar1 = 0;
          }
          uVar13 = (int)uVar8 - 1;
          uVar8 = (ulong)uVar13;
          *(undefined1 *)(lVar2 + uVar18) = *(undefined1 *)((lVar2 - (ulong)uVar4) + lVar1 + uVar18)
          ;
          uVar18 = uVar18 + 1;
        } while (uVar13 != 0);
        *(ulong *)(param_1 + 0x28) = uVar18;
      }
LAB_0012ba14:
      if (param_2 <= uVar18) {
        if (*(int *)(param_1 + 0x5c) == 0) {
          if (*(int *)(param_1 + 0x3c) != 0) {
            if (param_5 != 0) goto LAB_0012ba30;
            goto LAB_0012bca0;
          }
          uVar11 = 4;
        }
        else {
          if (param_5 != 0) {
            *param_6 = 2;
            goto LAB_0012bc98;
          }
LAB_0012bca0:
          uVar11 = 2;
        }
        uVar8 = 0;
        *param_6 = uVar11;
        goto LAB_0012be44;
      }
LAB_0012ba30:
      uVar13 = *(uint *)(param_1 + 100);
      uVar14 = (ulong)uVar13;
      if (uVar13 != 0) {
        bVar6 = uVar13 < 0x14;
        uVar16 = 0;
        if ((uVar13 < 0x14) && (uVar17 != 0)) {
          uVar16 = 0;
          do {
            uVar8 = uVar14 + uVar16;
            bVar6 = uVar8 < 0x13;
            pbVar15[uVar16 + uVar14] = param_3[uVar16];
            uVar16 = uVar16 + 1;
            if (0x12 < uVar8) break;
          } while (uVar16 < uVar17);
          uVar14 = (ulong)(uVar13 + (int)uVar16);
        }
        if ((bool)(bVar6 | param_2 <= uVar18)) {
          local_70 = param_1 + uVar14 + 0x68;
          uVar8 = FUN_0012be7c(param_1,param_1 + 0x68,&local_70);
          if ((int)uVar8 != 0) {
            uVar13 = (int)local_70 - (int)pbVar15;
            if (*(uint *)(param_1 + 100) <= uVar13) {
              if ((param_2 <= uVar18) && ((int)uVar8 != 2)) {
                uVar8 = 1;
                *param_4 = *param_4 + (ulong)(uVar13 - *(uint *)(param_1 + 100));
                uVar11 = 2;
                *(uint *)(param_1 + 100) = uVar13;
                goto LAB_0012bd70;
              }
              goto LAB_0012bb3c;
            }
            goto LAB_0012bd84;
          }
          if ((uint)uVar14 < 0x14) {
            *(uint *)(param_1 + 100) = (uint)uVar14;
            uVar8 = 0;
            *param_4 = *param_4 + uVar16;
            uVar11 = 3;
LAB_0012bd70:
            *param_6 = uVar11;
            goto LAB_0012be2c;
          }
LAB_0012bd84:
          iVar7 = 8;
          goto LAB_0012be30;
        }
        uVar13 = 0xffffffff;
LAB_0012bb3c:
        *(byte **)(param_1 + 0x30) = pbVar15;
        iVar7 = FUN_0012c45c(param_1,param_2,param_1 + 0x68);
        uVar8 = *(long *)(param_1 + 0x30) - (long)pbVar15;
        if ((int)uVar13 < 0) {
          if ((0x14 < uVar8) || (uVar8 < *(uint *)(param_1 + 100))) goto LAB_0012be38;
        }
        else if (uVar8 != uVar13) goto LAB_0012be38;
        uVar8 = uVar8 - *(uint *)(param_1 + 100);
        *param_4 = *param_4 + uVar8;
        param_1[100] = 0;
        param_1[0x65] = 0;
        param_1[0x66] = 0;
        param_1[0x67] = 0;
joined_r0x0012bb90:
        if (iVar7 != 0) {
          param_1[0x5c] = 0;
          param_1[0x5d] = 2;
          param_1[0x5e] = 0;
          param_1[0x5f] = 0;
          goto LAB_0012bc98;
        }
        uVar13 = *(uint *)(param_1 + 0x5c);
        uVar17 = uVar17 - uVar8;
        param_3 = param_3 + uVar8;
        if (uVar13 != 0) goto LAB_0012b988;
LAB_0012bbf4:
        uVar18 = *(ulong *)(param_1 + 0x28);
        goto LAB_0012ba14;
      }
      if (0x13 < uVar17 && param_2 > uVar18) {
        uVar13 = 0xffffffff;
        pbVar9 = param_3 + (uVar17 - 0x14);
LAB_0012bba4:
        *(byte **)(param_1 + 0x30) = param_3;
        iVar7 = FUN_0012c45c(param_1,param_2,pbVar9);
        uVar8 = *(long *)(param_1 + 0x30) - (long)param_3;
        if ((int)uVar13 < 0) {
          if (uVar17 < uVar8) goto LAB_0012be38;
        }
        else if (uVar8 != uVar13) goto LAB_0012be38;
        *param_4 = *param_4 + uVar8;
        goto joined_r0x0012bb90;
      }
      local_70 = param_3 + uVar17;
      uVar8 = FUN_0012be7c(param_1,param_3,&local_70);
      if ((int)uVar8 == 0) {
        if (0x13 < uVar17) goto LAB_0012bd84;
        *param_4 = *param_4 + uVar17;
        *(int *)(param_1 + 100) = (int)uVar17;
        if (uVar17 != 0) {
          pbVar15 = param_1 + 0x68;
          do {
            uVar17 = uVar17 - 1;
            *pbVar15 = *param_3;
            pbVar15 = pbVar15 + 1;
            param_3 = param_3 + 1;
          } while (uVar17 != 0);
        }
        uVar8 = 0;
        uVar11 = 3;
      }
      else {
        uVar14 = (long)local_70 - (long)param_3;
        uVar13 = (uint)uVar14;
        if (0x14 < uVar13) goto LAB_0012bd84;
        pbVar9 = param_3;
        if ((uVar18 < param_2) || ((int)uVar8 == 2)) goto LAB_0012bba4;
        *param_4 = *param_4 + (uVar14 & 0xffffffff);
        *(uint *)(param_1 + 100) = uVar13;
        if (uVar13 != 0) {
          uVar14 = uVar14 & 0xffffffff;
          pbVar15 = param_1 + 0x68;
          do {
            uVar14 = uVar14 - 1;
            *pbVar15 = *param_3;
            pbVar15 = pbVar15 + 1;
            param_3 = param_3 + 1;
          } while (uVar14 != 0);
        }
        uVar8 = 1;
        uVar11 = 2;
      }
      *param_6 = uVar11;
LAB_0012be2c:
      iVar7 = 1;
LAB_0012be30:
      if (iVar7 != 8) goto LAB_0012be44;
LAB_0012be38:
      param_1[0x5c] = 0xff;
      param_1[0x5d] = 1;
      param_1[0x5e] = 0;
      param_1[0x5f] = 0;
      uVar8 = 0xb;
    }
    goto LAB_0012be44;
  }
  if (0x114 < uVar13) {
    uVar10 = 0xb;
    if (uVar13 != 0x1ff) {
      uVar10 = 1;
    }
    uVar8 = (ulong)uVar10;
    goto LAB_0012be44;
  }
  uVar8 = (ulong)*(uint *)(param_1 + 100);
  if (uVar17 == 0) {
    if (*(uint *)(param_1 + 100) != 0) {
      uVar17 = 0;
      pbVar15 = param_3;
      goto LAB_0012bc40;
    }
LAB_0012bc50:
    uVar8 = 0;
    *param_6 = 3;
  }
  else {
    do {
      pbVar15 = param_3;
      if (4 < (uint)uVar8) break;
      pbVar15 = param_3 + 1;
      uVar17 = uVar17 - 1;
      param_1[uVar8 + 0x68] = *param_3;
      uVar8 = uVar8 + 1;
      *(int *)(param_1 + 100) = (int)uVar8;
      *param_4 = *param_4 + 1;
      param_3 = pbVar15;
    } while (uVar17 != 0);
LAB_0012bc40:
    if (param_1[0x68] == 0) {
      if ((uint)uVar8 < 5) goto LAB_0012bc50;
      uVar10 = (*(uint *)(param_1 + 0x69) & 0xff00ff00) >> 8 |
               (*(uint *)(param_1 + 0x69) & 0xff00ff) << 8;
      uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
      *(uint *)(param_1 + 0x3c) = uVar10;
      if (((*(int *)(param_1 + 0x44) != 0) || (*(int *)(param_1 + 0x40) != 0)) ||
         (uVar10 < 0xbffffc00)) {
        param_1[0x38] = 0xff;
        param_1[0x39] = 0xff;
        param_1[0x3a] = 0xff;
        param_1[0x3b] = 0xff;
        param_1[100] = 0;
        param_1[0x65] = 0;
        param_1[0x66] = 0;
        param_1[0x67] = 0;
        if (0x113 < uVar13) {
          uVar8 = (ulong)((0x300 << (ulong)((uint)param_1[1] + (uint)*param_1 & 0x1f)) + 0x7c0);
          puVar12 = *(undefined8 **)(param_1 + 8);
          do {
            uVar8 = uVar8 - 8;
            puVar12[1] = 0x400040004000400;
            *puVar12 = 0x400040004000400;
            puVar12 = puVar12 + 2;
          } while (uVar8 != 0);
          param_1[0x50] = 1;
          param_1[0x51] = 0;
          param_1[0x52] = 0;
          param_1[0x53] = 0;
          param_1[0x54] = 1;
          param_1[0x55] = 0;
          param_1[0x56] = 0;
          param_1[0x57] = 0;
          param_1[0x48] = 1;
          param_1[0x49] = 0;
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
          param_1[0x4c] = 1;
          param_1[0x4d] = 0;
          param_1[0x4e] = 0;
          param_1[0x4f] = 0;
          param_1[0x58] = 0;
          param_1[0x59] = 0;
          param_1[0x5a] = 0;
          param_1[0x5b] = 0;
        }
        uVar13 = 0;
        param_1[0x5c] = 0;
        param_1[0x5d] = 0;
        param_1[0x5e] = 0;
        param_1[0x5f] = 0;
        param_3 = pbVar15;
        goto LAB_0012b980;
      }
    }
LAB_0012bc98:
    uVar8 = 1;
  }
LAB_0012be44:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

