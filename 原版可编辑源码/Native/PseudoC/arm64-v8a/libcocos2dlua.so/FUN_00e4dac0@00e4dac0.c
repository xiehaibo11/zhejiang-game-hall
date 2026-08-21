
void FUN_00e4dac0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* try { // try from 00e4dad4 to 00f4dad7 has its CatchHandler @ 00e4daf0 */
  return;
}

