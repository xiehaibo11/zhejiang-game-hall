
/* v8::internal::compiler::EffectControlLinearizer::LowerStringComparison(v8::internal::Callable
   const&, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStringComparison
          (EffectControlLinearizer *this,Callable *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  CallDescriptor *pCVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  Node *local_80;
  int *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pNVar4 = param_2 + 0x20;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  uVar1 = *(undefined8 *)pNVar4;
  uVar2 = *(undefined8 *)(pNVar4 + 8);
  local_80 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  local_78 = *(int **)(param_1 + 0x10);
  pCVar3 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_80,local_78[2] - *local_78,0,0x70,
                      0);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar4 = (Node *)GraphAssembler::HeapConstant(this_00,*(undefined8 *)param_1);
  uVar5 = GraphAssembler::NoContextConstant(this_00);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar3);
  uStack_58 = *(undefined8 *)(this + 0x60);
  local_60 = *(undefined8 *)(this + 0x58);
  local_80 = pNVar4;
  local_78 = (int *)uVar1;
  local_70 = uVar2;
  uStack_68 = uVar5;
  pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar6,
                                  *(int *)(pOVar6 + 0x18) + *(int *)(pOVar6 + 0x1c) + 4,&local_80,
                                  false);
  *(Node **)(this + 0x58) = pNVar4;
  GraphAssembler::AddNode(this_00,pNVar4);
  return;
}

