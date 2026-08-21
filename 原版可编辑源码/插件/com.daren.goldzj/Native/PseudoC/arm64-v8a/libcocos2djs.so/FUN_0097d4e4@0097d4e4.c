
void FUN_0097d4e4(undefined8 *param_1)

{
                    /* try { // try from 0097d4fc to 00a7d4ff has its CatchHandler @ 0097d500 */
  *param_1 = &PTR_FUN_01c69ec8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097d4fc with catch @ 0097d500
                        */
                    /* try { // try from 0097d504 to 00a7d507 has its CatchHandler @ 0097d510 */
  se::Value::~Value((Value *)(param_1 + 3));
                    /* try { // try from 0097d508 to 00a7d513 has its CatchHandler @ 0097d3c0 */
  se::Value::~Value((Value *)(param_1 + 1));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097d504 with catch @ 0097d510
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097d564 with catch @ 0097d514
                        */
  operator_delete(param_1);
  return;
}

