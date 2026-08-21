
void FUN_00962fc4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
                    /* catch() { ... } // from try @ 00962ee4 with catch @ 00962fe4 */
  *puVar1 = &PTR_FUN_0169de70;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}

