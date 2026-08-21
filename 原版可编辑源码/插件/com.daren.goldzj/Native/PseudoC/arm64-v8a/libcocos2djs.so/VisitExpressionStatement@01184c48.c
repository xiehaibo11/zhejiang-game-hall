
/* v8::internal::Processor::VisitExpressionStatement(v8::internal::ExpressionStatement*) */

void __thiscall
v8::internal::Processor::VisitExpressionStatement(Processor *this,ExpressionStatement *param_1)

{
  undefined8 uVar1;
  
  if (this[0x52] == (Processor)0x0) {
    uVar1 = SetResult(this,*(Expression **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = uVar1;
    this[0x52] = (Processor)0x1;
  }
  *(ExpressionStatement **)(this + 8) = param_1;
  return;
}

