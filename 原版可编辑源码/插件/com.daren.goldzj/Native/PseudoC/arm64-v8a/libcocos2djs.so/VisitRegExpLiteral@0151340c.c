
/* v8::internal::interpreter::BytecodeGenerator::VisitRegExpLiteral(v8::internal::RegExpLiteral*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitRegExpLiteral
          (BytecodeGenerator *this,RegExpLiteral *param_1)

{
  int iVar1;
  AstRawString *pAVar2;
  
  pAVar2 = *(AstRawString **)(param_1 + 0x10);
  iVar1 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0x13);
  BytecodeArrayBuilder::CreateRegExpLiteral
            ((BytecodeArrayBuilder *)(this + 0x18),pAVar2,iVar1,*(int *)(param_1 + 8));
  return;
}

