
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateLiteralRegExp(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateLiteralRegExp
          (JSCreateLowering *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ProcessedFeedback *this_00;
  
  lVar1 = CreateLiteralParametersOf(*(Operator **)param_1);
  uVar2 = NodeProperties::GetEffectInput(param_1,0);
  uVar3 = NodeProperties::GetControlInput(param_1,0);
  this_00 = (ProcessedFeedback *)
            JSHeapBroker::GetFeedbackForRegExpLiteral
                      (*(JSHeapBroker **)(this + 0x20),(FeedbackSource *)(lVar1 + 8));
  if (*(int *)this_00 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = ProcessedFeedback::AsRegExpLiteral(this_00);
    uVar2 = AllocateLiteralRegExp
                      (this,uVar2,uVar3,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar2,uVar2,uVar3);
  }
  return uVar2;
}

