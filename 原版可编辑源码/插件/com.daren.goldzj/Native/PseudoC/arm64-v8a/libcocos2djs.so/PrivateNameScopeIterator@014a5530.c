
/* v8::internal::PrivateNameScopeIterator::PrivateNameScopeIterator(v8::internal::Scope*) */

void __thiscall
v8::internal::PrivateNameScopeIterator::PrivateNameScopeIterator
          (PrivateNameScopeIterator *this,Scope *param_1)

{
  Scope *pSVar1;
  Scope *pSVar2;
  
  *this = (PrivateNameScopeIterator)0x0;
  *(Scope **)(this + 8) = param_1;
  *(Scope **)(this + 0x10) = param_1;
  if ((param_1[0x80] != (Scope)0x0) || (((byte)param_1[0x88] & 7) != 0)) {
    pSVar1 = *(Scope **)(param_1 + 8);
    while (pSVar2 = pSVar1, pSVar2 != (Scope *)0x0) {
      if (pSVar2[0x80] == (Scope)0x0) {
        if (((byte)param_1[0x82] >> 1 & 1) == 0) goto LAB_014a5588;
        *this = (PrivateNameScopeIterator)0x1;
      }
      param_1 = pSVar2;
      pSVar1 = *(Scope **)(pSVar2 + 8);
    }
    pSVar2 = (Scope *)0x0;
LAB_014a5588:
    *(Scope **)(this + 0x10) = pSVar2;
  }
  return;
}

