
/* v8::internal::CallPrinter::VisitObjectLiteral(v8::internal::ObjectLiteral*) */

void __thiscall
v8::internal::CallPrinter::VisitObjectLiteral(CallPrinter *this,ObjectLiteral *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  long lVar3;
  
  Print(this,"{");
  if (0 < *(int *)(param_1 + 0x24)) {
    lVar3 = 0;
    if (this[0x1c] == (CallPrinter)0x0) goto LAB_0149c22c;
    do {
      Print(this,"(intermediate value)");
      while( true ) {
        lVar3 = lVar3 + 1;
        if (*(int *)(param_1 + 0x24) <= lVar3) goto LAB_0149c268;
        if (this[0x1c] != (CallPrinter)0x0) break;
LAB_0149c22c:
        if (this[0x48] == (CallPrinter)0x0) {
          pAVar2 = *(AstNode **)(*(long *)(*(long *)(param_1 + 0x18) + lVar3 * 8) + 8);
          uVar1 = GetCurrentStackPosition();
          if (uVar1 < *(ulong *)(this + 0x40)) {
            this[0x48] = (CallPrinter)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar2);
          }
        }
      }
    } while( true );
  }
LAB_0149c268:
  Print(this,"}");
  return;
}

