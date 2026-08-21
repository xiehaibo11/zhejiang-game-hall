
/* v8::internal::ScopeIterator::GetSourcePosition() */

ulong __thiscall v8::internal::ScopeIterator::GetSourcePosition(ScopeIterator *this)

{
  ulong uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  undefined8 local_38;
  
  if (*(long *)(this + 0x10) == 0) {
    pIVar3 = *(Isolate **)this;
    uVar1 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
    uVar1 = uVar1 | *(uint *)((uVar1 | *(uint *)(**(ulong **)(this + 0x18) + 0xb)) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar1);
    }
    SharedFunctionInfo::EnsureSourcePositionsAvailable(pIVar3,puVar2);
    local_38 = **(undefined8 **)(this + 0x18);
    uVar1 = JSGeneratorObject::source_position((JSGeneratorObject *)&local_38);
  }
  else {
    uVar1 = (ulong)*(uint *)(*(long *)(this + 0x10) + 0x48);
  }
  return uVar1;
}

