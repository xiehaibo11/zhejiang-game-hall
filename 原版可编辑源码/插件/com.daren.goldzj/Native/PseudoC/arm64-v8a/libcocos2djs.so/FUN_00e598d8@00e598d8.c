
/* WARNING: Type propagation algorithm not settling */

int FUN_00e598d8(long param_1,undefined8 param_2)

{
  long *plVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong local_58;
  ulong local_48;
  
  plVar1 = (long *)(param_1 + 0x528);
  *(undefined8 *)(param_1 + 0x530) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  iVar4 = (**(code **)(param_1 + 0x340))(param_1,0x43424c43,param_2,&local_48);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x538) = 2;
joined_r0x00e599d4:
    if (local_48 < 8) {
LAB_00e599d8:
      iVar4 = 3;
      lVar6 = *plVar1;
      goto joined_r0x00e59ad8;
    }
    uVar5 = FUN_00e1d4a0(param_2);
    iVar4 = *(int *)(param_1 + 0x538);
    if (iVar4 - 1U < 2) {
      iVar4 = FUN_00e1d5c4(param_2,local_48,plVar1);
      if (iVar4 == 0) {
        pbVar8 = *(byte **)(param_1 + 0x528);
        *(ulong *)(param_1 + 0x530) = local_48;
        if ((((uint)*pbVar8 << 0x18 | (uint)pbVar8[1] << 0x10 | 0x10000) != 0x30000) &&
           ((ushort)(CONCAT11(pbVar8[2],pbVar8[3]) | 0x100) != 0x300)) {
LAB_00e59c70:
          iVar4 = 2;
          lVar6 = *plVar1;
          goto joined_r0x00e59ad8;
        }
        uVar7 = (ulong)pbVar8[4] << 0x18 | (ulong)pbVar8[5] << 0x10;
        uVar9 = uVar7 | (ulong)pbVar8[6] << 8 | (ulong)pbVar8[7];
        if ((int)(uVar7 >> 0x10) == 0) {
          if (local_48 < (uVar9 * 0x30 | 8)) {
            uVar9 = (local_48 - 8) / 0x30;
          }
LAB_00e59aac:
          iVar4 = *(int *)(param_1 + 0x538);
          *(int *)(param_1 + 0x53c) = (int)uVar9;
LAB_00e59b10:
          *(undefined8 *)(param_1 + 0x5a8) = 0;
          *(undefined8 *)(param_1 + 0x5a0) = 0;
          if (iVar4 != 0) {
            if (iVar4 == 3) {
              *(undefined8 *)(param_1 + 0x5a0) = uVar5;
              *(ulong *)(param_1 + 0x5a8) = local_48;
              local_58 = local_48;
            }
            else {
              iVar4 = (**(code **)(param_1 + 0x340))(param_1,0x43424454,param_2,&local_58);
              if (((iVar4 == 0) ||
                  (iVar4 = (**(code **)(param_1 + 0x340))(param_1,0x45424454,param_2,&local_58),
                  iVar4 == 0)) ||
                 (iVar4 = (**(code **)(param_1 + 0x340))(param_1,0x62646174,param_2,&local_58),
                 iVar4 == 0)) {
                uVar5 = FUN_00e1d4a0(param_2);
                *(undefined8 *)(param_1 + 0x5a0) = uVar5;
                *(ulong *)(param_1 + 0x5a8) = local_58;
              }
              else {
                local_58 = *(ulong *)(param_1 + 0x5a8);
              }
            }
            if (local_58 != 0) {
              return 0;
            }
          }
          *(undefined4 *)(param_1 + 0x53c) = 0;
          return 0;
        }
        goto LAB_00e599d8;
      }
    }
    else {
      if (iVar4 != 3) goto LAB_00e59b10;
      iVar4 = FUN_00e1d718(param_2,8);
      if (iVar4 == 0) {
        sVar2 = FUN_00e1d970(param_2);
        uVar3 = FUN_00e1d970(param_2);
        uVar7 = FUN_00e1da20(param_2);
        FUN_00e1d90c(param_2);
        if (sVar2 == 0) goto LAB_00e59c70;
        if (((uVar3 | 2) != 3) || (uVar7 >> 0x10 != 0)) goto LAB_00e599d8;
        uVar9 = local_48 - 8 >> 2;
        if ((uVar7 & 0xffffffff) * 4 + 8 <= local_48) {
          uVar9 = uVar7;
        }
        lVar6 = FUN_00e1d4a0(param_2);
        iVar4 = FUN_00e1bb5c(param_2,lVar6 + -8);
        if (iVar4 == 0) {
          uVar7 = (ulong)((int)uVar9 * 4 + 8);
          *(ulong *)(param_1 + 0x530) = uVar7;
          iVar4 = FUN_00e1d5c4(param_2,uVar7,plVar1);
          if (iVar4 == 0) goto LAB_00e59aac;
        }
      }
    }
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x340))(param_1,0x45424c43,param_2,&local_48);
    if ((iVar4 == 0) ||
       (iVar4 = (**(code **)(param_1 + 0x340))(param_1,0x626c6f63,param_2,&local_48), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x538) = 1;
      goto joined_r0x00e599d4;
    }
    iVar4 = (**(code **)(param_1 + 0x340))(param_1,0x73626978,param_2,&local_48);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x538) = 3;
      goto joined_r0x00e599d4;
    }
  }
  lVar6 = *plVar1;
joined_r0x00e59ad8:
  if (lVar6 != 0) {
    FUN_00e1d86c(param_2,plVar1);
  }
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined4 *)(param_1 + 0x538) = 0;
  return iVar4;
}

