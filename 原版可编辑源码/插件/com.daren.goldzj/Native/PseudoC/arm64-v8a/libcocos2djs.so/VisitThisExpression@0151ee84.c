
/* v8::internal::interpreter::BytecodeGenerator::VisitThisExpression(v8::internal::ThisExpression*)
    */

void v8::internal::interpreter::BytecodeGenerator::VisitThisExpression(ThisExpression *param_1)

{
  long lVar1;
  
  lVar1 = Scope::GetReceiverScope(*(Scope **)(param_1 + 0x1e0));
  BuildVariableLoad((BytecodeGenerator *)param_1,*(undefined8 *)(lVar1 + 0xb0),
                    1 < *(byte *)(lVar1 + 0x85) - 5,1);
  return;
}

