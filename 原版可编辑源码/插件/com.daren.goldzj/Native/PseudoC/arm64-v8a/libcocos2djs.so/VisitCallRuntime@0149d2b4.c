
/* v8::internal::CallPrinter::VisitCallRuntime(v8::internal::CallRuntime*) */

void __thiscall v8::internal::CallPrinter::VisitCallRuntime(CallPrinter *this,CallRuntime *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  long lVar3;
  
  if ((this[0x1c] == (CallPrinter)0x0) && (0 < *(int *)(param_1 + 0x24))) {
    lVar3 = 0;
    do {
      if (this[0x48] == (CallPrinter)0x0) {
        pAVar2 = *(AstNode **)(*(long *)(param_1 + 0x18) + lVar3 * 8);
        uVar1 = GetCurrentStackPosition();
        if (uVar1 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar2);
        }
      }
      while( true ) {
        lVar3 = lVar3 + 1;
        if (*(int *)(param_1 + 0x24) <= lVar3) {
          return;
        }
        if (this[0x1c] == (CallPrinter)0x0) break;
        Print(this,"(intermediate value)");
      }
    } while( true );
  }
  return;
}

