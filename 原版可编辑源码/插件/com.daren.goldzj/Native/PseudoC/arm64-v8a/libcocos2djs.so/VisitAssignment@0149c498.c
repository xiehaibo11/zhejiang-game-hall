
/* v8::internal::CallPrinter::VisitAssignment(v8::internal::Assignment*) */

void __thiscall v8::internal::CallPrinter::VisitAssignment(CallPrinter *this,Assignment *param_1)

{
  int iVar1;
  CallPrinter CVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  AstNode *pAVar7;
  
  pAVar7 = *(AstNode **)(param_1 + 8);
  if ((*(uint *)(pAVar7 + 4) & 0x3f) == 0x16) {
    if (*(int *)pAVar7 != *(int *)(this + 0x18)) {
      if (*(int *)(pAVar7 + 0x24) != 0) {
        lVar5 = (long)*(int *)(pAVar7 + 0x24) << 3;
        plVar4 = *(long **)(pAVar7 + 0x18);
        do {
          lVar6 = *plVar4;
          if (**(int **)(lVar6 + 8) == *(int *)(this + 0x18)) {
            CVar2 = this[0x1c];
            this[0x1c] = (CallPrinter)0x1;
            *(long *)(this + 0x28) = lVar6;
            goto LAB_0149c524;
          }
          lVar5 = lVar5 + -8;
          plVar4 = plVar4 + 1;
        } while (lVar5 != 0);
      }
LAB_0149c530:
      pAVar7 = *(AstNode **)(param_1 + 8);
      goto LAB_0149c534;
    }
    CVar2 = this[0x1c];
    this[0x1c] = (CallPrinter)0x1;
LAB_0149c524:
    *(Assignment **)(this + 0x30) = param_1;
    if (CVar2 == (CallPrinter)0x1) goto LAB_0149c530;
    pAVar7 = *(AstNode **)(param_1 + 0x10);
    if (this[0x1c] == (CallPrinter)0x0) {
      if (this[0x48] == (CallPrinter)0x0) {
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar7);
        }
      }
    }
    else {
      iVar1 = *(int *)(this + 8);
      if (this[0x48] == (CallPrinter)0x0) {
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar7);
        }
      }
      if (iVar1 == *(int *)(this + 8)) {
        Print(this,"(intermediate value)");
      }
    }
LAB_0149c73c:
    *(undefined2 *)(this + 0x1c) = 0x100;
  }
  else {
LAB_0149c534:
    if (this[0x1c] == (CallPrinter)0x0) {
      if (this[0x48] == (CallPrinter)0x0) {
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar7);
        }
      }
    }
    else {
      Print(this,"(intermediate value)");
    }
    pAVar7 = *(AstNode **)(param_1 + 0x10);
    if ((*(uint *)(*(long *)(param_1 + 8) + 4) & 0x3f) == 0x17) {
      if (*(int *)pAVar7 == *(int *)(this + 0x18)) {
        CVar2 = this[0x1c];
        iVar1 = *(int *)(this + 8);
        this[0x1f] = (CallPrinter)0x1;
        this[0x1c] = (CallPrinter)0x1;
        if (this[0x48] == (CallPrinter)0x0) {
          pAVar7 = *(AstNode **)(param_1 + 0x10);
          uVar3 = GetCurrentStackPosition();
          if (uVar3 < *(ulong *)(this + 0x40)) {
            this[0x48] = (CallPrinter)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar7);
          }
        }
        if (iVar1 == *(int *)(this + 8)) {
          Print(this,"(intermediate value)");
        }
        if (CVar2 != (CallPrinter)0x0) {
          return;
        }
        goto LAB_0149c73c;
      }
      if (this[0x1c] != (CallPrinter)0x0) {
        iVar1 = *(int *)(this + 8);
        if (this[0x48] == (CallPrinter)0x0) {
          uVar3 = GetCurrentStackPosition();
          if (uVar3 < *(ulong *)(this + 0x40)) {
            this[0x48] = (CallPrinter)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar7);
          }
        }
        if (iVar1 != *(int *)(this + 8)) {
          return;
        }
        goto LAB_0149c640;
      }
    }
    else if (this[0x1c] != (CallPrinter)0x0) {
LAB_0149c640:
      Print(this,"(intermediate value)");
      return;
    }
    if (this[0x48] == (CallPrinter)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x40) <= uVar3) {
        VisitNoStackOverflowCheck(this,pAVar7);
        return;
      }
      this[0x48] = (CallPrinter)0x1;
    }
  }
  return;
}

