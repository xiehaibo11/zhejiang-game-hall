
void jpeg_set_marker_processor(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  if (param_2 == 0xfe) {
    *(undefined8 *)(param_1[0x4d] + 0x28) = param_3;
    return;
  }
  if ((param_2 & 0xfffffff0) == 0xe0) {
    *(undefined8 *)(param_1[0x4d] + (long)(int)param_2 * 8 + -0x6d0) = param_3;
    return;
  }
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 5) = 0x46;
  *(uint *)((long)param_1 + 0x2c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00d8e8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}

