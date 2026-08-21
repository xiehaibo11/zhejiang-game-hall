
/* v8::internal::StackGuard::ClearInterrupt(v8::internal::StackGuard::InterruptFlag) */

void __thiscall v8::internal::StackGuard::ClearInterrupt(StackGuard *this,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar2 + 0x9530));
  for (lVar3 = *(long *)(this + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x28)) {
    *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) & (long)(int)~param_2;
  }
  uVar1 = *(ulong *)(this + 0x30) & (long)(int)~param_2;
  *(ulong *)(this + 0x30) = uVar1;
  if (uVar1 == 0) {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
  }
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar2 + 0x9530));
  return;
}

