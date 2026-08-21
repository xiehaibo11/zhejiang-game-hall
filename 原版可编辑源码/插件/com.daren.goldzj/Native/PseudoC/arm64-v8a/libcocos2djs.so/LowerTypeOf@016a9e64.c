
/* v8::internal::compiler::EffectControlLinearizer::LowerTypeOf(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerTypeOf
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  CallDescriptor *pCVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  undefined8 local_80 [2];
  int *local_70;
  Node *local_68;
  int *piStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  uVar5 = *(undefined8 *)pNVar2;
  Builtins::CallableFor((Builtins *)local_80,*(undefined8 *)(*(long *)this + 0x168),0x6c);
  local_68 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_60 = local_70;
  pCVar1 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_68,local_70[2] - *local_70,0x10,
                      0x70,0);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::HeapConstant(this_00,local_80[0]);
  uVar3 = GraphAssembler::NoContextConstant(this_00);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar1);
  uStack_48 = *(undefined8 *)(this + 0x60);
  local_50 = *(undefined8 *)(this + 0x58);
  local_68 = pNVar2;
  piStack_60 = (int *)uVar5;
  local_58 = uVar3;
  pNVar2 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar4,
                                  *(int *)(pOVar4 + 0x18) + *(int *)(pOVar4 + 0x1c) + 3,&local_68,
                                  false);
  *(Node **)(this + 0x58) = pNVar2;
  GraphAssembler::AddNode(this_00,pNVar2);
  return;
}

