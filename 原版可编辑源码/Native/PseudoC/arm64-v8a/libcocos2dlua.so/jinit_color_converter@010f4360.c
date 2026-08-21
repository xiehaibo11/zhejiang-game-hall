
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
  *puVar2 = FUN_010f46e0;
  switch(*(undefined4 *)((long)param_1 + 0x3c)) {
  case 1:
    if ((int)param_1[7] != 1) {
LAB_010f43c8:
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 10;
      (*(code *)*puVar4)(param_1);
    }
    break;
  case 2:
  case 3:
  case 6:
  case 7:
    if ((int)param_1[7] != 3) goto LAB_010f43c8;
    break;
  case 4:
  case 5:
    if ((int)param_1[7] != 4) goto LAB_010f43c8;
    break;
  default:
    if ((int)param_1[7] < 1) goto LAB_010f43c8;
  }
  if (*(int *)((long)param_1 + 0x154) == 0) {
LAB_010f4410:
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    if ((uVar3 | 4) != 6) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x1c;
      (*(code *)*puVar4)(param_1);
      goto LAB_010f4410;
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
      pcVar6 = FUN_010f46e4;
      goto LAB_010f46b8;
    case 2:
      pcVar6 = FUN_010f4868;
      break;
    default:
switchD_010f4530_caseD_4:
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x1c;
                    /* WARNING: Could not recover jumptable at 0x010f4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_1);
      return;
    }
LAB_010f46d8:
    *puVar2 = FUN_010f4738;
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
    if (*(uint *)((long)param_1 + 0x3c) != uVar3) goto switchD_010f4530_caseD_4;
    if (*(int *)((long)param_1 + 0x154) == 1) {
      pcVar6 = FUN_010f4ab0;
    }
    else {
                    /* try { // try from 010f4474 to 011f4543 has its CatchHandler @ 010f4474
                       catch() { ... } // from try @ 010f4474 with catch @ 010f4474
                       catch() { ... } // from try @ 010f455c with catch @ 010f4474 */
      if (*(int *)((long)param_1 + 0x154) != 0) goto switchD_010f4530_caseD_4;
      pcVar6 = FUN_010f48f4;
    }
    goto LAB_010f46b8;
  case 3:
                    /* try { // try from 010f4544 to 011f455b has its CatchHandler @ 010f45b8 */
    if (*(int *)((long)param_1 + 0x5c) != 3) {
      puVar4 = (undefined8 *)*param_1;
                    /* try { // try from 010f455c to 011f45cb has its CatchHandler @ 010f4474 */
      *(undefined4 *)(puVar4 + 5) = 0xb;
      (*(code *)*puVar4)(param_1);
    }
    if (*(int *)((long)param_1 + 0x3c) != 3) {
      if (*(int *)((long)param_1 + 0x3c) != 2) goto switchD_010f4530_caseD_4;
      pcVar6 = FUN_010f4c84;
      goto LAB_010f46d8;
    }
    break;
  case 4:
    if (*(int *)((long)param_1 + 0x5c) != 4) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0xb;
      (*(code *)*puVar4)(param_1);
    }
                    /* catch() { ... } // from try @ 010f4544 with catch @ 010f45b8 */
    if (*(int *)((long)param_1 + 0x3c) != 4) goto switchD_010f4530_caseD_4;
    break;
  case 5:
    if (*(int *)((long)param_1 + 0x5c) != 4) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0xb;
      (*(code *)*puVar4)(param_1);
    }
    if (*(int *)((long)param_1 + 0x3c) != 5) {
      if (*(int *)((long)param_1 + 0x3c) != 4) goto switchD_010f4530_caseD_4;
      pcVar6 = FUN_010f4e04;
      goto LAB_010f46d8;
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
          *puVar2 = FUN_010f4738;
          puVar2[1] = FUN_010f4c84;
          return;
        }
        goto switchD_010f4530_caseD_4;
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
  pcVar6 = FUN_010f4d90;
LAB_010f46b8:
  puVar2[1] = pcVar6;
  return;
}

