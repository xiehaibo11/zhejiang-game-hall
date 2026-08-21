
void FUN_009881c8(long param_1,undefined8 *param_2)

{
                    /* catch() { ... } // from try @ 009880b4 with catch @ 009881c8 */
  *param_2 = &PTR_FUN_01c6a288;
                    /* catch() { ... } // from try @ 0098808c with catch @ 009881f8 */
  se::Value::Value((Value *)(param_2 + 1),(Value *)(param_1 + 8));
  se::Value::Value((Value *)(param_2 + 3),(Value *)(param_1 + 0x18));
                    /* try { // try from 00988214 to 00a882bb has its CatchHandler @ 00988214
                       catch() { ... } // from try @ 00988214 with catch @ 00988214
                       catch() { ... } // from try @ 009882fc with catch @ 00988214 */
  return;
}

