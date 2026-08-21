
/* v8::internal::compiler::EffectControlLinearizer::LowerFindOrderedHashMapEntry(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerFindOrderedHashMapEntry
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  CallDescriptor *pCVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  undefined8 local_98 [2];
  int *local_88;
  Node *local_80;
  int *piStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = NodeProperties::GetValueInput(param_1,0);
  uVar2 = NodeProperties::GetValueInput(param_1,1);
  Builtins::CallableFor((Builtins *)local_98,*(undefined8 *)(*(long *)this + 0x168),0x176);
  local_80 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_78 = local_88;
  pCVar3 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_80,local_88[2] - *local_88,0,
                      *(undefined1 *)(*(long *)param_1 + 0x12),0);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar4 = (Node *)GraphAssembler::HeapConstant(this_00,local_98[0]);
  uVar5 = GraphAssembler::NoContextConstant(this_00);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar3);
  uStack_58 = *(undefined8 *)(this + 0x60);
  local_60 = *(undefined8 *)(this + 0x58);
  local_80 = pNVar4;
  piStack_78 = (int *)uVar1;
  local_70 = uVar2;
  uStack_68 = uVar5;
  pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar6,
                                  *(int *)(pOVar6 + 0x18) + *(int *)(pOVar6 + 0x1c) + 4,&local_80,
                                  false);
  *(Node **)(this + 0x58) = pNVar4;
  GraphAssembler::AddNode(this_00,pNVar4);
  return;
}

