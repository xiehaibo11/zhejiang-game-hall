
/* v8::internal::ScopeIterator::start_position() */

ulong __thiscall v8::internal::ScopeIterator::start_position(ScopeIterator *this)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(long *)(this + 0x20) == 0) {
    local_28 = **(ulong **)(this + 0x28);
    if (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x8f) {
      uVar1 = 0;
    }
    else {
      local_20 = Context::closure_context((Context *)&local_28);
      local_18 = Context::scope_info((Context *)&local_20);
      uVar1 = ScopeInfo::StartPosition((ScopeInfo *)&local_18);
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(*(long *)(this + 0x50) + 0x70);
  }
  return uVar1;
}

