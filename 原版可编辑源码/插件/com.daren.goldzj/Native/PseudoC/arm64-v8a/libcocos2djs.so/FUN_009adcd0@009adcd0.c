
void FUN_009adcd0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* try { // try from 009adce4 to 00aadcef has its CatchHandler @ 009adef8 */
  return;
}

