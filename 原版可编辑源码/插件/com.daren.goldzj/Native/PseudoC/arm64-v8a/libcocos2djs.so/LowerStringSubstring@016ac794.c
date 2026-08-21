
/* v8::internal::compiler::EffectControlLinearizer::LowerStringSubstring(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStringSubstring
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  undefined8 uVar1;
  Node *pNVar2;
  CallDescriptor *pCVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  uint uVar7;
  long lVar8;
  Node *pNVar9;
  undefined8 local_a0 [2];
  int *local_90;
  Node *local_88;
  int *piStack_80;
  Node *local_78;
  Node *pNStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar7 = *(uint *)(param_1 + 0x14);
  pNVar9 = param_1 + 0x20;
  pNVar2 = pNVar9;
  if ((~uVar7 & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  uVar1 = *(undefined8 *)pNVar2;
  pNVar2 = *(Node **)(pNVar2 + 8);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar2 = (Node *)GraphAssembler::ChangeInt32ToInt64((GraphAssembler *)(this + 0x38),pNVar2);
    uVar7 = *(uint *)(param_1 + 0x14);
  }
  if ((~uVar7 & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  lVar8 = *(long *)this;
  pNVar9 = *(Node **)(pNVar9 + 0x10);
  if (*(char *)(*(long *)(lVar8 + 0x10) + 0x10) == '\x05') {
    pNVar9 = (Node *)GraphAssembler::ChangeInt32ToInt64((GraphAssembler *)(this + 0x38),pNVar9);
    lVar8 = *(long *)this;
  }
  Builtins::CallableFor((Builtins *)local_a0,*(undefined8 *)(lVar8 + 0x168),0x36);
  local_88 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_80 = local_90;
  pCVar3 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_88,local_90[2] - *local_90,0,0x70,
                      0);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar4 = (Node *)GraphAssembler::HeapConstant(this_00,local_a0[0]);
  uVar5 = GraphAssembler::NoContextConstant(this_00);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar3);
  uStack_58 = *(undefined8 *)(this + 0x60);
  local_60 = *(undefined8 *)(this + 0x58);
  local_88 = pNVar4;
  piStack_80 = (int *)uVar1;
  local_78 = pNVar2;
  pNStack_70 = pNVar9;
  local_68 = uVar5;
  pNVar9 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar6,
                                  *(int *)(pOVar6 + 0x18) + *(int *)(pOVar6 + 0x1c) + 5,&local_88,
                                  false);
  *(Node **)(this + 0x58) = pNVar9;
  GraphAssembler::AddNode(this_00,pNVar9);
  return;
}

