
/* v8::internal::JSStackFrame::IsToplevel() */

bool __thiscall v8::internal::JSStackFrame::IsToplevel(JSStackFrame *this)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)(this + 0x10);
  if ((uVar1 & 1) == 0) {
    return false;
  }
  if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0xab) {
    return true;
  }
  if ((int)uVar1 == *(int *)(*(long *)(this + 8) + 0xb0)) {
    return true;
  }
  return (int)uVar1 == *(int *)(*(long *)(this + 8) + 0xa0);
}

