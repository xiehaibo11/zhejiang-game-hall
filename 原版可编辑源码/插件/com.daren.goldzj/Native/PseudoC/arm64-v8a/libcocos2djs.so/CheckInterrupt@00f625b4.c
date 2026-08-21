
/* v8::internal::StackGuard::CheckInterrupt(v8::internal::StackGuard::InterruptFlag) */

bool __thiscall v8::internal::StackGuard::CheckInterrupt(StackGuard *this,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar1 + 0x9530));
  uVar2 = *(ulong *)(this + 0x30);
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar1 + 0x9530));
  return (uVar2 & param_2) != 0;
}

