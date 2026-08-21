
/* v8::internal::compiler::JSCallReducer::ReduceMathUnary(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceMathUnary
          (JSCallReducer *this,Node *param_1,Operator *param_2)

{
  long lVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Node *pNVar4;
  Operator *pOVar5;
  Graph *this_00;
  Zone *pZVar6;
  SimplifiedOperatorBuilder *pSVar7;
  undefined **local_c8 [3];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Node *local_90;
  byte local_88;
  Node *local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  Zone *pZStack_60;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar1 = CallParametersOf(*(Operator **)param_1);
  if ((*(byte *)(lVar1 + 3) >> 4 & 1) == 0) {
    if (*(int *)(*(long *)param_1 + 0x14) < 3) {
      uVar2 = JSGraph::NaNConstant(*(JSGraph **)(this + 0x10));
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar2,0,0);
    }
    else {
      pZVar6 = *(Zone **)(this + 0x20);
      GraphAssembler::GraphAssembler
                ((GraphAssembler *)local_c8,*(JSGraph **)(this + 0x10),pZVar6,(Schedule *)0x0);
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_c8[0] = &PTR__JSCallReducerAssembler_01ccd380;
      local_90 = param_1;
      pZStack_60 = pZVar6;
      pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      pNVar4 = (Node *)NodeProperties::GetControlInput(param_1,0);
      GraphAssembler::InitializeEffectControl((GraphAssembler *)local_c8,pNVar3,pNVar4);
      local_88 = NodeProperties::IsExceptionalCall(param_1,&local_80);
      local_88 = local_88 & 1;
      pNVar3 = (Node *)NodeProperties::GetValueInput(local_90,2);
      this_00 = (Graph *)*local_b0;
      pSVar7 = (SimplifiedOperatorBuilder *)local_b0[0x2f];
      lVar1 = CallParametersOf(*(Operator **)local_90);
      pOVar5 = (Operator *)SimplifiedOperatorBuilder::SpeculativeToNumber(pSVar7,4,lVar1 + 8);
      uStack_50 = local_a8;
      local_48 = uStack_a0;
      local_58 = pNVar3;
      pNVar3 = (Node *)Graph::NewNode(this_00,pOVar5,3,&local_58,false);
      local_58 = (Node *)GraphAssembler::AddNode((GraphAssembler *)local_c8,pNVar3);
      uVar2 = Graph::NewNode((Graph *)*local_b0,param_2,1,&local_58,false);
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),local_90,uVar2,local_a8,uStack_a0);
      if ((local_88 != 0) && (local_78 != local_70)) {
        JSCallReducerAssembler::MergeExceptionalPaths();
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),local_80,local_58,uStack_50,local_48);
      }
      if (local_78 != 0) {
        local_70 = local_78;
      }
      local_c8[0] = &PTR__JSCallReducerAssembler_01ccd380;
      GraphAssembler::~GraphAssembler((GraphAssembler *)local_c8);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

