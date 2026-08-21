
void jinit_color_converter(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  
  puVar2 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x43] = (long)puVar2;
  *puVar2 = FUN_00d98238;
  switch(*(undefined4 *)((long)param_1 + 0x3c)) {
  case 1:
    if ((int)param_1[7] != 1) {
LAB_00d97f20:
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 10;
      (*(code *)*puVar4)(param_1);
    }
    break;
  case 2:
  case 3:
  case 6:
  case 7:
    if ((int)param_1[7] != 3) goto LAB_00d97f20;
    break;
  case 4:
  case 5:
    if ((int)param_1[7] != 4) goto LAB_00d97f20;
    break;
  default:
    if ((int)param_1[7] < 1) goto LAB_00d97f20;
  }
  if (*(int *)((long)param_1 + 0x154) == 0) {
LAB_00d97f68:
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    if ((uVar3 | 4) != 6) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x1c;
      (*(code *)*puVar4)(param_1);
      goto LAB_00d97f68;
    }
  }
  switch(uVar3) {
  case 1:
    if (*(int *)((long)param_1 + 0x5c) != 1) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0xb;
      (*(code *)*puVar4)(param_1);
    }
    switch(*(undefined4 *)((long)param_1 + 0x3c)) {
    case 1:
    case 3:
    case 7:
      pcVar6 = FUN_00d9823c;
      goto LAB_00d98210;
    case 2:
      pcVar6 = FUN_00d983c0;
      break;
    default:
switchD_00d98088_caseD_4:
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x1c;
                    /* WARNING: Could not recover jumptable at 0x00d981e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_1);
      return;
    }
LAB_00d98230:
    *puVar2 = FUN_00d98290;
    puVar2[1] = pcVar6;
    return;
  case 2:
  case 6:
    if (*(int *)((long)param_1 + 0x5c) != 3) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0xb;
      (*(code *)*puVar4)(param_1);
      uVar3 = *(uint *)(param_1 + 0xc);
    }
    if (*(uint *)((long)param_1 + 0x3c) != uVar3) goto switchD_00d98088_caseD_4;
    if (*(int *)((long)param_1 + 0x154) == 1) {
      pcVar6 = FUN_00d98608;
    }
    else {
      if (*(int *)((long)param_1 + 0x154) != 0) goto switchD_00d98088_caseD_4;
      pcVar6 = FUN_00d9844c;
    }
    goto LAB_00d98210;
  case 3:
    if (*(int *)((long)param_1 + 0x5c) != 3) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0xb;
      (*(code *)*puVar4)(param_1);
    }
    if (*(int *)((long)param_1 + 0x3c) != 3) {
      if (*(int *)((long)param_1 + 0x3c) != 2) goto switchD_00d98088_caseD_4;
      pcVar6 = FUN_00d987dc;
      goto LAB_00d98230;
    }
    break;
  case 4:
    if (*(int *)((long)param_1 + 0x5c) != 4) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0xb;
      (*(code *)*puVar4)(param_1);
    }
    if (*(int *)((long)param_1 + 0x3c) != 4) goto switchD_00d98088_caseD_4;
    break;
  case 5:
    if (*(int *)((long)param_1 + 0x5c) != 4) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0xb;
      (*(code *)*puVar4)(param_1);
    }
    if (*(int *)((long)param_1 + 0x3c) != 5) {
      if (*(int *)((long)param_1 + 0x3c) != 4) goto switchD_00d98088_caseD_4;
      pcVar6 = FUN_00d9895c;
      goto LAB_00d98230;
    }
    break;
  case 7:
    if (*(int *)((long)param_1 + 0x5c) != 3) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0xb;
      (*(code *)*puVar4)(param_1);
    }
    iVar1 = *(int *)((long)param_1 + 0x3c);
    if (iVar1 != 7) {
      if (iVar1 != 3) {
        if (iVar1 == 2) {
          lVar5 = param_1[0xd];
          *(undefined4 *)(lVar5 + 0x94) = 1;
          *(undefined4 *)(lVar5 + 0xf4) = 1;
          *puVar2 = FUN_00d98290;
          puVar2[1] = FUN_00d987dc;
          return;
        }
        goto switchD_00d98088_caseD_4;
      }
      lVar5 = param_1[0xd];
      *(undefined4 *)(lVar5 + 0x94) = 1;
      *(undefined4 *)(lVar5 + 0xf4) = 1;
    }
    break;
  default:
    if ((uVar3 != *(uint *)((long)param_1 + 0x3c)) ||
       (*(int *)((long)param_1 + 0x5c) != (int)param_1[7])) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x1c;
      (*(code *)*puVar4)(param_1);
    }
  }
  pcVar6 = FUN_00d988e8;
LAB_00d98210:
  puVar2[1] = pcVar6;
  return;
}

