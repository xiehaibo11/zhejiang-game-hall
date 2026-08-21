
/* v8::internal::interpreter::BytecodeArrayBuilder::SetDeferredSourceInfo(v8::internal::interpreter::BytecodeSourceInfo)
    */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::SetDeferredSourceInfo
          (BytecodeArrayBuilder *this,ulong param_2)

{
  if ((param_2 & 0xff) != 0) {
    *(ulong *)(this + 0x1b0) = param_2;
  }
  return;
}

