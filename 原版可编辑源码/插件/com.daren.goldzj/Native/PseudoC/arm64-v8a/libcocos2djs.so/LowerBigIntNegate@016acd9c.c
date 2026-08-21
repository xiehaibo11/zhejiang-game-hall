
/* v8::internal::compiler::EffectControlLinearizer::LowerBigIntNegate(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerBigIntNegate
          (EffectControlLinearizer *this,Node *param_1)

{
  CallDescriptor *pCVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  GraphAssembler *this_00;
  undefined8 uVar6;
  undefined8 local_80 [2];
  int *local_70;
  Node *local_68;
  int *piStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  Builtins::CallableFor((Builtins *)local_80,*(undefined8 *)(*(long *)this + 0x168),0x2d9);
  this_00 = (GraphAssembler *)(this + 0x38);
  local_68 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_60 = local_70;
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_68,local_70[2] - *local_70,0,0x38,
                      0);
  pNVar2 = (Node *)GraphAssembler::HeapConstant(this_00,local_80[0]);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  uVar6 = *(undefined8 *)pNVar5;
  uVar3 = GraphAssembler::NoContextConstant(this_00);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar1);
  uStack_48 = *(undefined8 *)(this + 0x60);
  local_50 = *(undefined8 *)(this + 0x58);
  local_68 = pNVar2;
  piStack_60 = (int *)uVar6;
  local_58 = uVar3;
  pNVar5 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar4,
                                  *(int *)(pOVar4 + 0x18) + *(int *)(pOVar4 + 0x1c) + 3,&local_68,
                                  false);
  *(Node **)(this + 0x58) = pNVar5;
  GraphAssembler::AddNode(this_00,pNVar5);
  return;
}

