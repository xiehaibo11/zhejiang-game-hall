
/* v8::internal::Scope::ContextChainLengthUntilOutermostSloppyEval() const */

int __thiscall v8::internal::Scope::ContextChainLengthUntilOutermostSloppyEval(Scope *this)

{
  int iVar1;
  int iVar2;
  
  if (this == (Scope *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      if (0 < *(int *)(this + 0x7c)) {
        iVar2 = iVar2 + 1;
        if (((*(ushort *)(this + 0x81) >> 8 & 1) != 0) && ((*(ushort *)(this + 0x81) & 4) != 0)) {
          iVar1 = iVar2;
        }
      }
      this = *(Scope **)(this + 8);
    } while (this != (Scope *)0x0);
  }
  return iVar1;
}

