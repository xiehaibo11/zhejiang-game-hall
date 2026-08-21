
/* v8::internal::CallPrinter::VisitCall(v8::internal::Call*) */

void __thiscall v8::internal::CallPrinter::VisitCall(CallPrinter *this,Call *param_1)

{
  int iVar1;
  CallPrinter CVar2;
  ulong uVar3;
  AstNode *pAVar4;
  long lVar5;
  
  if (*(int *)param_1 == *(int *)(this + 0x18)) {
    this[0x21] = (CallPrinter)0x1;
    if (this[0x1c] == (CallPrinter)0x0) {
      if ((this[0x1e] == (CallPrinter)0x0) &&
         ((*(uint *)(*(long *)(param_1 + 8) + 4) & 0x3f) == 0x35)) {
        this[0x1d] = (CallPrinter)0x1;
        return;
      }
      iVar1 = *(int *)(this + 8);
      this[0x1c] = (CallPrinter)0x1;
      if (this[0x48] == (CallPrinter)0x0) {
        pAVar4 = *(AstNode **)(param_1 + 8);
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar4);
        }
      }
      if (iVar1 == *(int *)(this + 8)) {
        Print(this,"(intermediate value)");
      }
      if ((this[0x1c] == (CallPrinter)0x0) && (0 < *(int *)(param_1 + 0x1c))) {
        lVar5 = 0;
        do {
          if (this[0x48] == (CallPrinter)0x0) {
            pAVar4 = *(AstNode **)(*(long *)(param_1 + 0x10) + lVar5 * 8);
            uVar3 = GetCurrentStackPosition();
            if (uVar3 < *(ulong *)(this + 0x40)) {
              this[0x48] = (CallPrinter)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar4);
            }
          }
          while( true ) {
            lVar5 = lVar5 + 1;
            if (*(int *)(param_1 + 0x1c) <= lVar5) goto LAB_0149cf04;
            if (this[0x1c] == (CallPrinter)0x0) break;
            Print(this,"(intermediate value)");
          }
        } while( true );
      }
LAB_0149cf04:
      *(undefined2 *)(this + 0x1c) = 0x100;
      return;
    }
    pAVar4 = *(AstNode **)(param_1 + 8);
LAB_0149cca4:
    iVar1 = *(int *)(this + 8);
    if (this[0x48] == (CallPrinter)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar4);
      }
    }
    if (iVar1 == *(int *)(this + 8)) {
      Print(this,"(intermediate value)");
    }
  }
  else {
    pAVar4 = *(AstNode **)(param_1 + 8);
    if (this[0x1c] != (CallPrinter)0x0) goto LAB_0149cca4;
    if (this[0x48] == (CallPrinter)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
        CVar2 = this[0x1f];
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar4);
        CVar2 = this[0x1f];
      }
      goto joined_r0x0149cd18;
    }
  }
  CVar2 = this[0x1f];
joined_r0x0149cd18:
  if (CVar2 == (CallPrinter)0x0) {
    Print(this,"(...)");
    CVar2 = this[0x1c];
  }
  else {
    CVar2 = this[0x1c];
  }
  if ((CVar2 == (CallPrinter)0x0) && (0 < *(int *)(param_1 + 0x1c))) {
    lVar5 = 0;
    do {
      if (this[0x48] == (CallPrinter)0x0) {
        pAVar4 = *(AstNode **)(*(long *)(param_1 + 0x10) + lVar5 * 8);
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar4);
        }
      }
      while( true ) {
        lVar5 = lVar5 + 1;
        if (*(int *)(param_1 + 0x1c) <= lVar5) {
          return;
        }
        if (this[0x1c] == (CallPrinter)0x0) break;
        Print(this,"(intermediate value)");
      }
    } while( true );
  }
  return;
}

