
/* v8::internal::StackGuard::SetStackLimit(unsigned long) */

void __thiscall v8::internal::StackGuard::SetStackLimit(StackGuard *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar1 + 0x9530));
  if (*(long *)(this + 0x18) == *(long *)(this + 8)) {
    *(ulong *)(this + 0x18) = param_1;
  }
  if (*(long *)(this + 0x20) == *(long *)(this + 0x10)) {
    *(ulong *)(this + 0x20) = param_1;
  }
  *(ulong *)(this + 8) = param_1;
  *(ulong *)(this + 0x10) = param_1;
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar1 + 0x9530));
  return;
}

