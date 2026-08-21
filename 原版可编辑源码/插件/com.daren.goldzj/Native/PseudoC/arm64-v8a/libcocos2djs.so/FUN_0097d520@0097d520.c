
undefined8 * FUN_0097d520(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  *puVar1 = &PTR_FUN_01c69ec8;
                    /* try { // try from 0097d558 to 00a7d563 has its CatchHandler @ 0097d674 */
  se::Value::Value((Value *)(puVar1 + 1),(Value *)(param_1 + 8));
                    /* try { // try from 0097d564 to 00a7d677 has its CatchHandler @ 0097d514 */
  se::Value::Value((Value *)(puVar1 + 3),(Value *)(param_1 + 0x18));
  return puVar1;
}

