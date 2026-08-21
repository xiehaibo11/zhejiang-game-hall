
void FUN_0097d9b4(undefined8 *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097d98c with catch @ 0097d9c4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097d95c with catch @ 0097d9c8
                        */
  *param_1 = &PTR_FUN_01c69f58;
  se::Value::~Value((Value *)(param_1 + 3));
  se::Value::~Value((Value *)(param_1 + 1));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097da38 with catch @ 0097d9e0
                       catch(type#1 @ 00000000) { ... } // from try @ 0097dbf4 with catch @ 0097d9e0
                        */
  operator_delete(param_1);
  return;
}

