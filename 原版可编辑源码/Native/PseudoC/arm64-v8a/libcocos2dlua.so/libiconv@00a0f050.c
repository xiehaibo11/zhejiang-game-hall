
void libiconv(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00a0f060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a0f070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[1])(param_1,param_4,param_5);
  return;
}

