
undefined8 XXH32_resetState(undefined8 *param_1,int param_2)

{
  *(int *)(param_1 + 1) = param_2;
  *param_1 = 0;
  *(int *)((long)param_1 + 0x14) = param_2;
  *(int *)(param_1 + 3) = param_2 + 0x61c8864f;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(param_2 + -0x7a143589,param_2 + 0x24234428);
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  return 0;
}

