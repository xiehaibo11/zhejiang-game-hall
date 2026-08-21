
undefined8 * FUN_0097d9f0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  *puVar1 = &PTR_FUN_01c69f58;
  se::Value::Value((Value *)(puVar1 + 1),(Value *)(param_1 + 8));
                    /* try { // try from 0097da30 to 00a7da37 has its CatchHandler @ 0097dd1c */
  se::Value::Value((Value *)(puVar1 + 3),(Value *)(param_1 + 0x18));
                    /* try { // try from 0097da38 to 00a7db87 has its CatchHandler @ 0097d9e0 */
  return puVar1;
}

