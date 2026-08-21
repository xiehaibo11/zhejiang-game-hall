
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011dd90(long param_1,long param_2,ulong *param_3,long *param_4,int param_5,long param_6,
                 undefined8 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 uVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong *puVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long local_b8;
  ulong local_a8;
  long local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  long local_8;
  
  local_70 = *param_3;
  local_8 = ___stack_chk_guard;
  log2Console(3,"Bugly-libunwind","FDE @ 0x%lx\n",local_70);
  uVar11 = local_70;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  uVar17 = local_70 & 0xfffffffffffffff8;
  local_18 = 0;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar17,&local_60,0,param_7);
  uVar21 = local_60;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar14 = local_70 & 0xfffffffffffffff8;
  iVar7 = (int)local_70;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
  uVar12 = local_70;
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar14) * 8) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar21 >> ((ulong)(uint)(((int)uVar11 - (int)uVar17) * 8) & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar5 = CONCAT11(uVar15,uVar3);
  }
  else {
    uVar5 = CONCAT11(uVar3,uVar15);
  }
  uVar21 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
  uVar11 = local_60;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar14 = local_70 & 0xfffffffffffffff8;
  iVar7 = (int)local_70;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
  uVar17 = local_70;
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar14) * 8) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar12 - (int)uVar21) * 8) & 0x3f));
  iVar7 = (int)local_70;
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar16 = CONCAT22(uVar5,CONCAT11(uVar3,uVar15));
    if (uVar16 == 0xffffffff) goto LAB_0011e44c;
LAB_0011df74:
    if (uVar16 == 0) {
      uVar8 = 0xfffffff6;
      goto LAB_0011e3fc;
    }
    local_a8 = local_70 + uVar16;
    pcVar10 = *(code **)(param_2 + 0x18);
    uVar21 = local_70 & 0xfffffffffffffff8;
    local_70 = local_70 + 1;
    *param_3 = local_a8;
    uVar8 = (*pcVar10)(param_1,uVar21,&local_60,0,param_7);
    uVar11 = local_60;
    if ((int)uVar8 < 0) goto LAB_0011e3fc;
    uVar14 = local_70 & 0xfffffffffffffff8;
    iVar4 = (int)local_70;
    local_70 = local_70 + 1;
    uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
    uVar12 = local_70;
    uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar4 - (int)uVar14) * 8) & 0x3f));
    if ((int)uVar8 < 0) goto LAB_0011e3fc;
    uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)((iVar7 - (int)uVar21) * 8) & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar5 = CONCAT11(uVar15,uVar3);
    }
    else {
      uVar5 = CONCAT11(uVar3,uVar15);
    }
    uVar21 = local_70 & 0xfffffffffffffff8;
    local_70 = local_70 + 1;
    uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
    uVar11 = local_60;
    if ((int)uVar8 < 0) goto LAB_0011e3fc;
    uVar14 = local_70 & 0xfffffffffffffff8;
    iVar7 = (int)local_70;
    local_70 = local_70 + 1;
    uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
    uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar14) * 8) & 0x3f));
    if ((int)uVar8 < 0) goto LAB_0011e3fc;
    uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar12 - (int)uVar21) * 8) & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar7 = CONCAT22(CONCAT11(uVar15,uVar3),uVar5);
    }
    else {
      iVar7 = CONCAT22(uVar5,CONCAT11(uVar3,uVar15));
    }
    lVar19 = (long)iVar7;
    if (param_6 == 0) {
LAB_0011e9f4:
      if (lVar19 == 0) goto LAB_0011ea00;
      uVar17 = uVar17 - lVar19;
    }
    else {
      uVar17 = lVar19 + param_6;
      if (lVar19 == -1) goto LAB_0011ea00;
    }
LAB_0011e0f0:
    log2Console(3,"Bugly-libunwind","looking for CIE at address %lx\n",uVar17);
    local_20 = 0;
    local_68 = uVar17 + 1;
    local_18._0_6_ = CONCAT15(0xff,(undefined5)local_18);
    uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar17 & 0xfffffffffffffff8,&local_60,0,param_7);
    uVar11 = local_60;
    if (-1 < (int)uVar8) {
      uVar12 = local_68 & 0xfffffffffffffff8;
      iVar7 = (int)local_68;
      local_68 = local_68 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
      uVar21 = local_68;
      uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar12) * 8) & 0x3f));
      if (-1 < (int)uVar8) {
        uVar3 = (undefined1)
                (uVar11 >>
                ((ulong)(uint)(((int)uVar17 - (int)(uVar17 & 0xfffffffffffffff8)) * 8) & 0x3f));
        if (*(int *)(param_1 + 0x40) == 0) {
          uVar5 = CONCAT11(uVar15,uVar3);
        }
        else {
          uVar5 = CONCAT11(uVar3,uVar15);
        }
        uVar17 = local_68 & 0xfffffffffffffff8;
        local_68 = local_68 + 1;
        uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar17,&local_60,0,param_7);
        uVar11 = local_60;
        if (-1 < (int)uVar8) {
          uVar14 = local_68 & 0xfffffffffffffff8;
          iVar7 = (int)local_68;
          local_68 = local_68 + 1;
          uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
          uVar12 = local_68;
          uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar14) * 8) & 0x3f));
          if (-1 < (int)uVar8) {
            uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar21 - (int)uVar17) * 8) & 0x3f));
            if (*(int *)(param_1 + 0x40) == 0) {
              uVar16 = CONCAT22(CONCAT11(uVar15,uVar3),uVar5);
            }
            else {
              uVar16 = CONCAT22(uVar5,CONCAT11(uVar3,uVar15));
            }
            iVar7 = (int)local_68;
            if (uVar16 == 0xffffffff) {
              uVar21 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
              uVar11 = local_60;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar12 = local_68 & 0xfffffffffffffff8;
              iVar4 = (int)local_68;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
              uVar17 = local_68;
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar4 - (int)uVar12) * 8) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)((iVar7 - (int)uVar21) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                uVar5 = CONCAT11(uVar15,uVar3);
              }
              else {
                uVar5 = CONCAT11(uVar3,uVar15);
              }
              uVar12 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
              uVar21 = local_60;
              uVar11 = local_68;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar14 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
              uVar14 = local_68;
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((int)uVar11 << 3) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)
                      (uVar21 >> ((ulong)(uint)(((int)uVar17 - (int)uVar12) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                uVar2 = CONCAT22(CONCAT11(uVar15,uVar3),uVar5);
              }
              else {
                uVar2 = CONCAT22(uVar5,CONCAT11(uVar3,uVar15));
              }
              uVar17 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar17,&local_60,0,param_7);
              uVar21 = local_60;
              uVar11 = local_68;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar12 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
              uVar12 = local_68;
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((int)uVar11 << 3) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)
                      (uVar21 >> ((ulong)(uint)(((int)uVar14 - (int)uVar17) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                uVar5 = CONCAT11(uVar15,uVar3);
              }
              else {
                uVar5 = CONCAT11(uVar3,uVar15);
              }
              uVar21 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
              uVar11 = local_60;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar14 = local_68 & 0xfffffffffffffff8;
              iVar7 = (int)local_68;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
              uVar17 = local_68;
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar14) * 8) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)
                      (uVar11 >> ((ulong)(uint)(((int)uVar12 - (int)uVar21) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                local_b8 = CONCAT44(CONCAT22(CONCAT11(uVar15,uVar3),uVar5),uVar2);
              }
              else {
                local_b8 = CONCAT44(uVar2,CONCAT22(uVar5,CONCAT11(uVar3,uVar15)));
              }
              uVar12 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
              uVar21 = local_60;
              uVar11 = local_68;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar14 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
              uVar14 = local_68;
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((int)uVar11 << 3) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)
                      (uVar21 >> ((ulong)(uint)(((int)uVar17 - (int)uVar12) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                uVar5 = CONCAT11(uVar15,uVar3);
              }
              else {
                uVar5 = CONCAT11(uVar3,uVar15);
              }
              uVar21 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
              uVar11 = local_60;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar13 = local_68 & 0xfffffffffffffff8;
              iVar7 = (int)local_68;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar13,&local_60,0,param_7);
              uVar12 = local_68;
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar13) * 8) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)
                      (uVar11 >> ((ulong)(uint)(((int)uVar14 - (int)uVar21) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                uVar2 = CONCAT22(CONCAT11(uVar15,uVar3),uVar5);
              }
              else {
                uVar2 = CONCAT22(uVar5,CONCAT11(uVar3,uVar15));
              }
              uVar14 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
              uVar21 = local_60;
              uVar11 = local_68;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar13 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar13,&local_60,0,param_7);
              uVar13 = local_68;
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((int)uVar11 << 3) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)
                      (uVar21 >> ((ulong)(uint)(((int)uVar12 - (int)uVar14) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                uVar5 = CONCAT11(uVar15,uVar3);
              }
              else {
                uVar5 = CONCAT11(uVar3,uVar15);
              }
              uVar21 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
              uVar11 = local_60;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar12 = local_68 & 0xfffffffffffffff8;
              iVar7 = (int)local_68;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar12) * 8) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)
                      (uVar11 >> ((ulong)(uint)(((int)uVar13 - (int)uVar21) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                lVar19 = CONCAT44(CONCAT22(CONCAT11(uVar15,uVar3),uVar5),uVar2);
              }
              else {
                lVar19 = CONCAT44(uVar2,CONCAT22(uVar5,CONCAT11(uVar3,uVar15)));
              }
              if (-lVar19 != (ulong)(param_6 != 0)) {
                log2Console(3,"Bugly-libunwind","Unexpected CIE id %llx\n");
                uVar8 = 0xfffffff8;
                goto LAB_0011e3fc;
              }
              local_50 = local_b8 + uVar17;
            }
            else {
              uVar21 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
              uVar11 = local_60;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar14 = local_68 & 0xfffffffffffffff8;
              iVar4 = (int)local_68;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
              uVar17 = local_68;
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar4 - (int)uVar14) * 8) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)((iVar7 - (int)uVar21) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                uVar5 = CONCAT11(uVar15,uVar3);
              }
              else {
                uVar5 = CONCAT11(uVar3,uVar15);
              }
              uVar21 = local_68 & 0xfffffffffffffff8;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
              uVar11 = local_60;
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar14 = local_68 & 0xfffffffffffffff8;
              iVar7 = (int)local_68;
              local_68 = local_68 + 1;
              uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
              uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar14) * 8) & 0x3f));
              if ((int)uVar8 < 0) goto LAB_0011e3fc;
              uVar3 = (undefined1)
                      (uVar11 >> ((ulong)(uint)(((int)uVar17 - (int)uVar21) * 8) & 0x3f));
              if (*(int *)(param_1 + 0x40) == 0) {
                iVar7 = CONCAT22(CONCAT11(uVar15,uVar3),uVar5);
              }
              else {
                iVar7 = CONCAT22(uVar5,CONCAT11(uVar3,uVar15));
              }
              if (-(uint)(param_6 != 0) != iVar7) {
                log2Console(3,"Bugly-libunwind","Unexpected CIE id %x\n");
                uVar8 = 0xfffffff8;
                goto LAB_0011e3fc;
              }
              local_50 = uVar12 + uVar16;
            }
            uVar11 = local_68 & 0xfffffffffffffff8;
            iVar7 = (int)local_68;
            local_68 = local_68 + 1;
            uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_60,0,param_7);
            uVar16 = (uint)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar11) * 8) & 0x3f));
            if (-1 < (int)uVar8) {
              if ((uVar16 & 0xfd) == 1) {
                local_10 = 0;
                uVar11 = 0;
                local_c = 0;
                while( true ) {
                  uVar21 = local_68 & 0xfffffffffffffff8;
                  iVar7 = (int)local_68;
                  local_68 = local_68 + 1;
                  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
                  uVar21 = local_60 >> ((ulong)(uint)((iVar7 - (int)uVar21) * 8) & 0x3f);
                  if ((int)uVar8 < 0) break;
                  if ((uVar21 & 0xff) == 0) {
                    uVar11 = 0;
                    uVar21 = 0;
                    goto LAB_0011f0ac;
                  }
                  if (uVar11 < 4) {
                    *(char *)((long)&local_10 + uVar11) = (char)uVar21;
                    uVar11 = uVar11 + 1;
                  }
                }
              }
              else {
                log2Console(3,"Bugly-libunwind","Got CIE version %u, expected version 1 or 3\n",
                            uVar16 & 0xff);
                uVar8 = 0xfffffff7;
              }
            }
          }
        }
      }
    }
    goto LAB_0011e3fc;
  }
  uVar16 = CONCAT22(CONCAT11(uVar15,uVar3),uVar5);
  if (uVar16 != 0xffffffff) goto LAB_0011df74;
LAB_0011e44c:
  uVar21 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
  uVar11 = local_60;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar12 = local_70 & 0xfffffffffffffff8;
  iVar4 = (int)local_70;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
  uVar17 = local_70;
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar4 - (int)uVar12) * 8) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)((iVar7 - (int)uVar21) * 8) & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar5 = CONCAT11(uVar15,uVar3);
  }
  else {
    uVar5 = CONCAT11(uVar3,uVar15);
  }
  uVar21 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
  uVar11 = local_60;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar14 = local_70 & 0xfffffffffffffff8;
  iVar7 = (int)local_70;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
  uVar12 = local_70;
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar14) * 8) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar17 - (int)uVar21) * 8) & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar2 = CONCAT22(CONCAT11(uVar15,uVar3),uVar5);
  }
  else {
    uVar2 = CONCAT22(uVar5,CONCAT11(uVar3,uVar15));
  }
  uVar17 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar17,&local_60,0,param_7);
  uVar21 = local_60;
  uVar11 = local_70;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar14 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
  uVar14 = local_70;
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((int)uVar11 << 3) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar21 >> ((ulong)(uint)(((int)uVar12 - (int)uVar17) * 8) & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar5 = CONCAT11(uVar15,uVar3);
  }
  else {
    uVar5 = CONCAT11(uVar3,uVar15);
  }
  uVar21 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
  uVar11 = local_60;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar12 = local_70 & 0xfffffffffffffff8;
  iVar7 = (int)local_70;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
  uVar17 = local_70;
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar12) * 8) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar14 - (int)uVar21) * 8) & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    lVar19 = CONCAT44(CONCAT22(CONCAT11(uVar15,uVar3),uVar5),uVar2);
  }
  else {
    lVar19 = CONCAT44(uVar2,CONCAT22(uVar5,CONCAT11(uVar3,uVar15)));
  }
  pcVar10 = *(code **)(param_2 + 0x18);
  local_a8 = lVar19 + local_70;
  uVar21 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  *param_3 = local_a8;
  uVar8 = (*pcVar10)(param_1,uVar21,&local_60,0,param_7);
  uVar11 = local_60;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar14 = local_70 & 0xfffffffffffffff8;
  iVar7 = (int)local_70;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar14,&local_60,0,param_7);
  uVar12 = local_70;
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar14) * 8) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar17 - (int)uVar21) * 8) & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar5 = CONCAT11(uVar15,uVar3);
  }
  else {
    uVar5 = CONCAT11(uVar3,uVar15);
  }
  uVar21 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
  uVar11 = local_60;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar13 = local_70 & 0xfffffffffffffff8;
  iVar7 = (int)local_70;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar13,&local_60,0,param_7);
  uVar14 = local_70;
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar13) * 8) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar12 - (int)uVar21) * 8) & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar2 = CONCAT22(CONCAT11(uVar15,uVar3),uVar5);
  }
  else {
    uVar2 = CONCAT22(uVar5,CONCAT11(uVar3,uVar15));
  }
  uVar12 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
  uVar21 = local_60;
  uVar11 = local_70;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar13 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar13,&local_60,0,param_7);
  uVar13 = local_70;
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((int)uVar11 << 3) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar21 >> ((ulong)(uint)(((int)uVar14 - (int)uVar12) * 8) & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar5 = CONCAT11(uVar15,uVar3);
  }
  else {
    uVar5 = CONCAT11(uVar3,uVar15);
  }
  uVar21 = local_70 & 0xfffffffffffffff8;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
  uVar11 = local_60;
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar12 = local_70 & 0xfffffffffffffff8;
  iVar7 = (int)local_70;
  local_70 = local_70 + 1;
  uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
  uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar12) * 8) & 0x3f));
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  uVar3 = (undefined1)(uVar11 >> ((ulong)(uint)(((int)uVar13 - (int)uVar21) * 8) & 0x3f));
  if (*(int *)(param_1 + 0x40) == 0) {
    lVar19 = CONCAT44(CONCAT22(CONCAT11(uVar15,uVar3),uVar5),uVar2);
  }
  else {
    lVar19 = CONCAT44(uVar2,CONCAT22(uVar5,CONCAT11(uVar3,uVar15)));
  }
  if (param_6 == 0) goto LAB_0011e9f4;
  if ((lVar19 != -1) && (lVar19 != 0xffffffff)) {
    uVar17 = lVar19 + param_6;
    goto LAB_0011e0f0;
  }
  goto LAB_0011ea00;
  while( true ) {
    uVar12 = uVar11 & 0x3f;
    uVar11 = uVar11 + 7;
    uVar21 = uVar21 | (uVar17 & 0x7f) << uVar12;
    if (((uint)uVar17 >> 7 & 1) == 0) break;
LAB_0011f0ac:
    uVar17 = local_68 & 0xfffffffffffffff8;
    iVar7 = (int)local_68;
    local_68 = local_68 + 1;
    uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar17,&local_60,0,param_7);
    uVar17 = local_60 >> ((ulong)(uint)((iVar7 - (int)uVar17) * 8) & 0x3f);
    if ((int)uVar8 < 0) goto LAB_0011e3fc;
  }
  uVar11 = 0;
  uVar17 = 0;
  local_38 = uVar21;
  do {
    uVar21 = local_68 & 0xfffffffffffffff8;
    iVar7 = (int)local_68;
    local_68 = local_68 + 1;
    uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar21,&local_60,0,param_7);
    uVar21 = local_60 >> ((ulong)(uint)((iVar7 - (int)uVar21) * 8) & 0x3f);
    uVar18 = (uint)uVar21;
    if ((int)uVar8 < 0) goto LAB_0011e3fc;
    uVar12 = uVar11 & 0x3f;
    uVar11 = uVar11 + 7;
    uVar17 = uVar17 | (uVar21 & 0x7f) << uVar12;
  } while ((uVar18 >> 7 & 1) != 0);
  if ((uVar11 < 0x40) && (((uVar18 & 0xff) >> 6 & 1) != 0)) {
    uVar17 = -1L << (uVar11 & 0x3f) | uVar17;
  }
  local_30 = uVar17;
  if ((uVar16 & 0xff) == 1) {
    uVar11 = local_68 & 0xfffffffffffffff8;
    iVar7 = (int)local_68;
    local_68 = local_68 + 1;
    uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_60,0,param_7);
    if ((int)uVar8 < 0) goto LAB_0011e3fc;
    uVar11 = local_60 >> ((ulong)(uint)((iVar7 - (int)uVar11) * 8) & 0x3f) & 0xff;
  }
  else {
    uVar21 = 0;
    uVar11 = 0;
    do {
      uVar17 = local_68 & 0xfffffffffffffff8;
      iVar7 = (int)local_68;
      local_68 = local_68 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar17,&local_60,0,param_7);
      uVar17 = local_60 >> ((ulong)(uint)((iVar7 - (int)uVar17) * 8) & 0x3f);
      if ((int)uVar8 < 0) goto LAB_0011e3fc;
      uVar12 = uVar21 & 0x3f;
      uVar21 = uVar21 + 7;
      uVar11 = uVar11 | (uVar17 & 0x7f) << uVar12;
    } while (((uint)uVar17 >> 7 & 1) != 0);
  }
  local_28 = uVar11;
  lVar19 = 0;
  if ((char)local_10 == 'z') {
    local_18 = local_18 | 0x1000000000000;
    do {
      uVar11 = local_68 & 0xfffffffffffffff8;
      iVar7 = (int)local_68;
      local_68 = local_68 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_60,0,param_7);
      if ((int)uVar8 < 0) goto LAB_0011e3fc;
    } while (((uint)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar11) * 8) & 0x3f)) >> 7 & 1) != 0);
    lVar19 = 1;
  }
  lVar20 = 0;
  uVar15 = 4;
  do {
    cVar1 = *(char *)((long)&local_10 + lVar20 + lVar19);
    if (cVar1 == '\0') break;
    iVar7 = (int)local_68;
    switch(cVar1) {
    case 'L':
      uVar11 = local_68 & 0xfffffffffffffff8;
      local_68 = local_68 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_60,0,param_7);
      if ((int)uVar8 < 0) goto LAB_0011e3fc;
      local_18._0_6_ =
           CONCAT15((char)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar11) * 8) & 0x3f)),
                    (undefined5)local_18);
      break;
    default:
      log2Console(3,"Bugly-libunwind","Unexpected augmentation string `%s\'\n",&local_10);
      if ((local_18 & 0x1000000000000) == 0) {
        uVar8 = 0xfffffff8;
        goto LAB_0011e3fc;
      }
      goto LAB_0011f3a8;
    case 'P':
      uVar11 = local_68 & 0xfffffffffffffff8;
      local_68 = local_68 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_60,0,param_7);
      if (-1 < (int)uVar8) {
        uVar8 = FUN_00119e5c(param_1,param_2,&local_68,
                             local_60 >> ((ulong)(uint)((iVar7 - (int)uVar11) * 8) & 0x3f) & 0xff,
                             param_4,&local_20,param_7);
        iVar7 = (int)uVar8;
        goto joined_r0x0011f78c;
      }
      goto LAB_0011e3fc;
    case 'R':
      uVar11 = local_68 & 0xfffffffffffffff8;
      local_68 = local_68 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_60,0,param_7);
      uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar11) * 8) & 0x3f));
      iVar7 = (int)uVar8;
joined_r0x0011f78c:
      if (iVar7 < 0) goto LAB_0011e3fc;
      break;
    case 'S':
      local_18 = local_18 | 0x6000000000000;
    }
    lVar20 = lVar20 + 1;
  } while (lVar20 != 5 - lVar19);
LAB_0011f3a8:
  local_18._0_5_ = CONCAT14(uVar15,(undefined4)local_18);
  local_58 = local_68;
  log2Console(3,"Bugly-libunwind","CIE parsed OK, augmentation = \"%s\", handler=0x%lx\n",&local_10,
              local_20);
  bVar6 = local_18._4_1_;
  uVar8 = FUN_00119e5c(param_1,param_2,&local_70,local_18._4_1_,param_4,&local_80,param_7);
  if (((int)uVar8 < 0) ||
     (uVar8 = FUN_00119e5c(param_1,param_2,&local_70,bVar6 & 0xf,param_4,&local_78,param_7),
     (int)uVar8 < 0)) goto LAB_0011e3fc;
  *param_4 = local_80;
  param_4[1] = local_78 + local_80;
  param_4[3] = local_20;
  if ((local_18 & 0x1000000000000) == 0) {
    uVar11 = 0;
  }
  else {
    uVar21 = 0;
    uVar11 = 0;
    do {
      uVar17 = local_70 & 0xfffffffffffffff8;
      iVar7 = (int)local_70;
      local_70 = local_70 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar17,&local_60,0,param_7);
      uVar17 = local_60 >> ((ulong)(uint)((iVar7 - (int)uVar17) * 8) & 0x3f);
      if ((int)uVar8 < 0) goto LAB_0011e3fc;
      uVar12 = uVar21 & 0x3f;
      uVar21 = uVar21 + 7;
      uVar11 = uVar11 | (uVar17 & 0x7f) << uVar12;
    } while (((uint)uVar17 >> 7 & 1) != 0);
    uVar11 = uVar11 + local_70;
  }
  uVar8 = FUN_00119e5c(param_1,param_2,&local_70,local_18._5_1_,param_4,param_4 + 2,param_7);
  if ((int)uVar8 < 0) goto LAB_0011e3fc;
  log2Console(3,"Bugly-libunwind","FDE covers IP 0x%lx-0x%lx, LSDA=0x%lx\n",*param_4,param_4[1],
              param_4[2]);
  if (param_5 != 0) {
    *(undefined4 *)(param_4 + 6) = 1;
    *(undefined4 *)((long)param_4 + 0x34) = 0x48;
    puVar9 = (ulong *)FUN_0011b930(&DAT_00176398);
    uVar21 = local_70;
    param_4[7] = (long)puVar9;
    if (puVar9 == (ulong *)0x0) {
      uVar8 = 0xfffffffe;
      goto LAB_0011e3fc;
    }
    if ((local_18._6_1_ >> 1 & 1) != 0) {
      uVar12 = local_70 & 0xfffffffffffffff8;
      local_70 = local_70 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
      uVar17 = local_60;
      if ((int)uVar8 < 0) goto LAB_0011e3fc;
      uVar13 = local_70 & 0xfffffffffffffff8;
      iVar7 = (int)local_70;
      local_70 = local_70 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar13,&local_60,0,param_7);
      uVar14 = local_70;
      uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar13) * 8) & 0x3f));
      if ((int)uVar8 < 0) goto LAB_0011e3fc;
      uVar3 = (undefined1)(uVar17 >> ((ulong)(uint)(((int)uVar21 - (int)uVar12) * 8) & 0x3f));
      if (*(int *)(param_1 + 0x40) == 0) {
        uVar5 = CONCAT11(uVar15,uVar3);
      }
      else {
        uVar5 = CONCAT11(uVar3,uVar15);
      }
      uVar17 = local_70 & 0xfffffffffffffff8;
      local_18 = CONCAT62(local_18._2_6_,uVar5);
      local_70 = local_70 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar17,&local_60,0,param_7);
      uVar21 = local_60;
      if ((int)uVar8 < 0) goto LAB_0011e3fc;
      uVar12 = local_70 & 0xfffffffffffffff8;
      iVar7 = (int)local_70;
      local_70 = local_70 + 1;
      uVar8 = (**(code **)(param_2 + 0x18))(param_1,uVar12,&local_60,0,param_7);
      uVar15 = (undefined1)(local_60 >> ((ulong)(uint)((iVar7 - (int)uVar12) * 8) & 0x3f));
      if ((int)uVar8 < 0) goto LAB_0011e3fc;
      uVar3 = (undefined1)(uVar21 >> ((ulong)(uint)(((int)uVar14 - (int)uVar17) * 8) & 0x3f));
      if (*(int *)(param_1 + 0x40) == 0) {
        uVar5 = CONCAT11(uVar15,uVar3);
      }
      else {
        uVar5 = CONCAT11(uVar3,uVar15);
      }
      uVar21 = local_18 & 0xffff;
      local_18._0_4_ = CONCAT22(uVar5,(undefined2)local_18);
      log2Console(3,"Bugly-libunwind","Found ABI marker = (abi=%u, tag=%u)\n",uVar21,uVar5);
      puVar9 = (ulong *)param_4[7];
    }
    local_48 = uVar11;
    if ((local_18._6_1_ & 1) == 0) {
      local_48 = local_70;
    }
    local_40 = local_a8;
    uVar8 = 0;
    *puVar9 = local_58;
    puVar9[1] = local_50;
    puVar9[2] = local_48;
    puVar9[3] = local_a8;
    puVar9[4] = local_38;
    puVar9[5] = local_30;
    puVar9[6] = local_28;
    puVar9[7] = local_20;
    puVar9[8] = local_18;
    goto LAB_0011e3fc;
  }
LAB_0011ea00:
  uVar8 = 0;
LAB_0011e3fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

