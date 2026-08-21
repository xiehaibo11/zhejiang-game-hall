
/* v8::internal::InterruptsScope::Intercept(v8::internal::StackGuard::InterruptFlag) */

undefined8 __thiscall v8::internal::InterruptsScope::Intercept(InterruptsScope *this,ulong param_2)

{
  undefined8 uVar1;
  InterruptsScope *pIVar2;
  InterruptsScope *pIVar3;
  
  uVar1 = 0;
  if (this != (InterruptsScope *)0x0) {
    pIVar3 = (InterruptsScope *)0x0;
    do {
      pIVar2 = pIVar3;
      if (((*(ulong *)(this + 0x10) & param_2 & 0xffffffff) != 0) &&
         (pIVar2 = this, *(int *)(this + 0x20) == 1)) break;
      this = *(InterruptsScope **)(this + 0x28);
      pIVar3 = pIVar2;
    } while (this != (InterruptsScope *)0x0);
    if (pIVar3 == (InterruptsScope *)0x0) {
      return 0;
    }
    uVar1 = 1;
    *(ulong *)(pIVar3 + 0x18) = *(ulong *)(pIVar3 + 0x18) | param_2 & 0xffffffff;
  }
  return uVar1;
}

