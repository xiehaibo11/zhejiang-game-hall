
/* v8::internal::CallPrinter::VisitCountOperation(v8::internal::CountOperation*) */

void __thiscall
v8::internal::CallPrinter::VisitCountOperation(CallPrinter *this,CountOperation *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  AstNode *pAVar4;
  
  Print(this,"(");
  if ((*(uint *)(param_1 + 4) >> 7 & 1) != 0) {
    Print(this,*(char **)(Token::string_ + ((ulong)(*(uint *)(param_1 + 4) >> 8) & 0x7f) * 8));
  }
  pAVar4 = *(AstNode **)(param_1 + 8);
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
        uVar2 = *(uint *)(param_1 + 4);
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar4);
        uVar2 = *(uint *)(param_1 + 4);
      }
      goto joined_r0x0149d524;
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
        VisitNoStackOverflowCheck(this,pAVar4);
      }
    }
    if (iVar1 == *(int *)(this + 8)) {
      Print(this,"(intermediate value)");
    }
  }
  uVar2 = *(uint *)(param_1 + 4);
joined_r0x0149d524:
  if ((uVar2 >> 7 & 1) == 0) {
    Print(this,*(char **)(Token::string_ + ((ulong)(uVar2 >> 8) & 0x7f) * 8));
  }
  Print(this,")");
  return;
}

