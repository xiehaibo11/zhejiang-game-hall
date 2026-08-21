
/* v8::internal::CallPrinter::VisitOptionalChain(v8::internal::OptionalChain*) */

void __thiscall
v8::internal::CallPrinter::VisitOptionalChain(CallPrinter *this,OptionalChain *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  
  if (this[0x1c] != (CallPrinter)0x0) {
    Print(this,"(intermediate value)");
    return;
  }
  if (this[0x48] == (CallPrinter)0x0) {
    pAVar2 = *(AstNode **)(param_1 + 8);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x40) <= uVar1) {
      VisitNoStackOverflowCheck(this,pAVar2);
      return;
    }
    this[0x48] = (CallPrinter)0x1;
  }
  return;
}

