
void FUN_00fda8ec(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_01723f48;
                    /* catch() { ... } // from try @ 00fda954 with catch @ 00fda910 */
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

