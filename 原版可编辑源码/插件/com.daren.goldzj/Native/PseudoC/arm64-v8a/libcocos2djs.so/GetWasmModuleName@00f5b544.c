
/* v8::internal::StackFrameBase::GetWasmModuleName() */

long __thiscall v8::internal::StackFrameBase::GetWasmModuleName(StackFrameBase *this)

{
  return *(long *)(this + 8) + 0xa0;
}

