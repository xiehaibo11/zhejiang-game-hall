
void FUN_01033094(undefined8 *param_1)

{
  void *pvVar1;
  
                    /* try { // try from 01033098 to 011330fb has its CatchHandler @ 01031838 */
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

