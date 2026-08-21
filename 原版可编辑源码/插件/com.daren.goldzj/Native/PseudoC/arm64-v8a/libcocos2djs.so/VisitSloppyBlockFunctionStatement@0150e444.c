
/* v8::internal::interpreter::BytecodeGenerator::VisitSloppyBlockFunctionStatement(v8::internal::SloppyBlockFunctionStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitSloppyBlockFunctionStatement
          (BytecodeGenerator *this,SloppyBlockFunctionStatement *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  
  if (this[8] == (BytecodeGenerator)0x0) {
    pAVar2 = *(AstNode **)(param_1 + 0x10);
    uVar1 = GetCurrentStackPosition();
    if (*(ulong *)this <= uVar1) {
      VisitNoStackOverflowCheck(this,pAVar2);
      return;
    }
    this[8] = (BytecodeGenerator)0x1;
  }
  return;
}

