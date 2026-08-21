
/* v8::internal::IndirectFunctionTableEntry::object_ref() const */

ulong __thiscall
v8::internal::IndirectFunctionTableEntry::object_ref(IndirectFunctionTableEntry *this)

{
  ulong uVar1;
  uint *puVar2;
  
  if (*(ulong **)this == (ulong *)0x0) {
    uVar1 = **(ulong **)(this + 8);
    puVar2 = (uint *)(uVar1 + 0x1b);
  }
  else {
    uVar1 = **(ulong **)this;
    puVar2 = (uint *)(uVar1 + 0x37);
  }
  return uVar1 & 0xffffffff00000000 |
         (ulong)*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*puVar2) +
                          (long)(*(int *)(this + 0x10) << 2) + 7);
}

