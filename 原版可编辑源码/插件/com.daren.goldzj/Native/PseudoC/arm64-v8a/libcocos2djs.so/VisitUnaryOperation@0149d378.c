
/* v8::internal::CallPrinter::VisitUnaryOperation(v8::internal::UnaryOperation*) */

void __thiscall
v8::internal::CallPrinter::VisitUnaryOperation(CallPrinter *this,UnaryOperation *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  AstNode *pAVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  Print(this,"(");
  pcVar4 = *(char **)(Token::string_ + ((ulong)(uVar1 >> 7) & 0x7f) * 8);
  if (((uVar1 >> 7) + 0x50 & 0x7f) < 3) {
    Print(this,pcVar4);
    pcVar4 = " ";
  }
  Print(this,pcVar4);
  pAVar5 = *(AstNode **)(param_1 + 8);
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar5);
      }
    }
  }
  else {
    iVar2 = *(int *)(this + 8);
    if (this[0x48] == (CallPrinter)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar5);
      }
    }
    if (iVar2 == *(int *)(this + 8)) {
      Print(this,"(intermediate value)");
    }
  }
  Print(this,")");
  return;
}

