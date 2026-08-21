
/* v8::internal::CallPrinter::VisitProperty(v8::internal::Property*) */

void __thiscall v8::internal::CallPrinter::VisitProperty(CallPrinter *this,Property *param_1)

{
  Literal *this_00;
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  AstNode *pAVar7;
  AstNode *pAVar8;
  
  pAVar7 = *(AstNode **)(param_1 + 0x10);
  this_00 = (Literal *)pAVar7;
  if ((*(uint *)(pAVar7 + 4) & 0x3f) != 0x29) {
    this_00 = (Literal *)0x0;
  }
  if (this_00 == (Literal *)0x0) {
LAB_0149ca5c:
    bVar3 = false;
  }
  else {
    puVar4 = (ulong *)Literal::BuildValue(this_00,*(Isolate **)this);
    uVar6 = *puVar4;
    if ((uVar6 & 1) == 0) goto LAB_0149ca5c;
    bVar3 = *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x20;
  }
  pAVar8 = *(AstNode **)(param_1 + 8);
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
        uVar2 = *(uint *)(param_1 + 4);
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar8);
        uVar2 = *(uint *)(param_1 + 4);
      }
      goto joined_r0x0149cad4;
    }
  }
  else {
    iVar1 = *(int *)(this + 8);
    if (this[0x48] == (CallPrinter)0x0) {
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar8);
      }
    }
    if (iVar1 == *(int *)(this + 8)) {
      Print(this,"(intermediate value)");
    }
  }
  uVar2 = *(uint *)(param_1 + 4);
joined_r0x0149cad4:
  if (!bVar3) {
    if ((uVar2 >> 7 & 1) != 0) {
      Print(this,"?.");
    }
    Print(this,"[");
    if (this[0x1c] == (CallPrinter)0x0) {
      if (this[0x48] == (CallPrinter)0x0) {
        uVar6 = GetCurrentStackPosition();
        if (uVar6 < *(ulong *)(this + 0x40)) {
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
        uVar6 = GetCurrentStackPosition();
        if (uVar6 < *(ulong *)(this + 0x40)) {
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
    Print(this,"]");
    return;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    Print(this,"?");
  }
  Print(this,".");
  uVar5 = Literal::BuildValue(this_00,*(Isolate **)this);
  PrintLiteral(this,uVar5,0);
  return;
}

