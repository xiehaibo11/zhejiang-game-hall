
/* v8::internal::StackFrameBase::GetWasmInstance() */

long __thiscall v8::internal::StackFrameBase::GetWasmInstance(StackFrameBase *this)

{
  return *(long *)(this + 8) + 0xa0;
}

