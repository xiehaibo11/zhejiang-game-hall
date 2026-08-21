
/* v8::internal::Processor::VisitSloppyBlockFunctionStatement(v8::internal::SloppyBlockFunctionStatement*)
    */

void __thiscall
v8::internal::Processor::VisitSloppyBlockFunctionStatement
          (Processor *this,SloppyBlockFunctionStatement *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  
  if (this[0x50] == (Processor)0x0) {
    pAVar2 = *(AstNode **)(param_1 + 0x10);
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)(this + 0x48)) {
      this[0x50] = (Processor)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 8);
  *(SloppyBlockFunctionStatement **)(this + 8) = param_1;
  return;
}

