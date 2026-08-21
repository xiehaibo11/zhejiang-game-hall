
/* v8::internal::AllocationTraceNode::~AllocationTraceNode() */

void __thiscall v8::internal::AllocationTraceNode::~AllocationTraceNode(AllocationTraceNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  AllocationTraceNode *this_00;
  
  puVar2 = *(undefined8 **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar2 != puVar1) {
    do {
      this_00 = (AllocationTraceNode *)*puVar2;
      if (this_00 != (AllocationTraceNode *)0x0) {
        ~AllocationTraceNode(this_00);
        operator_delete(this_00);
      }
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x18);
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  *(undefined8 **)(this + 0x20) = puVar2;
  operator_delete(puVar2);
  return;
}

