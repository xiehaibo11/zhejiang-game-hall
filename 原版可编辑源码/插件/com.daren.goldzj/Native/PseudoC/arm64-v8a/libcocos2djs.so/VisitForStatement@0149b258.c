
/* v8::internal::CallPrinter::VisitForStatement(v8::internal::ForStatement*) */

void __thiscall
v8::internal::CallPrinter::VisitForStatement(CallPrinter *this,ForStatement *param_1)

{
  CallPrinter CVar1;
  ulong uVar2;
  AstNode *pAVar3;
  
  pAVar3 = *(AstNode **)(param_1 + 0x20);
  if (pAVar3 == (AstNode *)0x0) {
LAB_0149b2a4:
    pAVar3 = *(AstNode **)(param_1 + 0x28);
    if (pAVar3 != (AstNode *)0x0) goto LAB_0149b2ac;
LAB_0149b34c:
    pAVar3 = *(AstNode **)(param_1 + 0x30);
  }
  else {
    if (this[0x1c] == (CallPrinter)0x0) {
      if (this[0x48] != (CallPrinter)0x0) goto LAB_0149b2a4;
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
        pAVar3 = *(AstNode **)(param_1 + 0x28);
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar3);
        pAVar3 = *(AstNode **)(param_1 + 0x28);
      }
    }
    else {
      Print(this,"(intermediate value)");
      pAVar3 = *(AstNode **)(param_1 + 0x28);
    }
    if (pAVar3 == (AstNode *)0x0) goto LAB_0149b34c;
LAB_0149b2ac:
    if (this[0x1c] == (CallPrinter)0x0) {
      if (this[0x48] != (CallPrinter)0x0) goto LAB_0149b34c;
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
        pAVar3 = *(AstNode **)(param_1 + 0x30);
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar3);
        pAVar3 = *(AstNode **)(param_1 + 0x30);
      }
    }
    else {
      Print(this,"(intermediate value)");
      pAVar3 = *(AstNode **)(param_1 + 0x30);
    }
  }
  if (pAVar3 != (AstNode *)0x0) {
    if (this[0x1c] != (CallPrinter)0x0) {
      Print(this,"(intermediate value)");
      CVar1 = this[0x1c];
      goto joined_r0x0149b3c0;
    }
    if (this[0x48] == (CallPrinter)0x0) {
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
        CVar1 = this[0x1c];
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar3);
        CVar1 = this[0x1c];
      }
      goto joined_r0x0149b3c0;
    }
  }
  CVar1 = this[0x1c];
joined_r0x0149b3c0:
  if (CVar1 != (CallPrinter)0x0) {
    Print(this,"(intermediate value)");
    return;
  }
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

