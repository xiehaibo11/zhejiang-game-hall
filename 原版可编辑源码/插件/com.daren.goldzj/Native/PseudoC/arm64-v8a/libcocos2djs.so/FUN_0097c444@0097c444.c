
undefined8 * FUN_0097c444(long param_1)

{
  undefined8 *puVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097c498 with catch @ 0097c444
                        */
  puVar1 = operator_new(0x28);
  *puVar1 = &PTR_FUN_01c69ca8;
  se::Value::Value((Value *)(puVar1 + 1),(Value *)(param_1 + 8));
  se::Value::Value((Value *)(puVar1 + 3),(Value *)(param_1 + 0x18));
                    /* try { // try from 0097c490 to 00a7c497 has its CatchHandler @ 0097c5f8 */
                    /* try { // try from 0097c498 to 00a7c5fb has its CatchHandler @ 0097c444 */
  return puVar1;
}

