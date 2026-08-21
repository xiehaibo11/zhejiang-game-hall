
/* v8::internal::StackGuard::DisableInterrupts() */

void __thiscall v8::internal::StackGuard::DisableInterrupts(StackGuard *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar1 + 0x9530));
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar1 + 0x9530));
  return;
}

