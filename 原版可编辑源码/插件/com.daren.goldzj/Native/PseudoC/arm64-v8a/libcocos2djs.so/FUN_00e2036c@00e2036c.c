
undefined4
FUN_00e2036c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int local_11c [9];
  undefined8 auStack_f8 [9];
  long local_b0 [10];
  
  lVar6 = *param_1;
  FUN_00e1c47c(param_1,param_2,*(undefined8 *)(param_5 + 0x18),local_b0,auStack_f8,local_11c);
  if (param_1 == (long *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar8 = 0;
    bVar2 = false;
    uVar3 = 2;
    piVar7 = &DAT_01c92878;
LAB_00e203cc:
    do {
      uVar1 = *piVar7 - 3;
      if (((!bVar2) || (1 < uVar1)) && (local_11c[uVar8] == 0)) {
        lVar9 = local_b0[uVar8];
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_5 + 0x18);
        }
        lVar10 = *param_1;
        puVar4 = (undefined8 *)(**(code **)(lVar10 + 8))(lVar10,0x50);
        if (puVar4 == (undefined8 *)0x0) {
          uVar3 = 0x40;
        }
        else {
          puVar4[5] = 0;
          puVar4[4] = 0;
          puVar4[7] = 0;
          puVar4[6] = 0;
          puVar4[9] = 0;
          puVar4[8] = 0;
          puVar4[1] = 0;
          *puVar4 = 0;
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4[7] = lVar10;
          uVar3 = FUN_00e85014(puVar4,lVar9);
          puVar4[4] = lVar9;
          if (uVar3 == 0) {
            puVar4[7] = lVar10;
            uVar3 = FUN_00e1fab4(param_1,puVar4,auStack_f8[uVar8],param_3,param_4);
            lVar9 = puVar4[7];
            if ((code *)puVar4[6] != (code *)0x0) {
              (*(code *)puVar4[6])(puVar4);
            }
            (**(code **)(lVar9 + 0x10))(lVar9,puVar4);
            if (uVar3 == 0) break;
            if (uVar1 < 2) {
              bVar2 = true;
            }
            uVar8 = uVar8 + 1;
            piVar7 = piVar7 + 4;
            if (8 < uVar8) break;
            goto LAB_00e203cc;
          }
          (**(code **)(lVar10 + 0x10))(lVar10,puVar4);
        }
        if ((uVar3 & 0xff) == 0x51 && uVar1 < 2) {
          bVar2 = true;
        }
      }
      piVar7 = piVar7 + 4;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 9);
  }
  if (local_b0[0] != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6);
    local_b0[0] = 0;
  }
  if (local_b0[1] != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6);
    local_b0[1] = 0;
  }
  if (local_b0[2] != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6);
    local_b0[2] = 0;
  }
  if (local_b0[3] != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6);
    local_b0[3] = 0;
  }
  if (local_b0[4] != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6);
    local_b0[4] = 0;
  }
  if (local_b0[5] != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6);
    local_b0[5] = 0;
  }
  if (local_b0[6] != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6);
    local_b0[6] = 0;
  }
  if (local_b0[7] != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6);
    local_b0[7] = 0;
  }
  if (local_b0[8] != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6);
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = 2;
  }
  return uVar5;
}

