
void jpeg_open_backing_store(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 5) = 0x33;
                    /* WARNING: Could not recover jumptable at 0x010f1df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}

