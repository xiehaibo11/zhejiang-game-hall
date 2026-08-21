
undefined8 FUN_00e1b114(long param_1,char *param_2,uint *param_3,char param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar9 = strcmp(param_2,"darkening-parameters");
  if (iVar9 == 0) {
    if (param_4 == '\0') {
      uVar11 = *param_3;
LAB_00e1b37c:
      uVar4 = param_3[2];
      uVar5 = param_3[4];
      if ((int)uVar5 < (int)uVar4) {
        return 6;
      }
      if ((int)uVar4 < (int)uVar11) {
        return 6;
      }
      uVar6 = param_3[1];
      uVar7 = param_3[3];
      uVar2 = param_3[5];
      uVar3 = param_3[6];
      uVar8 = param_3[7];
      if ((int)(uVar6 | uVar11 | uVar4 | uVar7 | uVar5 | uVar2 | uVar3 | uVar8) < 0) {
        return 6;
      }
      if (500 < (int)uVar8) {
        return 6;
      }
      if (500 < (int)uVar2) {
        return 6;
      }
      if (500 < (int)uVar7) {
        return 6;
      }
      if (500 < (int)uVar6) {
        return 6;
      }
      if ((int)uVar3 < (int)uVar5) {
        return 6;
      }
      *(uint *)(param_1 + 0x40) = uVar11;
      *(uint *)(param_1 + 0x44) = uVar6;
      *(uint *)(param_1 + 0x48) = uVar4;
      *(uint *)(param_1 + 0x4c) = uVar7;
      *(uint *)(param_1 + 0x50) = uVar5;
      *(uint *)(param_1 + 0x54) = uVar2;
      *(uint *)(param_1 + 0x58) = uVar3;
      *(uint *)(param_1 + 0x5c) = uVar8;
      return 0;
    }
    lVar10 = strtol((char *)param_3,(char **)&local_58,10);
    uVar11 = (uint)lVar10;
    if ((local_58 != param_3) && ((byte)*local_58 == 0x2c)) {
      puVar1 = (uint *)((long)local_58 + 1);
      local_50 = uVar11;
      lVar10 = strtol((char *)puVar1,(char **)&local_58,10);
      local_4c = (undefined4)lVar10;
      if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
        puVar1 = (uint *)((long)local_58 + 1);
        lVar10 = strtol((char *)puVar1,(char **)&local_58,10);
        local_48 = (undefined4)lVar10;
        if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
          puVar1 = (uint *)((long)local_58 + 1);
          lVar10 = strtol((char *)puVar1,(char **)&local_58,10);
          local_44 = (undefined4)lVar10;
          if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
            puVar1 = (uint *)((long)local_58 + 1);
            lVar10 = strtol((char *)puVar1,(char **)&local_58,10);
            local_40 = (undefined4)lVar10;
            if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
              puVar1 = (uint *)((long)local_58 + 1);
              lVar10 = strtol((char *)puVar1,(char **)&local_58,10);
              local_3c = (undefined4)lVar10;
              if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
                puVar1 = (uint *)((long)local_58 + 1);
                lVar10 = strtol((char *)puVar1,(char **)&local_58,10);
                local_38 = (undefined4)lVar10;
                if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
                  puVar1 = (uint *)((long)local_58 + 1);
                  lVar10 = strtol((char *)puVar1,(char **)&local_58,10);
                  local_34 = (int)lVar10;
                  if (((byte)((byte)*local_58 | 0x20) == 0x20) && (puVar1 != local_58)) {
                    param_3 = &local_50;
                    goto LAB_00e1b37c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar9 = strcmp(param_2,"hinting-engine");
    if (iVar9 != 0) {
      iVar9 = strcmp(param_2,"no-stem-darkening");
      if (iVar9 == 0) {
        if (param_4 != '\0') {
          lVar10 = strtol((char *)param_3,(char **)0x0,10);
          *(bool *)(param_1 + 0x3c) = lVar10 != 0;
          return 0;
        }
        *(byte *)(param_1 + 0x3c) = (byte)*param_3;
        return 0;
      }
      iVar9 = strcmp(param_2,"random-seed");
      if (iVar9 != 0) {
        return 0xc;
      }
      if (param_4 == '\0') {
        uVar11 = *param_3;
      }
      else {
        lVar10 = strtol((char *)param_3,(char **)0x0,10);
        uVar11 = (uint)lVar10;
      }
      *(uint *)(param_1 + 0x60) = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
      return 0;
    }
    if (param_4 == '\0') {
      if (*param_3 == 1) {
        *(undefined4 *)(param_1 + 0x38) = 1;
        return 0;
      }
      return 7;
    }
    iVar9 = strcmp((char *)param_3,"adobe");
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 1;
      return 0xc;
    }
  }
  return 6;
}

