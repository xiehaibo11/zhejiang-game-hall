
/* v8::internal::StackGuard::RequestInterrupt(v8::internal::StackGuard::InterruptFlag) */

void __thiscall v8::internal::StackGuard::RequestInterrupt(StackGuard *this,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar2 + 0x9530));
  if ((*(InterruptsScope **)(this + 0x28) == (InterruptsScope *)0x0) ||
     (uVar1 = InterruptsScope::Intercept(*(InterruptsScope **)(this + 0x28),param_2),
     (uVar1 & 1) == 0)) {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) | (ulong)param_2;
    *(undefined8 *)(this + 0x18) = 0xfffffffffffffffe;
    *(undefined8 *)(this + 0x20) = 0xfffffffffffffffe;
    FutexWaitListNode::NotifyWake((FutexWaitListNode *)(*(long *)this + 0xc6a8));
  }
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar2 + 0x9530));
  return;
}

