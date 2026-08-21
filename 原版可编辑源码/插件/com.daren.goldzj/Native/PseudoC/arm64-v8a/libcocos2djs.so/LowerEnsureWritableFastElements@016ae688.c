
/* v8::internal::compiler::EffectControlLinearizer::LowerEnsureWritableFastElements(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerEnsureWritableFastElements
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  undefined8 uVar1;
  long lVar2;
  Node *pNVar3;
  Node *pNVar4;
  CallDescriptor *pCVar5;
  Node *pNVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  undefined8 local_120 [2];
  int *local_110;
  Node *local_108;
  int *piStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  GraphAssemblerLabel local_d0 [4];
  undefined4 local_cc;
  AccessBuilder *local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined1 local_98;
  GraphAssemblerLabel local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  uVar1 = *(undefined8 *)pNVar6;
  pNVar6 = *(Node **)(pNVar6 + 8);
  this_00 = (GraphAssembler *)(this + 0x38);
  local_88 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 0;
  local_c8 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,false);
  local_98 = 8;
  local_d0[0] = (GraphAssemblerLabel)0x0;
  local_cc = 1;
  uStack_c0 = 0;
  AccessBuilder::ForMap(local_c8);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_108,pNVar6);
  pNVar4 = (Node *)GraphAssembler::FixedArrayMapConstant(this_00);
  pNVar3 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar3,pNVar4);
  GraphAssembler::GotoIfNot<>(this_00,pNVar3,local_90);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar6);
  GraphAssembler::GotoBasicBlock(this_00,(BasicBlock *)local_c8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_90);
  Builtins::CallableFor((Builtins *)local_120,*(undefined8 *)(*(long *)this + 0x168),0x53);
  local_108 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_100 = local_110;
  pCVar5 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_108,local_110[2] - *local_110,0,
                      0x70,0);
  pNVar6 = (Node *)GraphAssembler::HeapConstant(this_00,local_120[0]);
  uVar7 = GraphAssembler::NoContextConstant(this_00);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar5);
  uStack_e8 = *(undefined8 *)(this + 0x60);
  local_f0 = *(undefined8 *)(this + 0x58);
  local_108 = pNVar6;
  piStack_100 = (int *)uVar1;
  local_f8 = uVar7;
  pNVar6 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar8,
                                  *(int *)(pOVar8 + 0x18) + *(int *)(pOVar8 + 0x1c) + 3,&local_108,
                                  false);
  *(Node **)(this + 0x58) = pNVar6;
  pNVar6 = (Node *)GraphAssembler::AddNode(this_00,pNVar6);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar6);
  GraphAssembler::GotoBasicBlock(this_00,(BasicBlock *)local_c8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_d0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8);
}

