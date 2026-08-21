
/* v8::internal::CallPrinter::Find(v8::internal::AstNode*, bool) */

void __thiscall v8::internal::CallPrinter::Find(CallPrinter *this,AstNode *param_1,bool param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x40) <= uVar2) {
        VisitNoStackOverflowCheck(this,param_1);
        return;
      }
      this[0x48] = (CallPrinter)0x1;
    }
    return;
  }
  if (param_2) {
    iVar1 = *(int *)(this + 8);
    if (this[0x48] == (CallPrinter)0x0) {
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,param_1);
      }
    }
    if (iVar1 != *(int *)(this + 8)) {
      return;
    }
  }
  Print(this,"(intermediate value)");
  return;
}

