
/* v8::internal::CallPrinter::VisitNaryOperation(v8::internal::NaryOperation*) */

void __thiscall
v8::internal::CallPrinter::VisitNaryOperation(CallPrinter *this,NaryOperation *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  AstNode *pAVar4;
  long lVar5;
  
  Print(this,"(");
  pAVar4 = *(AstNode **)(param_1 + 8);
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar4);
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
        VisitNoStackOverflowCheck(this,pAVar4);
      }
    }
    if (iVar1 == *(int *)(this + 8)) {
      Print(this,"(intermediate value)");
    }
  }
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x10)) {
    lVar5 = 0;
    uVar2 = 0;
    do {
      Print(this," ");
      Print(this,*(char **)(Token::string_ + ((ulong)(*(uint *)(param_1 + 4) >> 7) & 0x7f) * 8));
      Print(this," ");
      pAVar4 = *(AstNode **)(*(long *)(param_1 + 0x10) + lVar5);
      if (this[0x1c] == (CallPrinter)0x0) {
        if (this[0x48] == (CallPrinter)0x0) {
          uVar3 = GetCurrentStackPosition();
          if (uVar3 < *(ulong *)(this + 0x40)) {
            this[0x48] = (CallPrinter)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar4);
          }
        }
      }
      else {
        iVar1 = *(int *)(this + 8);
        if (this[0x48] == (CallPrinter)0x0) {
          uVar3 = GetCurrentStackPosition();
          if (uVar3 < *(ulong *)(this + 0x40)) {
            this[0x48] = (CallPrinter)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar4);
          }
        }
        if (iVar1 == *(int *)(this + 8)) {
          Print(this,"(intermediate value)");
        }
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar2 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 4));
  }
  Print(this,")");
  return;
}

