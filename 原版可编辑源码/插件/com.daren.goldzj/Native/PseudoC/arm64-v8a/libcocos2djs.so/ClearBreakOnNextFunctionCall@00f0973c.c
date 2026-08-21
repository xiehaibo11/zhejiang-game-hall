
/* v8::internal::Debug::ClearBreakOnNextFunctionCall() */

void __thiscall v8::internal::Debug::ClearBreakOnNextFunctionCall(Debug *this)

{
  this[0x84] = (Debug)0x0;
  if (this[0x4c] == (Debug)0x2) {
    this[9] = (Debug)0x1;
    return;
  }
  this[9] = (Debug)(*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20);
  return;
}

