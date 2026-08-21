
/* v8::internal::CallPrinter::VisitForOfStatement(v8::internal::ForOfStatement*) */

void __thiscall
v8::internal::CallPrinter::VisitForOfStatement(CallPrinter *this,ForOfStatement *param_1)

{
  CallPrinter CVar1;
  ulong uVar2;
  AstNode *pAVar3;
  int iVar4;
  
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      pAVar3 = *(AstNode **)(param_1 + 0x20);
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
    Print(this,"(intermediate value)");
  }
  pAVar3 = *(AstNode **)(param_1 + 0x28);
  if (*(int *)pAVar3 == *(int *)(this + 0x18)) {
    iVar4 = *(int *)(param_1 + 0x30);
    this[0x20] = (CallPrinter)(iVar4 == 1);
    this[0x1f] = (CallPrinter)(iVar4 != 1);
    if (this[0x1c] == (CallPrinter)0x0) {
      iVar4 = *(int *)(this + 8);
      this[0x1c] = (CallPrinter)0x1;
      if (this[0x48] == (CallPrinter)0x0) {
        pAVar3 = *(AstNode **)(param_1 + 0x28);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar3);
        }
      }
      if (iVar4 == *(int *)(this + 8)) {
        Print(this,"(intermediate value)");
      }
      *(undefined2 *)(this + 0x1c) = 0x100;
      goto LAB_0149b73c;
    }
    iVar4 = *(int *)(this + 8);
    if (this[0x48] == (CallPrinter)0x0) {
      pAVar3 = *(AstNode **)(param_1 + 0x28);
LAB_0149b644:
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar3);
      }
    }
LAB_0149b6cc:
    if (iVar4 == *(int *)(this + 8)) {
      Print(this,"(intermediate value)");
    }
LAB_0149b6e8:
    CVar1 = this[0x1c];
  }
  else {
    if (this[0x1c] != (CallPrinter)0x0) {
      iVar4 = *(int *)(this + 8);
      if (this[0x48] == (CallPrinter)0x0) goto LAB_0149b644;
      goto LAB_0149b6cc;
    }
    if (this[0x48] != (CallPrinter)0x0) goto LAB_0149b6e8;
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x40) <= uVar2) {
      VisitNoStackOverflowCheck(this,pAVar3);
      if (this[0x1c] == (CallPrinter)0x0) goto LAB_0149b73c;
      goto LAB_0149b6f0;
    }
    this[0x48] = (CallPrinter)0x1;
    CVar1 = this[0x1c];
  }
  if (CVar1 != (CallPrinter)0x0) {
LAB_0149b6f0:
    Print(this,"(intermediate value)");
    return;
  }
LAB_0149b73c:
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

