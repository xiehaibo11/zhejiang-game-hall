
/* v8::internal::Scope::ContextChainLength(v8::internal::Scope*) const */

int __thiscall v8::internal::Scope::ContextChainLength(Scope *this,Scope *param_1)

{
  Scope *pSVar1;
  int iVar2;
  
  if (this != param_1) {
    iVar2 = 0;
    do {
      pSVar1 = this + 0x7c;
      this = *(Scope **)(this + 8);
      if (0 < *(int *)pSVar1) {
        iVar2 = iVar2 + 1;
      }
    } while (this != param_1);
    return iVar2;
  }
  return 0;
}

