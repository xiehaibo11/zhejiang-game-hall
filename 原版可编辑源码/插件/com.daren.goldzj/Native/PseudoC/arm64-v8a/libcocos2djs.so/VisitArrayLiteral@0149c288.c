
/* v8::internal::CallPrinter::VisitArrayLiteral(v8::internal::ArrayLiteral*) */

void __thiscall
v8::internal::CallPrinter::VisitArrayLiteral(CallPrinter *this,ArrayLiteral *param_1)

{
  int iVar1;
  ulong uVar2;
  AstNode *pAVar3;
  long lVar4;
  
  Print(this,"[");
  if (0 < *(int *)(param_1 + 0x24)) {
    lVar4 = 0;
LAB_0149c31c:
    pAVar3 = *(AstNode **)(*(long *)(param_1 + 0x18) + lVar4 * 8);
    if ((pAVar3 == (AstNode *)0x0) || ((*(uint *)(pAVar3 + 4) & 0x3f) != 0x2d)) {
      if (this[0x1c] == (CallPrinter)0x0) goto LAB_0149c2f4;
LAB_0149c348:
      iVar1 = *(int *)(this + 8);
      if (this[0x48] == (CallPrinter)0x0) {
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar3);
        }
      }
      if (iVar1 == *(int *)(this + 8)) {
        Print(this,"(intermediate value)");
      }
    }
    else {
      if (this[0x1c] != (CallPrinter)0x0) goto LAB_0149c348;
      if (*(int *)(this + 0x18) == **(int **)(pAVar3 + 0x10)) {
        iVar1 = *(int *)(this + 8);
        this[0x1c] = (CallPrinter)0x1;
        this[0x1f] = (CallPrinter)0x1;
        if (this[0x48] == (CallPrinter)0x0) {
          pAVar3 = *(AstNode **)(pAVar3 + 0x10);
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)(this + 0x40)) {
            this[0x48] = (CallPrinter)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar3);
          }
        }
        if (iVar1 == *(int *)(this + 8)) {
          Print(this,"(intermediate value)");
        }
        this[0x1d] = (CallPrinter)0x1;
        return;
      }
LAB_0149c2f4:
      if (this[0x48] == (CallPrinter)0x0) {
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar3);
        }
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 < *(int *)(param_1 + 0x24)) {
      if (lVar4 != 0) {
        Print(this,",");
      }
      goto LAB_0149c31c;
    }
  }
  Print(this,"]");
  return;
}

