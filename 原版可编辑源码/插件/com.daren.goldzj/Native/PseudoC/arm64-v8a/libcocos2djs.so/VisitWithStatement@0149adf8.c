
/* v8::internal::CallPrinter::VisitWithStatement(v8::internal::WithStatement*) */

void __thiscall
v8::internal::CallPrinter::VisitWithStatement(CallPrinter *this,WithStatement *param_1)

{
  CallPrinter CVar1;
  ulong uVar2;
  AstNode *pAVar3;
  
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      pAVar3 = *(AstNode **)(param_1 + 0x10);
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
        CVar1 = this[0x1c];
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar3);
        CVar1 = this[0x1c];
      }
    }
    else {
      CVar1 = this[0x1c];
    }
  }
  else {
    Print(this,"(intermediate value)");
    CVar1 = this[0x1c];
  }
  if (CVar1 == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      pAVar3 = *(AstNode **)(param_1 + 0x18);
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x40) <= uVar2) {
        VisitNoStackOverflowCheck(this,pAVar3);
        return;
      }
      this[0x48] = (CallPrinter)0x1;
    }
    return;
  }
  Print(this,"(intermediate value)");
  return;
}

