
void FUN_0100863c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 01008648 to 0110867f has its CatchHandler @ 01008610 */
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

