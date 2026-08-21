
/* v8::internal::CallPrinter::VisitSwitchStatement(v8::internal::SwitchStatement*) */

void __thiscall
v8::internal::CallPrinter::VisitSwitchStatement(CallPrinter *this,SwitchStatement *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  AstNode *pAVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      pAVar4 = *(AstNode **)(param_1 + 0x10);
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
        iVar2 = *(int *)(param_1 + 0x24);
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar4);
        iVar2 = *(int *)(param_1 + 0x24);
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x24);
    }
  }
  else {
    Print(this,"(intermediate value)");
    iVar2 = *(int *)(param_1 + 0x24);
  }
  if (iVar2 != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    puVar1 = puVar5 + iVar2;
    do {
      puVar6 = (undefined8 *)*puVar5;
      pAVar4 = (AstNode *)*puVar6;
      if (pAVar4 != (AstNode *)0x0) {
        if (this[0x1c] == (CallPrinter)0x0) {
          if (this[0x48] == (CallPrinter)0x0) {
            uVar3 = GetCurrentStackPosition();
            if (uVar3 < *(ulong *)(this + 0x40)) {
              this[0x48] = (CallPrinter)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar4);
            }
          }
        }
        else {
          Print(this,"(intermediate value)");
        }
      }
      if (0 < *(int *)((long)puVar6 + 0x14)) {
        lVar7 = 0;
        if (this[0x1c] == (CallPrinter)0x0) goto LAB_0149afec;
        do {
          Print(this,"(intermediate value)");
          while( true ) {
            lVar7 = lVar7 + 1;
            if (*(int *)((long)puVar6 + 0x14) <= lVar7) goto LAB_0149af54;
            if (this[0x1c] != (CallPrinter)0x0) break;
LAB_0149afec:
            if (this[0x48] == (CallPrinter)0x0) {
              pAVar4 = *(AstNode **)(puVar6[1] + lVar7 * 8);
              uVar3 = GetCurrentStackPosition();
              if (uVar3 < *(ulong *)(this + 0x40)) {
                this[0x48] = (CallPrinter)0x1;
              }
              else {
                VisitNoStackOverflowCheck(this,pAVar4);
              }
            }
          }
        } while( true );
      }
LAB_0149af54:
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  return;
}

