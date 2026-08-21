
/* v8::internal::SafeStackFrameIterator::IsValidTop(v8::internal::ThreadLocalTop*) const */

bool __thiscall
v8::internal::SafeStackFrameIterator::IsValidTop
          (SafeStackFrameIterator *this,ThreadLocalTop *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x70);
  if ((*(ulong *)(this + 0x5a0) <= uVar3) && (uVar3 <= *(ulong *)(this + 0x5a8))) {
    uVar2 = *(ulong *)(uVar3 - 0x10);
    if (uVar2 < *(ulong *)(this + 0x5a0)) {
      return false;
    }
    if (*(ulong *)(this + 0x5a8) < uVar2) {
      return false;
    }
    plVar1 = (long *)(uVar2 - 8);
    if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
      plVar1 = (long *)(*StackFrame::return_address_location_resolver_)();
    }
    if (*plVar1 != 0) {
      return uVar3 < *(ulong *)(param_1 + 0x78);
    }
  }
  return false;
}

