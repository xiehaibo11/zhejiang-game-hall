
/* v8::internal::JSStackFrame::GetPosition() const */

ulong __thiscall v8::internal::JSStackFrame::GetPosition(JSStackFrame *this)

{
  ulong uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 local_18;
  
  if (this[0x2c] == (JSStackFrame)0x0) {
    pIVar2 = *(Isolate **)(this + 8);
    uVar1 = **(ulong **)(this + 0x18) & 0xffffffff00000000 |
            (ulong)*(uint *)(**(ulong **)(this + 0x18) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar1;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar1);
    }
    SharedFunctionInfo::EnsureSourcePositionsAvailable(*(undefined8 *)(this + 8),puVar3);
    local_18 = **(undefined8 **)(this + 0x20);
    uVar1 = AbstractCode::SourcePosition((AbstractCode *)&local_18,*(int *)(this + 0x28));
    if (this[0x2c] == (JSStackFrame)0x0) {
      this[0x2c] = (JSStackFrame)0x1;
    }
    *(int *)(this + 0x30) = (int)uVar1;
  }
  else {
    uVar1 = (ulong)*(uint *)(this + 0x30);
  }
  return uVar1;
}

