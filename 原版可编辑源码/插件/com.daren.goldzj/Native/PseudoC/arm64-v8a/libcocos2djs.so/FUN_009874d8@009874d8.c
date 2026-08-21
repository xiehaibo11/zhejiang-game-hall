
undefined8 * FUN_009874d8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098749c with catch @ 00987504
                        */
  *puVar1 = &PTR_FUN_01c6a168;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00987494 with catch @ 00987508
                        */
  se::Value::Value((Value *)(puVar1 + 1),(Value *)(param_1 + 8));
  se::Value::Value((Value *)(puVar1 + 3),(Value *)(param_1 + 0x18));
                    /* try { // try from 00987528 to 00a8752b has its CatchHandler @ 0098752c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00987528 with catch @ 0098752c
                        */
                    /* try { // try from 00987530 to 00a87533 has its CatchHandler @ 0098753c */
  return puVar1;
}

