
/* v8::internal::CallPrinter::VisitForInStatement(v8::internal::ForInStatement*) */

void v8::internal::CallPrinter::VisitForInStatement(ForInStatement *param_1)

{
  ForInStatement FVar1;
  ulong uVar2;
  long in_x1;
  AstNode *pAVar3;
  
  if (param_1[0x1c] == (ForInStatement)0x0) {
    if (param_1[0x48] == (ForInStatement)0x0) {
      pAVar3 = *(AstNode **)(in_x1 + 0x20);
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(param_1 + 0x40)) {
        param_1[0x48] = (ForInStatement)0x1;
        FVar1 = param_1[0x1c];
      }
      else {
        VisitNoStackOverflowCheck((CallPrinter *)param_1,pAVar3);
        FVar1 = param_1[0x1c];
      }
    }
    else {
      FVar1 = param_1[0x1c];
    }
  }
  else {
    Print((CallPrinter *)param_1,"(intermediate value)");
    FVar1 = param_1[0x1c];
  }
  if (FVar1 == (ForInStatement)0x0) {
    if (param_1[0x48] == (ForInStatement)0x0) {
      pAVar3 = *(AstNode **)(in_x1 + 0x28);
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(param_1 + 0x40)) {
        param_1[0x48] = (ForInStatement)0x1;
        FVar1 = param_1[0x1c];
      }
      else {
        VisitNoStackOverflowCheck((CallPrinter *)param_1,pAVar3);
        FVar1 = param_1[0x1c];
      }
    }
    else {
      FVar1 = param_1[0x1c];
    }
  }
  else {
    Print((CallPrinter *)param_1,"(intermediate value)");
    FVar1 = param_1[0x1c];
  }
  if (FVar1 != (ForInStatement)0x0) {
    Print((CallPrinter *)param_1,"(intermediate value)");
    return;
  }
  if (param_1[0x48] == (ForInStatement)0x0) {
    pAVar3 = *(AstNode **)(in_x1 + 0x18);
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(param_1 + 0x40) <= uVar2) {
      VisitNoStackOverflowCheck((CallPrinter *)param_1,pAVar3);
      return;
    }
    param_1[0x48] = (ForInStatement)0x1;
  }
  return;
}

