
undefined8 * FUN_0097bc5c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
                    /* try { // try from 0097bc7c to 00a7bc7f has its CatchHandler @ 0097bc9c */
                    /* try { // try from 0097bc80 to 00a7bcb7 has its CatchHandler @ 0097bbd4 */
  *puVar1 = &PTR_FUN_01c69ba8;
  se::Value::Value((Value *)(puVar1 + 1),(Value *)(param_1 + 8));
                    /* catch() { ... } // from try @ 0097bc7c with catch @ 0097bc9c */
  se::Value::Value((Value *)(puVar1 + 3),(Value *)(param_1 + 0x18));
  return puVar1;
}

