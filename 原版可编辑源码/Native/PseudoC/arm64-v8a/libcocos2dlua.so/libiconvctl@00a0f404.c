
undefined8 libiconvctl(undefined8 *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  switch(param_2) {
  case 0:
                    /* try { // try from 00a0f448 to 00b0f44f has its CatchHandler @ 00a0f560 */
    if (((code *)*param_1 == FUN_00a0ea94) &&
       (*(int *)(param_1 + 2) == *(int *)((long)param_1 + 0x2c))) {
      uVar2 = 1;
    }
    else {
      uVar2 = (uint)((code *)*param_1 == FUN_00a0e48c);
    }
    break;
  case 1:
    uVar2 = *(uint *)(param_1 + 9);
    break;
  case 2:
                    /* try { // try from 00a0f480 to 00b0f48f has its CatchHandler @ 00a0f598 */
    *(uint *)(param_1 + 9) = (uint)(*param_3 != 0);
                    /* try { // try from 00a0f494 to 00b0f4a7 has its CatchHandler @ 00a0f580 */
    return 0;
  case 3:
    uVar2 = *(uint *)((long)param_1 + 0x4c);
    break;
  case 4:
    *(uint *)((long)param_1 + 0x4c) = (uint)(*param_3 != 0);
    return 0;
  case 5:
                    /* try { // try from 00a0f4c8 to 00b0f4ef has its CatchHandler @ 00a0f5c0 */
    if (param_3 == (uint *)0x0) {
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      return 0;
    }
    uVar4 = *(undefined8 *)(param_3 + 2);
    uVar3 = *(undefined8 *)param_3;
    param_1[0x11] = *(undefined8 *)(param_3 + 4);
    param_1[0x10] = uVar4;
    param_1[0xf] = uVar3;
    return 0;
  case 6:
    if (param_3 == (uint *)0x0) {
      param_1[0xe] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      return 0;
    }
                    /* try { // try from 00a0f4f0 to 00b0f61f has its CatchHandler @ 00a0f2b4 */
    uVar4 = *(undefined8 *)(param_3 + 2);
    uVar3 = *(undefined8 *)param_3;
    uVar6 = *(undefined8 *)(param_3 + 6);
    uVar5 = *(undefined8 *)(param_3 + 4);
    param_1[0xe] = *(undefined8 *)(param_3 + 8);
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
    param_1[0xd] = uVar6;
    param_1[0xc] = uVar5;
    return 0;
  default:
    puVar1 = (undefined4 *)__errno();
    *puVar1 = 0x16;
                    /* try { // try from 00a0f474 to 00b0f47f has its CatchHandler @ 00a0f5b8 */
    return 0xffffffff;
  }
  *param_3 = uVar2;
  return 0;
}

