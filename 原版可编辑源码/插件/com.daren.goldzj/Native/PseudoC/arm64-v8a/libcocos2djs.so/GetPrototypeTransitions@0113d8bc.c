
/* v8::internal::TransitionsAccessor::GetPrototypeTransitions() */

ulong __thiscall
v8::internal::TransitionsAccessor::GetPrototypeTransitions(TransitionsAccessor *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x20) == 4) && (uVar1 = *(ulong *)(this + 0x18), *(int *)(uVar1 + 7) != 0)) {
    return uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7);
  }
  return *(ulong *)(*(long *)this + 0x420);
}

