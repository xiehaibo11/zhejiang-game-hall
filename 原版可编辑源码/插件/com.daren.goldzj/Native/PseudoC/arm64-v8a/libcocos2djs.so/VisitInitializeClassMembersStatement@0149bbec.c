
/* v8::internal::CallPrinter::VisitInitializeClassMembersStatement(v8::internal::InitializeClassMembersStatement*)
    */

void __thiscall
v8::internal::CallPrinter::VisitInitializeClassMembersStatement
          (CallPrinter *this,InitializeClassMembersStatement *param_1)

{
  ulong uVar1;
  long *plVar2;
  AstNode *pAVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  if (*(int *)((long)plVar2 + 0xc) < 1) {
    return;
  }
  lVar4 = 0;
  if (this[0x1c] == (CallPrinter)0x0) goto LAB_0149bc58;
  do {
    Print(this,"(intermediate value)");
    while( true ) {
      plVar2 = *(long **)(param_1 + 8);
      lVar4 = lVar4 + 1;
      if (*(int *)((long)plVar2 + 0xc) <= lVar4) {
        return;
      }
      if (this[0x1c] != (CallPrinter)0x0) break;
LAB_0149bc58:
      if (this[0x48] == (CallPrinter)0x0) {
        pAVar3 = *(AstNode **)(*(long *)(*plVar2 + lVar4 * 8) + 8);
        uVar1 = GetCurrentStackPosition();
        if (uVar1 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar3);
        }
      }
    }
  } while( true );
}

