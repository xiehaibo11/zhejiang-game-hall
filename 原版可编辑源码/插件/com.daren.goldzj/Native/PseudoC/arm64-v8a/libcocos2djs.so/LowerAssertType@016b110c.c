
/* v8::internal::compiler::EffectControlLinearizer::LowerAssertType(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerAssertType
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CallDescriptor *pCVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Operator *pOVar7;
  undefined8 uVar8;
  undefined8 local_a8 [2];
  int *local_98;
  undefined8 local_90;
  Node *local_88;
  int *piStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_90 = *(undefined8 *)(*(long *)param_1 + 0x30);
  lVar1 = Type::AsRange((Type *)&local_90);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  uVar8 = *(undefined8 *)pNVar5;
  this_00 = (GraphAssembler *)(this + 0x38);
  uVar2 = GraphAssembler::NumberConstant(this_00,*(double *)(lVar1 + 8));
  uVar3 = GraphAssembler::NumberConstant(this_00,*(double *)(lVar1 + 0x10));
  Builtins::CallableFor((Builtins *)local_a8,*(undefined8 *)(*(long *)this + 0x168),0x2d4);
  local_88 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_80 = local_98;
  pCVar4 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_88,local_98[2] - *local_98,0,
                      *(undefined1 *)(*(long *)param_1 + 0x12),0);
  pNVar5 = (Node *)GraphAssembler::HeapConstant(this_00,local_a8[0]);
  uVar6 = GraphAssembler::NoContextConstant(this_00);
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar4);
  uStack_58 = *(undefined8 *)(this + 0x60);
  local_60 = *(undefined8 *)(this + 0x58);
  local_88 = pNVar5;
  piStack_80 = (int *)uVar8;
  local_78 = uVar2;
  uStack_70 = uVar3;
  local_68 = uVar6;
  pNVar5 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar7,
                                  *(int *)(pOVar7 + 0x18) + *(int *)(pOVar7 + 0x1c) + 5,&local_88,
                                  false);
  *(Node **)(this + 0x58) = pNVar5;
  GraphAssembler::AddNode(this_00,pNVar5);
  return uVar8;
}

