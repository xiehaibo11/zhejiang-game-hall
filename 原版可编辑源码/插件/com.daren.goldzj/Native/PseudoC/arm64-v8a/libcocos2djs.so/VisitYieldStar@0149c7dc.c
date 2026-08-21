
/* v8::internal::CallPrinter::VisitYieldStar(v8::internal::YieldStar*) */

void __thiscall v8::internal::CallPrinter::VisitYieldStar(CallPrinter *this,YieldStar *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  
  if (this[0x1c] != (CallPrinter)0x0) {
LAB_0149c7f8:
    Print(this,"(intermediate value)");
    return;
  }
  pAVar2 = *(AstNode **)(param_1 + 8);
  if (*(int *)(this + 0x18) == *(int *)pAVar2) {
    this[0x1c] = (CallPrinter)0x1;
    if ((byte)this[0x38] - 10 < 5) {
      this[0x20] = (CallPrinter)0x1;
    }
    else {
      this[0x1f] = (CallPrinter)0x1;
    }
    Print(this,"yield* ");
    if (this[0x1c] != (CallPrinter)0x0) goto LAB_0149c7f8;
    pAVar2 = *(AstNode **)(param_1 + 8);
  }
  if (this[0x48] == (CallPrinter)0x0) {
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x40) <= uVar1) {
      VisitNoStackOverflowCheck(this,pAVar2);
      return;
    }
    this[0x48] = (CallPrinter)0x1;
  }
  return;
}

