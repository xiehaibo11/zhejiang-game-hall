
/* v8::internal::compiler::BytecodeGraphBuilder::VisitTestInstanceOf() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitTestInstanceOf(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  Operator *pOVar2;
  JSOperatorBuilder *this_00;
  FeedbackSource local_30 [16];
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  this_00 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  FeedbackSource::FeedbackSource
            (local_30,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),uVar1);
  pOVar2 = (Operator *)JSOperatorBuilder::InstanceOf(this_00,local_30);
  BuildCompareOp(this,pOVar2);
  return;
}

