
/* v8::internal::CallPrinter::VisitClassLiteral(v8::internal::ClassLiteral*) */

void __thiscall
v8::internal::CallPrinter::VisitClassLiteral(CallPrinter *this,ClassLiteral *param_1)

{
  ulong uVar1;
  long *plVar2;
  AstNode *pAVar3;
  long lVar4;
  
  pAVar3 = *(AstNode **)(param_1 + 0x18);
  if (pAVar3 != (AstNode *)0x0) {
    if (this[0x1c] == (CallPrinter)0x0) {
      if (this[0x48] == (CallPrinter)0x0) {
        uVar1 = GetCurrentStackPosition();
        if (uVar1 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar3);
        }
      }
    }
    else {
      Print(this,"(intermediate value)");
    }
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (*(int *)((long)plVar2 + 0xc) < 1) {
LAB_0149bb4c:
    plVar2 = *(long **)(param_1 + 0x30);
    if (*(int *)((long)plVar2 + 0xc) < 1) {
      return;
    }
    lVar4 = 0;
    if (this[0x1c] == (CallPrinter)0x0) goto LAB_0149bb9c;
    do {
      Print(this,"(intermediate value)");
      while( true ) {
        plVar2 = *(long **)(param_1 + 0x30);
        lVar4 = lVar4 + 1;
        if (*(int *)((long)plVar2 + 0xc) <= lVar4) {
          return;
        }
        if (this[0x1c] != (CallPrinter)0x0) break;
LAB_0149bb9c:
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
  lVar4 = 0;
  if (this[0x1c] == (CallPrinter)0x0) goto LAB_0149bb10;
  do {
    Print(this,"(intermediate value)");
    while( true ) {
      plVar2 = *(long **)(param_1 + 0x28);
      lVar4 = lVar4 + 1;
      if (*(int *)((long)plVar2 + 0xc) <= lVar4) goto LAB_0149bb4c;
      if (this[0x1c] != (CallPrinter)0x0) break;
LAB_0149bb10:
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

