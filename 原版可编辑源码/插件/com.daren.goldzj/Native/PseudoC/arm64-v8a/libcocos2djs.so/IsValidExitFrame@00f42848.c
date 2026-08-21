
/* v8::internal::SafeStackFrameIterator::IsValidExitFrame(unsigned long) const */

bool __thiscall
v8::internal::SafeStackFrameIterator::IsValidExitFrame(SafeStackFrameIterator *this,ulong param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((*(ulong *)(this + 0x5a0) <= param_1) && (param_1 <= *(ulong *)(this + 0x5a8))) {
    uVar3 = *(ulong *)(param_1 - 0x10);
    bVar1 = false;
    if ((*(ulong *)(this + 0x5a0) <= uVar3) && (uVar3 <= *(ulong *)(this + 0x5a8))) {
      plVar2 = (long *)(uVar3 - 8);
      if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
        plVar2 = (long *)(*StackFrame::return_address_location_resolver_)();
      }
      bVar1 = *plVar2 != 0;
    }
    return bVar1;
  }
  return false;
}

