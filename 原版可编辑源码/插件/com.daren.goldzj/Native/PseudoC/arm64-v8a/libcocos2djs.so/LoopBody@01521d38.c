
/* v8::internal::interpreter::LoopBuilder::LoopBody() */

void __thiscall v8::internal::interpreter::LoopBuilder::LoopBody(LoopBuilder *this)

{
  if ((*(long *)(this + 0x40) != 0) && (*(int *)(this + 0x78) != -1)) {
    BytecodeArrayBuilder::IncBlockCounter
              (*(BytecodeArrayBuilder **)(*(long *)(this + 0x40) + 0x20),*(int *)(this + 0x78));
    return;
  }
  return;
}

