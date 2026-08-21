
/* v8::internal::compiler::JSCallReducer::ReduceNumberConstructor(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceNumberConstructor(JSCallReducer *this,Node *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  Operator *pOVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  puVar1 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar2 = NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  if ((*puVar1 & 0x7ffffff) < 3) {
    pNVar4 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  uVar5 = NodeProperties::GetContextInput(param_1);
  uVar6 = NodeProperties::GetFrameStateInput(param_1);
  lVar9 = *(long *)(this + 0x18);
  if (*(char *)(lVar9 + 0x18) == '\x01') {
    uStack_78 = *(undefined8 *)(lVar9 + 0x28);
    local_80 = *(undefined8 *)(lVar9 + 0x20);
    local_70 = NativeContextRef::number_function((NativeContextRef *)&local_80);
    local_60 = JSFunctionRef::shared((JSFunctionRef *)local_70);
    local_70._0_8_ = uVar3;
    pNVar7 = (Node *)CreateJavaScriptBuiltinContinuationFrameState
                               (*(undefined8 *)(this + 0x10),local_60,0x22b,uVar2,uVar5,local_70,1,
                                uVar6,1);
    NodeProperties::ReplaceValueInputs(param_1,pNVar4);
    pOVar8 = (Operator *)
             JSOperatorBuilder::ToNumberConvertBigInt
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    NodeProperties::ChangeOp(param_1,pOVar8);
    NodeProperties::ReplaceFrameStateInput(param_1,pNVar7);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","storage_.is_populated_");
}

