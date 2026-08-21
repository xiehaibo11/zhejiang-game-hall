
void FUN_00a68e4c(long param_1)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 00a68cec with catch @ 00a68e4c */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_01c6e938;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

