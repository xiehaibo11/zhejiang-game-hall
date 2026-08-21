
undefined8 FUN_00e677e0(long param_1,char *param_2,uint *param_3,char param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint uVar14;
  uint *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar10 = strcmp(param_2,"fallback-script");
  if (iVar10 == 0) {
    if (param_4 == '\0') {
      lVar11 = 0;
      puVar13 = &DAT_01979d6c;
      do {
        if ((*(uint *)(puVar13 + 8) == *param_3) && (*(int *)(puVar13 + 0x10) == 10)) {
          *(int *)(param_1 + 0x18) = (int)lVar11;
          return 0;
        }
        puVar13 = (&PTR_DAT_01c97348)[lVar11];
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x54);
    }
  }
  else {
    iVar10 = strcmp(param_2,"default-script");
    if (iVar10 == 0) {
      if (param_4 == '\0') {
        *(uint *)(param_1 + 0x1c) = *param_3;
        return 0;
      }
    }
    else {
      iVar10 = strcmp(param_2,"increase-x-height");
      if (iVar10 == 0) {
        if (param_4 == '\0') {
          lVar11 = *(long *)param_3;
          if (lVar11 == 0) {
            return 0x23;
          }
          local_50 = *(long *)(lVar11 + 0xd8);
          if (local_50 == 0) {
            uVar12 = FUN_00e66f10(lVar11,&local_50,param_1);
            if ((int)uVar12 != 0) {
              return uVar12;
            }
            *(long *)(lVar11 + 0xd8) = local_50;
            *(code **)(lVar11 + 0xe0) = FUN_00e67534;
          }
          *(uint *)(local_50 + 0x18) = param_3[2];
          return 0;
        }
      }
      else {
        iVar10 = strcmp(param_2,"warping");
        if (iVar10 == 0) {
          if (param_4 == '\0') {
            *(byte *)(param_1 + 0x20) = (byte)*param_3;
            return 0;
          }
          lVar11 = strtol((char *)param_3,(char **)0x0,10);
          if (lVar11 == 1) {
            *(undefined1 *)(param_1 + 0x20) = 1;
            return 0;
          }
          if (lVar11 == 0) {
            *(undefined1 *)(param_1 + 0x20) = 0;
            return 0;
          }
        }
        else {
          iVar10 = strcmp(param_2,"darkening-parameters");
          if (iVar10 != 0) {
            iVar10 = strcmp(param_2,"no-stem-darkening");
            if (iVar10 != 0) {
              return 0xc;
            }
            if (param_4 == '\0') {
              bVar9 = (byte)*param_3;
            }
            else {
              lVar11 = strtol((char *)param_3,(char **)0x0,10);
              bVar9 = lVar11 != 0;
            }
            *(byte *)(param_1 + 0x21) = bVar9;
            return 0;
          }
          if (param_4 == '\0') {
            uVar14 = *param_3;
LAB_00e67b3c:
            uVar4 = param_3[2];
            uVar5 = param_3[4];
            if ((int)uVar5 < (int)uVar4) {
              return 6;
            }
            if ((int)uVar4 < (int)uVar14) {
              return 6;
            }
            uVar6 = param_3[1];
            uVar7 = param_3[3];
            uVar2 = param_3[5];
            uVar3 = param_3[6];
            uVar8 = param_3[7];
            if ((int)(uVar6 | uVar14 | uVar4 | uVar7 | uVar5 | uVar2 | uVar3 | uVar8) < 0) {
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
            *(uint *)(param_1 + 0x24) = uVar14;
            *(uint *)(param_1 + 0x28) = uVar6;
            *(uint *)(param_1 + 0x2c) = uVar4;
            *(uint *)(param_1 + 0x30) = uVar7;
            *(uint *)(param_1 + 0x34) = uVar5;
            *(uint *)(param_1 + 0x38) = uVar2;
            *(uint *)(param_1 + 0x3c) = uVar3;
            *(uint *)(param_1 + 0x40) = uVar8;
            return 0;
          }
          lVar11 = strtol((char *)param_3,(char **)&local_58,10);
          uVar14 = (uint)lVar11;
          local_50 = CONCAT44(local_50._4_4_,uVar14);
          if ((local_58 != param_3) && ((byte)*local_58 == 0x2c)) {
            puVar1 = (uint *)((long)local_58 + 1);
            lVar11 = strtol((char *)puVar1,(char **)&local_58,10);
            local_50 = CONCAT44((int)lVar11,(uint)local_50);
            if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
              puVar1 = (uint *)((long)local_58 + 1);
              lVar11 = strtol((char *)puVar1,(char **)&local_58,10);
              local_48 = (undefined4)lVar11;
              if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
                puVar1 = (uint *)((long)local_58 + 1);
                lVar11 = strtol((char *)puVar1,(char **)&local_58,10);
                local_44 = (undefined4)lVar11;
                if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
                  puVar1 = (uint *)((long)local_58 + 1);
                  lVar11 = strtol((char *)puVar1,(char **)&local_58,10);
                  local_40 = (undefined4)lVar11;
                  if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
                    puVar1 = (uint *)((long)local_58 + 1);
                    lVar11 = strtol((char *)puVar1,(char **)&local_58,10);
                    local_3c = (undefined4)lVar11;
                    if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
                      puVar1 = (uint *)((long)local_58 + 1);
                      lVar11 = strtol((char *)puVar1,(char **)&local_58,10);
                      local_38 = (undefined4)lVar11;
                      if ((puVar1 != local_58) && ((byte)*local_58 == 0x2c)) {
                        puVar1 = (uint *)((long)local_58 + 1);
                        lVar11 = strtol((char *)puVar1,(char **)&local_58,10);
                        local_34 = (int)lVar11;
                        if (((byte)((byte)*local_58 | 0x20) == 0x20) && (puVar1 != local_58)) {
                          param_3 = (uint *)&local_50;
                          goto LAB_00e67b3c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 6;
}

