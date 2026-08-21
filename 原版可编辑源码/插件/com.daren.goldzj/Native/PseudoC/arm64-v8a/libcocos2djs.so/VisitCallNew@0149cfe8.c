
/* v8::internal::CallPrinter::VisitCallNew(v8::internal::CallNew*) */

void __thiscall v8::internal::CallPrinter::VisitCallNew(CallPrinter *this,CallNew *param_1)

{
  int iVar1;
  CallPrinter CVar2;
  ulong uVar3;
  AstNode *pAVar4;
  CallPrinter *pCVar5;
  long lVar6;
  
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
        lVar6 = 0;
        do {
          if (this[0x48] == (CallPrinter)0x0) {
            pAVar4 = *(AstNode **)(*(long *)(param_1 + 0x10) + lVar6 * 8);
            uVar3 = GetCurrentStackPosition();
            if (uVar3 < *(ulong *)(this + 0x40)) {
              this[0x48] = (CallPrinter)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar4);
            }
          }
          while( true ) {
            lVar6 = lVar6 + 1;
            if (*(int *)(param_1 + 0x1c) <= lVar6) goto LAB_0149d294;
            if (this[0x1c] == (CallPrinter)0x0) break;
            Print(this,"(intermediate value)");
          }
        } while( true );
      }
LAB_0149d294:
      *(undefined2 *)(this + 0x1c) = 0x100;
      return;
    }
    pAVar4 = *(AstNode **)(param_1 + 8);
    CVar2 = this[0x1f];
joined_r0x0149d050:
    if (CVar2 != (CallPrinter)0x0) {
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
      if (iVar1 != *(int *)(this + 8)) goto LAB_0149d12c;
    }
    Print(this,"(intermediate value)");
  }
  else {
    pCVar5 = this + 0x1c;
    pAVar4 = *(AstNode **)(param_1 + 8);
    if (*pCVar5 != (CallPrinter)0x0) {
      CVar2 = this[0x1f];
      goto joined_r0x0149d050;
    }
    if (this[0x48] == (CallPrinter)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
        CVar2 = *pCVar5;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar4);
        CVar2 = *pCVar5;
      }
      goto joined_r0x0149d0c8;
    }
  }
LAB_0149d12c:
  CVar2 = this[0x1c];
joined_r0x0149d0c8:
  if ((CVar2 == (CallPrinter)0x0) && (0 < *(int *)(param_1 + 0x1c))) {
    lVar6 = 0;
    do {
      if (this[0x48] == (CallPrinter)0x0) {
        pAVar4 = *(AstNode **)(*(long *)(param_1 + 0x10) + lVar6 * 8);
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)(this + 0x40)) {
          this[0x48] = (CallPrinter)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar4);
        }
      }
      while( true ) {
        lVar6 = lVar6 + 1;
        if (*(int *)(param_1 + 0x1c) <= lVar6) {
          return;
        }
        if (this[0x1c] == (CallPrinter)0x0) break;
        Print(this,"(intermediate value)");
      }
    } while( true );
  }
  return;
}

