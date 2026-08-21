
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_0012b8d4(byte *param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int local_220 [2];
  ulong local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200 [64];
  uint uVar13;
  
  local_200[0] = param_4;
  uVar11 = 1;
LAB_0012b924:
  pbVar9 = param_1;
  if (param_2 <= pbVar9) {
    if (uVar11 != 0) {
      return local_200[(int)(uVar11 - 1)];
    }
switchD_0012bce0_caseD_3:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar1 = *pbVar9;
  param_1 = pbVar9 + 1;
  uVar12 = (uint)bVar1;
  uVar13 = (uint)bVar1;
  if (bVar1 < 0x21) {
    if (bVar1 < 0x1f) {
      if (uVar13 == 0x10) {
        param_1 = (byte *)FUN_0012aa68(param_1,&local_218);
        uVar4 = local_218;
      }
      else if (uVar13 < 0x11) {
        if (uVar13 == 10) {
          uVar4 = (ulong)*(ushort *)(pbVar9 + 1);
LAB_0012bb30:
          param_1 = pbVar9 + 3;
        }
        else if (uVar13 < 0xb) {
          if (uVar12 == 6) goto LAB_0012bc6c;
          if (uVar12 < 7) {
            if (bVar1 != 3) goto switchD_0012bce0_caseD_3;
            param_1 = pbVar9 + 9;
            uVar4 = *(ulong *)(pbVar9 + 1);
          }
          else {
            param_1 = pbVar9 + 2;
            if (uVar12 == 8) {
              uVar4 = (ulong)pbVar9[1];
            }
            else {
              if (uVar12 != 9) goto switchD_0012bce0_caseD_3;
              uVar4 = (long)(char)pbVar9[1];
            }
          }
        }
        else {
          if (uVar13 == 0xd) {
            uVar4 = (ulong)*(int *)(pbVar9 + 1);
          }
          else {
            if (0xd < uVar13) {
              param_1 = pbVar9 + 9;
              if ((bVar1 == 0xe) || (bVar1 == 0xf)) {
                uVar4 = *(ulong *)(pbVar9 + 1);
                goto LAB_0012be44;
              }
              goto switchD_0012bce0_caseD_3;
            }
            if (bVar1 == 0xb) {
              uVar4 = (ulong)*(short *)(pbVar9 + 1);
              goto LAB_0012bb30;
            }
            if (bVar1 != 0xc) goto switchD_0012bce0_caseD_3;
            uVar4 = (ulong)*(uint *)(pbVar9 + 1);
          }
          param_1 = pbVar9 + 5;
        }
      }
      else if (uVar13 == 0x15) {
        local_210 = (ulong)pbVar9[1];
        param_1 = pbVar9 + 2;
        if ((long)(int)(uVar11 - 1) <= (long)local_210) goto switchD_0012bce0_caseD_3;
        uVar4 = local_200[(long)(int)(uVar11 - 1) - local_210];
      }
      else {
        if (0x15 < uVar13) {
          if (uVar13 == 0x19) goto LAB_0012bc6c;
          if (0x19 < uVar13) goto LAB_0012bd30;
          iVar3 = uVar11 - 1;
          iVar2 = uVar11 - 2;
          if (uVar13 == 0x16) {
            if ((int)uVar11 < 2) goto switchD_0012bce0_caseD_3;
            uVar4 = local_200[iVar3];
            local_200[iVar3] = local_200[iVar2];
            local_200[iVar2] = uVar4;
          }
          else {
            if ((uVar13 != 0x17) || ((int)uVar11 < 3)) goto switchD_0012bce0_caseD_3;
            uVar4 = local_200[iVar3];
            uVar10 = local_200[(int)(uVar11 - 3)];
            local_200[iVar3] = local_200[iVar2];
            local_200[iVar2] = uVar10;
            local_200[(int)(uVar11 - 3)] = uVar4;
          }
          goto LAB_0012b924;
        }
        if (uVar13 == 0x12) {
          if (uVar11 == 0) goto switchD_0012bce0_caseD_3;
          iVar3 = uVar11 - 1;
        }
        else {
          if (uVar13 < 0x12) {
            param_1 = (byte *)FUN_0012aa90(param_1,&local_208);
            uVar4 = local_208;
            goto LAB_0012be44;
          }
          if (uVar13 == 0x13) {
            if (uVar11 == 0) goto switchD_0012bce0_caseD_3;
            uVar11 = uVar11 - 1;
            goto LAB_0012b924;
          }
          if ((uVar13 != 0x14) || ((int)uVar11 < 2)) goto switchD_0012bce0_caseD_3;
          iVar3 = uVar11 - 2;
        }
        uVar4 = local_200[iVar3];
      }
    }
    else {
LAB_0012bc6c:
      if (uVar11 == 0) goto switchD_0012bce0_caseD_3;
      uVar11 = uVar11 - 1;
      puVar8 = (ulong *)local_200[(int)uVar11];
      if (uVar12 == 0x1f) {
        uVar4 = -(long)puVar8;
      }
      else if (uVar12 < 0x20) {
        if (uVar12 == 6) {
switchD_0012bce0_caseD_8:
          uVar4 = *puVar8;
        }
        else {
          if (bVar1 != 0x19) goto switchD_0012bce0_caseD_3;
          uVar4 = ((ulong)puVar8 ^ (long)puVar8 >> 0x3f) - ((long)puVar8 >> 0x3f);
        }
      }
      else if (uVar12 == 0x23) {
        param_1 = (byte *)FUN_0012aa68(param_1,&local_218);
        uVar4 = (long)puVar8 + local_218;
      }
      else if (uVar12 == 0x94) {
        param_1 = pbVar9 + 2;
        switch(pbVar9[1]) {
        case 1:
          uVar4 = (ulong)(byte)*puVar8;
          break;
        case 2:
          uVar4 = (ulong)(ushort)*puVar8;
          break;
        default:
          goto switchD_0012bce0_caseD_3;
        case 4:
          uVar4 = (ulong)(uint)*puVar8;
          break;
        case 8:
          goto switchD_0012bce0_caseD_8;
        }
      }
      else {
        if (uVar12 != 0x20) goto switchD_0012bce0_caseD_3;
        uVar4 = ~(ulong)puVar8;
      }
    }
  }
  else if (uVar13 < 0x50) {
    if (0x2f < uVar12) {
      uVar4 = (ulong)(uVar12 - 0x30);
      goto LAB_0012be44;
    }
    if (0x27 < uVar12) {
      if (uVar13 < 0x2f) {
        if (0x28 < uVar13) goto LAB_0012bd30;
        if (uVar11 == 0) goto switchD_0012bce0_caseD_3;
        uVar11 = uVar11 - 1;
        param_1 = pbVar9 + 3;
        if (local_200[(int)uVar11] != 0) {
          param_1 = pbVar9 + 3 + *(short *)(pbVar9 + 1);
        }
      }
      else {
        param_1 = pbVar9 + (long)*(short *)(pbVar9 + 1) + 3;
      }
      goto LAB_0012b924;
    }
    if ((uVar13 < 0x24) && (0x22 < uVar13)) goto LAB_0012bc6c;
LAB_0012bd30:
    if ((int)uVar11 < 2) goto switchD_0012bce0_caseD_3;
    uVar12 = uVar11 - 2;
    uVar7 = local_200[(int)uVar12];
    uVar10 = local_200[(int)(uVar11 - 1)];
    uVar11 = uVar12;
    switch(bVar1) {
    case 0x1a:
      uVar4 = uVar10 & uVar7;
      break;
    case 0x1b:
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = (long)uVar7 / (long)uVar10;
      }
      break;
    case 0x1c:
      uVar4 = uVar7 - uVar10;
      break;
    case 0x1d:
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar7 / uVar10;
      }
      uVar4 = uVar7 - uVar4 * uVar10;
      break;
    case 0x1e:
      uVar4 = uVar10 * uVar7;
      break;
    default:
      goto switchD_0012bce0_caseD_3;
    case 0x21:
      uVar4 = uVar10 | uVar7;
      break;
    case 0x22:
      uVar4 = uVar10 + uVar7;
      break;
    case 0x24:
      uVar4 = uVar7 << (uVar10 & 0x3f);
      break;
    case 0x25:
      uVar4 = uVar7 >> (uVar10 & 0x3f);
      break;
    case 0x26:
      uVar4 = (long)uVar7 >> (uVar10 & 0x3f);
      break;
    case 0x27:
      uVar4 = uVar10 ^ uVar7;
      break;
    case 0x29:
      uVar4 = (ulong)(uVar7 == uVar10);
      break;
    case 0x2a:
      uVar4 = (ulong)((long)uVar10 <= (long)uVar7);
      break;
    case 0x2b:
      uVar4 = (ulong)((long)uVar10 < (long)uVar7);
      break;
    case 0x2c:
      uVar4 = (ulong)((long)uVar7 <= (long)uVar10);
      break;
    case 0x2d:
      uVar4 = (ulong)((long)uVar7 < (long)uVar10);
      break;
    case 0x2e:
      uVar4 = (ulong)(uVar7 != uVar10);
    }
  }
  else {
    if (uVar13 != 0x90) {
      if (uVar13 < 0x91) {
        if (bVar1 < 0x70) {
          iVar3 = uVar12 - 0x50;
          goto LAB_0012bb98;
        }
        param_1 = (byte *)FUN_0012aa90(param_1,&local_210);
        lVar6 = FUN_0012ad10(param_3,uVar13 - 0x70);
      }
      else {
        if (uVar13 == 0x94) goto LAB_0012bc6c;
        if (0x94 < uVar13) {
          if (uVar13 != 0x96) {
            if (uVar13 == 0xf1) {
              bVar1 = pbVar9[1];
              uVar5 = FUN_0012af40(bVar1,param_3);
              param_1 = (byte *)FUN_0012aad0(bVar1,uVar5,pbVar9 + 2,&local_208);
              uVar4 = local_208;
              goto LAB_0012be44;
            }
            goto switchD_0012bce0_caseD_3;
          }
          goto LAB_0012b924;
        }
        if (bVar1 != 0x92) goto switchD_0012bce0_caseD_3;
        uVar5 = FUN_0012aa68(param_1,local_220);
        param_1 = (byte *)FUN_0012aa90(uVar5,&local_210);
        lVar6 = FUN_0012ad10(param_3,local_220[0]);
      }
      uVar4 = lVar6 + local_210;
      goto LAB_0012be44;
    }
    param_1 = (byte *)FUN_0012aa68(param_1,local_220);
    iVar3 = local_220[0];
LAB_0012bb98:
    uVar4 = FUN_0012ad10(param_3,iVar3);
  }
LAB_0012be44:
  if (0x3f < uVar11) goto switchD_0012bce0_caseD_3;
  local_200[(int)uVar11] = uVar4;
  uVar11 = uVar11 + 1;
  goto LAB_0012b924;
}

