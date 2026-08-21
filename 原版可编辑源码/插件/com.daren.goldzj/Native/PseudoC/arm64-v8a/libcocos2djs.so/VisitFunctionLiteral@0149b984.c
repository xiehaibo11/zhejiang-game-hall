
/* v8::internal::CallPrinter::VisitFunctionLiteral(v8::internal::FunctionLiteral*) */

void __thiscall
v8::internal::CallPrinter::VisitFunctionLiteral(CallPrinter *this,FunctionLiteral *param_1)

{
  CallPrinter CVar1;
  CallPrinter CVar2;
  ulong uVar3;
  AstNode *pAVar4;
  long lVar5;
  
  CVar1 = this[0x38];
  CVar2 = (CallPrinter)FunctionLiteral::kind(param_1);
  this[0x38] = CVar2;
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar5 = 0;
    if (this[0x1c] == (CallPrinter)0x0) goto LAB_0149b9fc;
    do {
      Print(this,"(intermediate value)");
      while( true ) {
        lVar5 = lVar5 + 1;
        if (*(int *)(param_1 + 0x3c) <= lVar5) goto LAB_0149ba34;
        if (this[0x1c] != (CallPrinter)0x0) break;
LAB_0149b9fc:
        if (this[0x48] == (CallPrinter)0x0) {
          pAVar4 = *(AstNode **)(*(long *)(param_1 + 0x30) + lVar5 * 8);
          uVar3 = GetCurrentStackPosition();
          if (uVar3 < *(ulong *)(this + 0x40)) {
            this[0x48] = (CallPrinter)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar4);
          }
        }
      }
    } while( true );
  }
LAB_0149ba34:
  this[0x38] = CVar1;
  return;
}

