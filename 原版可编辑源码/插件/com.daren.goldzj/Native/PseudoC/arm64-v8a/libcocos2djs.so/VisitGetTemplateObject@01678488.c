
/* v8::internal::compiler::BytecodeGraphBuilder::VisitGetTemplateObject() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitGetTemplateObject(BytecodeGraphBuilder *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  Operator *pOVar4;
  long lVar5;
  JSOperatorBuilder *pJVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  ObjectRef aOStack_50 [16];
  FeedbackSource local_40 [16];
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),1);
  FeedbackSource::FeedbackSource
            (local_40,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),uVar1);
  uVar7 = *(undefined8 *)this;
  uVar2 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0,
                     *(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef(aOStack_50,uVar7,uVar2,0);
  uVar3 = ObjectRef::IsTemplateObjectDescription(aOStack_50);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsTemplateObjectDescription()");
  }
  pJVar6 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
  uVar2 = TemplateObjectDescriptionRef::object((TemplateObjectDescriptionRef *)aOStack_50);
  uStack_58 = *(undefined8 *)(this + 0x30);
  local_60 = *(undefined8 *)(this + 0x28);
  uVar7 = SharedFunctionInfoRef::object((SharedFunctionInfoRef *)&local_60);
  pOVar4 = (Operator *)JSOperatorBuilder::GetTemplateObject(pJVar6,uVar2,uVar7,local_40);
  uVar2 = MakeNode(this,pOVar4,0,(Node **)0x0,false);
  lVar5 = *(long *)(this + 0xa8);
  if ((ulong)(long)*(int *)(lVar5 + 0x5c) <
      (ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x5c) * 8) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

