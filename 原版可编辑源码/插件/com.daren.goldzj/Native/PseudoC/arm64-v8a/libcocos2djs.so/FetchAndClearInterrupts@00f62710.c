
/* v8::internal::StackGuard::FetchAndClearInterrupts() */

ulong __thiscall v8::internal::StackGuard::FetchAndClearInterrupts(StackGuard *this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar2 + 0x9530));
  uVar3 = *(ulong *)(this + 0x30);
  if ((uVar3 & 1) == 0) {
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    uVar1 = uVar3 & 0xfffffffffffffffe;
    uVar3 = 1;
    *(ulong *)(this + 0x30) = uVar1;
    if (uVar1 != 0) goto LAB_00f62768;
  }
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
LAB_00f62768:
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar2 + 0x9530));
  return uVar3 & 0xffffffff;
}

