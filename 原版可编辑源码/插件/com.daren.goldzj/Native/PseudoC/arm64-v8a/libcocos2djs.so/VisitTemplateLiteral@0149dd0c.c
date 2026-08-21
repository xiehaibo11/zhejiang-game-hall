
/* v8::internal::CallPrinter::VisitTemplateLiteral(v8::internal::TemplateLiteral*) */

void __thiscall
v8::internal::CallPrinter::VisitTemplateLiteral(CallPrinter *this,TemplateLiteral *param_1)

{
  int iVar1;
  ulong uVar2;
  AstNode *pAVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar1 = *(int *)((long)*(undefined8 **)(param_1 + 0x10) + 0xc);
  if (iVar1 != 0) {
    puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
    lVar5 = (long)iVar1 << 3;
    do {
      pAVar3 = (AstNode *)*puVar4;
      if (this[0x1c] == (CallPrinter)0x0) {
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
      else {
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
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  return;
}

