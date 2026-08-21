
/* v8::internal::compiler::JSCallReducer::ReduceTypedArrayConstructor(v8::internal::compiler::Node*,
   v8::internal::compiler::SharedFunctionInfoRef const&) */

void __thiscall
v8::internal::compiler::JSCallReducer::ReduceTypedArrayConstructor
          (JSCallReducer *this,Node *param_1,SharedFunctionInfoRef *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  Node *pNVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Operator *pOVar11;
  Graph *this_00;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  Node *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  piVar3 = (int *)ConstructParametersOf(*(Operator **)param_1);
  iVar1 = *piVar3;
  iVar2 = iVar1 + -2;
  pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,0);
  if (iVar2 < 1) {
    local_c0 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
LAB_016f4468:
    local_c8 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    local_c0 = NodeProperties::GetValueInput(param_1,1);
    if (iVar2 == 1) goto LAB_016f4468;
    local_c8 = NodeProperties::GetValueInput(param_1,2);
    if (2 < iVar2) {
      uVar5 = NodeProperties::GetValueInput(param_1,3);
      goto LAB_016f447c;
    }
  }
  uVar5 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
LAB_016f447c:
  uVar6 = NodeProperties::GetValueInput(param_1,iVar1 + -1);
  uVar7 = NodeProperties::GetContextInput(param_1);
  uVar8 = NodeProperties::GetFrameStateInput(param_1);
  uVar9 = NodeProperties::GetEffectInput(param_1,0);
  uVar10 = NodeProperties::GetControlInput(param_1,0);
  uVar8 = CreateArtificialFrameState(this,param_1,uVar8,iVar2,2,2,param_2,uVar7);
  local_b0 = JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x10));
  uVar8 = CreateJavaScriptBuiltinContinuationFrameState
                    (*(undefined8 *)(this + 0x10),param_2,0x22b,pNVar4,uVar7,&local_b0,1,uVar8,1);
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar11 = (Operator *)
            JSOperatorBuilder::CreateTypedArray
                      ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e]);
  local_98 = local_c0;
  local_90 = local_c8;
  local_a8 = pNVar4;
  uStack_a0 = uVar6;
  uStack_88 = uVar5;
  local_80 = uVar7;
  uStack_78 = uVar8;
  local_70 = uVar9;
  uStack_68 = uVar10;
  Graph::NewNode(this_00,pOVar11,9,&local_a8,false);
  return;
}

