
/* v8::internal::compiler::EffectControlLinearizer::LowerNewArgumentsElements(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerNewArgumentsElements
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CallDescriptor *pCVar4;
  Node *pNVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  undefined8 local_a0 [2];
  int *local_90;
  Node *local_88;
  int *piStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar2 = NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  iVar1 = NewArgumentsElementsMappedCountOf(*(Operator **)param_1);
  Builtins::CallableFor((Builtins *)local_a0,*(undefined8 *)(*(long *)this + 0x168),0x56);
  local_88 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_80 = local_90;
  pCVar4 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_88,local_90[2] - *local_90,0,
                      *(undefined1 *)(*(long *)param_1 + 0x12),0);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar5 = (Node *)GraphAssembler::HeapConstant(this_00,local_a0[0]);
  uVar6 = GraphAssembler::SmiConstant(this_00,iVar1);
  uVar7 = GraphAssembler::NoContextConstant(this_00);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar4);
  uStack_58 = *(undefined8 *)(this + 0x60);
  local_60 = *(undefined8 *)(this + 0x58);
  local_88 = pNVar5;
  piStack_80 = (int *)uVar2;
  local_78 = uVar3;
  uStack_70 = uVar6;
  local_68 = uVar7;
  pNVar5 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar8,
                                  *(int *)(pOVar8 + 0x18) + *(int *)(pOVar8 + 0x1c) + 5,&local_88,
                                  false);
  *(Node **)(this + 0x58) = pNVar5;
  GraphAssembler::AddNode(this_00,pNVar5);
  return;
}

