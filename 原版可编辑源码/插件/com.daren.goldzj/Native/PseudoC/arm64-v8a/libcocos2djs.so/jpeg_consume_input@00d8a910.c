
undefined8 jpeg_consume_input(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  
  uVar6 = *(undefined4 *)((long)param_1 + 0x24);
  uVar5 = 1;
  switch(uVar6) {
  case 200:
    break;
  case 0xc9:
    goto switchD_00d8a944_caseD_c9;
  case 0xca:
    goto switchD_00d8a944_caseD_ca;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
                    /* WARNING: Could not recover jumptable at 0x00d8a95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)param_1[0x4c])(param_1);
    return uVar5;
  default:
    puVar8 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar8 + 5) = 0x15;
    *(undefined4 *)((long)puVar8 + 0x2c) = uVar6;
    (*(code *)*puVar8)(param_1);
    uVar5 = 0;
    goto switchD_00d8a944_caseD_ca;
  }
  (**(code **)(param_1[0x4c] + 8))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  *(undefined4 *)((long)param_1 + 0x24) = 0xc9;
switchD_00d8a944_caseD_c9:
  uVar5 = (**(code **)param_1[0x4c])(param_1);
  if ((int)uVar5 != 1) {
    return uVar5;
  }
  iVar1 = (int)param_1[7];
  if (iVar1 == 4) {
    if ((*(int *)((long)param_1 + 0x184) == 0) || (bVar4 = *(byte *)(param_1 + 0x31), bVar4 == 0)) {
      uVar7 = 4;
      uVar6 = 4;
    }
    else {
      if (bVar4 != 2) {
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x74;
        *(uint *)(lVar9 + 0x2c) = (uint)bVar4;
        (**(code **)(lVar9 + 8))(param_1,0xffffffff);
      }
      uVar6 = 4;
      uVar7 = 5;
    }
  }
  else if (iVar1 == 3) {
    piVar10 = (int *)param_1[0x26];
    iVar1 = *piVar10;
    iVar2 = piVar10[0x18];
    iVar3 = piVar10[0x30];
    if (((iVar1 == 1) && (iVar2 == 2)) && (iVar3 == 3)) {
LAB_00d8aa4c:
      uVar6 = 2;
      uVar7 = 3;
    }
    else if (((iVar1 == 1) && (iVar2 == 0x22)) && (iVar3 == 0x23)) {
      uVar6 = 2;
      uVar7 = 7;
    }
    else if (((iVar1 == 0x52) && (iVar2 == 0x47)) && (iVar3 == 0x42)) {
LAB_00d8aaac:
      uVar7 = 2;
      uVar6 = 2;
    }
    else {
      if (((iVar1 != 0x72) || (iVar2 != 0x67)) || (iVar3 != 0x62)) {
        if ((int)param_1[0x2f] == 0) {
          if (*(int *)((long)param_1 + 0x184) == 0) {
            lVar9 = *param_1;
            *(undefined4 *)(lVar9 + 0x28) = 0x71;
            *(int *)(lVar9 + 0x2c) = iVar1;
            *(int *)(lVar9 + 0x30) = iVar2;
            *(int *)(lVar9 + 0x34) = iVar3;
            (**(code **)(lVar9 + 8))(param_1,1);
          }
          else {
            bVar4 = *(byte *)(param_1 + 0x31);
            if (bVar4 == 0) goto LAB_00d8aaac;
            if (bVar4 != 1) {
              lVar9 = *param_1;
              *(undefined4 *)(lVar9 + 0x28) = 0x74;
              *(uint *)(lVar9 + 0x2c) = (uint)bVar4;
              (**(code **)(lVar9 + 8))(param_1,0xffffffff);
            }
          }
        }
        goto LAB_00d8aa4c;
      }
      uVar6 = 2;
      uVar7 = 6;
    }
  }
  else if (iVar1 == 1) {
    uVar7 = 1;
    uVar6 = 1;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar6;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xc] = 0x100000000;
  param_1[0xb] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x100;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0xca;
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_1 + 0x22c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_1 + 0x22c);
  param_1[0xe] = 0x100000002;
  param_1[0xd] = 1;
  uVar5 = 1;
switchD_00d8a944_caseD_ca:
  return uVar5;
}

