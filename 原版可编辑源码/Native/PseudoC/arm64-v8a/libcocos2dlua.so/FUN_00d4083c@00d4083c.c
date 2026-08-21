
void FUN_00d4083c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d40568 with catch @ 00d40848
                        */
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

