
void FUN_0101ac3c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
                    /* try { // try from 0101ac4c to 0111ac53 has its CatchHandler @ 0101ac88 */
    operator_delete(pvVar1);
    return;
  }
  return;
}

