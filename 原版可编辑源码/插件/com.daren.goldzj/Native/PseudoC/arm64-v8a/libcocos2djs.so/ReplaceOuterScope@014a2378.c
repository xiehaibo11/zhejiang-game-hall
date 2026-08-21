
/* v8::internal::Scope::ReplaceOuterScope(v8::internal::Scope*) */

void __thiscall v8::internal::Scope::ReplaceOuterScope(Scope *this,Scope *param_1)

{
  Scope *pSVar1;
  Scope *pSVar2;
  
  pSVar2 = (Scope *)(*(long *)(this + 8) + 0x10);
  pSVar1 = *(Scope **)pSVar2;
  if (*(Scope **)pSVar2 != this) {
    do {
      pSVar2 = pSVar1;
      if (pSVar2 == (Scope *)0x0) goto LAB_014a23a8;
      pSVar1 = *(Scope **)(pSVar2 + 0x18);
    } while (*(Scope **)(pSVar2 + 0x18) != this);
    pSVar2 = pSVar2 + 0x18;
  }
  *(undefined8 *)pSVar2 = *(undefined8 *)(this + 0x18);
LAB_014a23a8:
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(Scope **)(param_1 + 0x10) = this;
  *(Scope **)(this + 8) = param_1;
  return;
}

