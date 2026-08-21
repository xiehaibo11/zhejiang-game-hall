
void FUN_00d455d0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
                    /* try { // try from 00d455e0 to 00e455e3 has its CatchHandler @ 00d45624 */
    operator_delete(pvVar1);
    return;
  }
  return;
}

