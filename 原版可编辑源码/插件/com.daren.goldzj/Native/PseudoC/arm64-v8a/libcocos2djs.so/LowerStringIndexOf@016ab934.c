
/* v8::internal::compiler::EffectControlLinearizer::LowerStringIndexOf(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStringIndexOf
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  CallDescriptor *pCVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_90 [2];
  int *local_80;
  Node *local_78;
  int *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  uVar7 = *(undefined8 *)(pNVar2 + 8);
  uVar6 = *(undefined8 *)pNVar2;
  uVar5 = *(undefined8 *)(pNVar2 + 0x10);
  Builtins::CallableFor((Builtins *)local_90,*(undefined8 *)(*(long *)this + 0x168),0x33);
  local_78 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  local_70 = local_80;
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_78,local_80[2] - *local_80,0,0x70,
                      0,in_x6,in_x7,uVar6,uVar7);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::HeapConstant(this_00,local_90[0]);
  uVar3 = GraphAssembler::NoContextConstant(this_00);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar1);
  uStack_48 = *(undefined8 *)(this + 0x60);
  local_50 = *(undefined8 *)(this + 0x58);
  local_78 = pNVar2;
  local_70 = (int *)uVar6;
  uStack_68 = uVar7;
  local_60 = uVar5;
  uStack_58 = uVar3;
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar4,
                                  *(int *)(pOVar4 + 0x18) + *(int *)(pOVar4 + 0x1c) + 5,&local_78,
                                  false);
  *(Node **)(this + 0x58) = pNVar2;
  GraphAssembler::AddNode(this_00,pNVar2);
  return;
}

