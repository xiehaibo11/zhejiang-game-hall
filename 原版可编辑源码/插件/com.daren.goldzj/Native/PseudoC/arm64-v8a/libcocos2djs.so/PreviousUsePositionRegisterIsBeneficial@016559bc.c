
/* v8::internal::compiler::LiveRange::PreviousUsePositionRegisterIsBeneficial(v8::internal::compiler::LifetimePosition)
   const */

long __thiscall
v8::internal::compiler::LiveRange::PreviousUsePositionRegisterIsBeneficial
          (LiveRange *this,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x18);
  if (lVar2 == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    if (param_2 <= *(int *)(lVar2 + 0x18)) {
      return lVar1;
    }
    if ((*(byte *)(lVar2 + 0x1c) & 0x20) != 0) {
      lVar1 = lVar2;
    }
    lVar2 = *(long *)(lVar2 + 0x10);
  } while (lVar2 != 0);
  return lVar1;
}

