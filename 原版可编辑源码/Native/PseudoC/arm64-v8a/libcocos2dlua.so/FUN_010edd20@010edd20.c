
void FUN_010edd20(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 5) = 0x2f;
                    /* WARNING: Could not recover jumptable at 0x010edd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}

