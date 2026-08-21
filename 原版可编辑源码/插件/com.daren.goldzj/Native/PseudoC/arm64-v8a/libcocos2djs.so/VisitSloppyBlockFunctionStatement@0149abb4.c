
/* v8::internal::CallPrinter::VisitSloppyBlockFunctionStatement(v8::internal::SloppyBlockFunctionStatement*)
    */

void __thiscall
v8::internal::CallPrinter::VisitSloppyBlockFunctionStatement
          (CallPrinter *this,SloppyBlockFunctionStatement *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  
  if (this[0x1c] != (CallPrinter)0x0) {
    Print(this,"(intermediate value)");
    return;
  }
  if (this[0x48] == (CallPrinter)0x0) {
    pAVar2 = *(AstNode **)(param_1 + 0x10);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x40) <= uVar1) {
      VisitNoStackOverflowCheck(this,pAVar2);
      return;
    }
    this[0x48] = (CallPrinter)0x1;
  }
  return;
}

