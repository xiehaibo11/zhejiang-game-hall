
/* v8::internal::Debug::UpdateHookOnFunctionCall() */

void __thiscall v8::internal::Debug::UpdateHookOnFunctionCall(Debug *this)

{
  if ((this[0x4c] != (Debug)0x2) && (*(int *)(*(long *)(this + 0x88) + 0xb80c) != 0x20)) {
    this[9] = this[0x84];
    return;
  }
  this[9] = (Debug)0x1;
  return;
}

