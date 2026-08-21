
/* v8::internal::CallPrinter::VisitCompareOperation(v8::internal::CompareOperation*) */

void __thiscall
v8::internal::CallPrinter::VisitCompareOperation(CallPrinter *this,CompareOperation *param_1)

{
  int iVar1;
  ulong uVar2;
  AstNode *pAVar3;
  
  Print(this,"(");
  pAVar3 = *(AstNode **)(param_1 + 8);
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar3);
      }
    }
  }
  else {
    iVar1 = *(int *)(this + 8);
    if (this[0x48] == (CallPrinter)0x0) {
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar3);
      }
    }
    if (iVar1 == *(int *)(this + 8)) {
      Print(this,"(intermediate value)");
    }
  }
  Print(this," ");
  Print(this,*(char **)(Token::string_ + ((ulong)(*(uint *)(param_1 + 4) >> 7) & 0x7f) * 8));
  Print(this," ");
  pAVar3 = *(AstNode **)(param_1 + 0x10);
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar3);
      }
    }
  }
  else {
    iVar1 = *(int *)(this + 8);
    if (this[0x48] == (CallPrinter)0x0) {
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar3);
      }
    }
    if (iVar1 == *(int *)(this + 8)) {
      Print(this,"(intermediate value)");
    }
  }
  Print(this,")");
  return;
}

