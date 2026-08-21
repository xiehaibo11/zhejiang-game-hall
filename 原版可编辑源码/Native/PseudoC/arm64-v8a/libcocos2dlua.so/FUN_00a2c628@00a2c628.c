
void FUN_00a2c628(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    (*(code *)PTR_free_01769a00)(*param_1);
    *param_1 = 0;
                    /* catch() { ... } // from try @ 00a2c5c0 with catch @ 00a2c658 */
                    /* catch() { ... } // from try @ 00a2c5d8 with catch @ 00a2c65c */
    (*(code *)PTR_free_01769a00)(param_1);
    param_1 = puVar1;
  }
  return;
}

