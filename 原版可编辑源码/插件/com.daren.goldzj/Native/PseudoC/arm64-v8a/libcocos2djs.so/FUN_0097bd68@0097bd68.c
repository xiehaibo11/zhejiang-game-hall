
void FUN_0097bd68(void *param_1)

{
  se::Value::~Value((Value *)((long)param_1 + 0x18));
  se::Value::~Value((Value *)((long)param_1 + 8));
                    /* try { // try from 0097bd90 to 00a7be1f has its CatchHandler @ 0097bd90
                       catch() { ... } // from try @ 0097bd90 with catch @ 0097bd90
                       catch() { ... } // from try @ 0097be28 with catch @ 0097bd90
                       catch() { ... } // from try @ 0097bec4 with catch @ 0097bd90
                       catch() { ... } // from try @ 0097bf18 with catch @ 0097bd90
                       catch() { ... } // from try @ 0097bf70 with catch @ 0097bd90 */
  operator_delete(param_1);
  return;
}

