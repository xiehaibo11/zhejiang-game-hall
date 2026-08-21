
/* v8::internal::StackGuard::EnableInterrupts() */

void __thiscall v8::internal::StackGuard::EnableInterrupts(StackGuard *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar1 + 0x9530));
  if (*(long *)(this + 0x30) != 0) {
    *(undefined8 *)(this + 0x18) = 0xfffffffffffffffe;
    *(undefined8 *)(this + 0x20) = 0xfffffffffffffffe;
  }
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar1 + 0x9530));
  return;
}

