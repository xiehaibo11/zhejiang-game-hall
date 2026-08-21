
undefined8 * FUN_009884c8(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009884d0 to 00a884ef has its CatchHandler @ 00988574 */
  puVar1 = operator_new(0x28);
                    /* try { // try from 009884f0 to 00a88587 has its CatchHandler @ 00988408 */
  *puVar1 = &PTR_FUN_01c6a308;
  se::Value::Value((Value *)(puVar1 + 1),(Value *)(param_1 + 8));
  se::Value::Value((Value *)(puVar1 + 3),(Value *)(param_1 + 0x18));
  return puVar1;
}

