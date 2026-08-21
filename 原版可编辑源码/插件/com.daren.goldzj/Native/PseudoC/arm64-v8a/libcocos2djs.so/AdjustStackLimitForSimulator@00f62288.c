
/* v8::internal::StackGuard::AdjustStackLimitForSimulator() */

void __thiscall v8::internal::StackGuard::AdjustStackLimitForSimulator(StackGuard *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar1 + 0x9530));
  if (*(long *)(this + 0x18) == *(long *)(this + 8)) {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  }
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar1 + 0x9530));
  return;
}

