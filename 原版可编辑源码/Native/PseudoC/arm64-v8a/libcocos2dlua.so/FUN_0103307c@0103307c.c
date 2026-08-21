
void FUN_0103307c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* try { // try from 01033090 to 01133097 has its CatchHandler @ 01033198 */
  return;
}

