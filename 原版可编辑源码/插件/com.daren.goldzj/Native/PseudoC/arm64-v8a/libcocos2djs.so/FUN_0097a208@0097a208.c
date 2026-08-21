
undefined8 * FUN_0097a208(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
                    /* try { // try from 0097a22c to 00a7a233 has its CatchHandler @ 0097a4d8 */
  *puVar1 = &PTR_FUN_01c69930;
                    /* try { // try from 0097a23c to 00a7a247 has its CatchHandler @ 0097a4c8 */
  se::Value::Value((Value *)(puVar1 + 1),(Value *)(param_1 + 8));
  se::Value::Value((Value *)(puVar1 + 3),(Value *)(param_1 + 0x18));
                    /* try { // try from 0097a25c to 00a7a267 has its CatchHandler @ 0097a4dc */
  return puVar1;
}

