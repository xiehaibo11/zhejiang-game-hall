
/* v8::internal::CallPrinter::VisitBlock(v8::internal::Block*) */

void __thiscall v8::internal::CallPrinter::VisitBlock(CallPrinter *this,Block *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    return;
  }
  lVar3 = 0;
  if (this[0x1c] == (CallPrinter)0x0) goto LAB_0149aa34;
  do {
    Print(this,"(intermediate value)");
    while( true ) {
      lVar3 = lVar3 + 1;
      if (*(int *)(param_1 + 0x14) <= lVar3) {
        return;
      }
      if (this[0x1c] != (CallPrinter)0x0) break;
LAB_0149aa34:
      if (this[0x48] == (CallPrinter)0x0) {
        pAVar2 = *(AstNode **)(*(long *)(param_1 + 8) + lVar3 * 8);
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

