
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedTaggedToArrayIndex(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedTaggedToArrayIndex
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  FeedbackSource *pFVar2;
  Node *pNVar3;
  Node *pNVar4;
  AccessBuilder *this_01;
  AccessBuilder *this_02;
  undefined8 uVar5;
  CallDescriptor *pCVar6;
  Operator *pOVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  Node *pNVar10;
  Zone *this_03;
  EffectControlLinearizer *pEVar11;
  Node *local_158;
  Node *pNStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  GraphAssemblerLabel local_120 [4];
  undefined4 local_11c;
  AccessBuilder *local_118;
  undefined8 uStack_110;
  GraphAssemblerLabel local_e8 [4];
  undefined4 local_e4;
  BasicBlock *local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined1 local_b0;
  GraphAssemblerLabel local_a8 [4];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pFVar2 = (FeedbackSource *)CheckParametersOf(*(Operator **)param_1);
  pNVar10 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  pNVar10 = *(Node **)pNVar10;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_a0 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_98 = 0;
  local_a8[0] = (GraphAssemblerLabel)0x0;
  local_a4 = 0;
  local_e0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_d8 = 0;
  local_e8[0] = (GraphAssemblerLabel)0x0;
  local_e4 = 1;
  local_b0 = 5;
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar3 = (Node *)GraphAssembler::Word32And(this_00,pNVar10,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar3,pNVar4);
  GraphAssembler::GotoIfNot<>(this_00,pNVar3,local_a8);
  pNVar3 = (Node *)ChangeSmiToIntPtr(this,pNVar10);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_e8,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_e0);
  pEVar11 = this + 0x58;
  *(undefined8 *)pEVar11 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_a8);
  local_118 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,true);
  local_120[0] = (GraphAssemblerLabel)0x0;
  local_11c = 0;
  uStack_110 = 0;
  AccessBuilder::ForMap(local_118);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_158,pNVar10);
  pNVar4 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar3,pNVar4);
  GraphAssembler::GotoIfNot<>(this_00,pNVar4,local_120);
  AccessBuilder::ForHeapNumberValue(this_01);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_158,pNVar10);
  pNVar4 = (Node *)BuildCheckedFloat64ToIndex(this,pFVar2,pNVar4,param_2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_e8,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_e0);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar11 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_120);
  this_02 = (AccessBuilder *)GraphAssembler::NewBasicBlock(this_00,true);
  AccessBuilder::ForMapInstanceType(this_02);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_158,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Uint32Constant(this_00,0x40);
  uVar5 = GraphAssembler::Uint32LessThan(this_00,pNVar3,pNVar4);
  GraphAssembler::DeoptimizeIfNot(this_00,0x1b,pFVar2,uVar5,param_2,1);
  this_03 = *(Zone **)**(undefined8 **)this;
  puVar8 = *(undefined4 **)(this_03 + 0x10);
  if ((ulong)(*(long *)(this_03 + 0x18) - (long)puVar8) < 8) {
    puVar8 = (undefined4 *)Zone::NewExpand(this_03,8);
  }
  else {
    *(undefined4 **)(this_03 + 0x10) = puVar8 + 2;
  }
  *puVar8 = 0x7070405;
  uVar5 = ExternalReference::string_to_array_index_function();
  pNVar3 = (Node *)GraphAssembler::ExternalConstant(this_00,uVar5);
  puVar9 = *(undefined8 **)(this_03 + 0x10);
  uVar5 = *(undefined8 *)**(undefined8 **)this;
  if ((ulong)(*(long *)(this_03 + 0x18) - (long)puVar9) < 0x18) {
    puVar9 = (undefined8 *)Zone::NewExpand(this_03,0x18);
  }
  else {
    *(undefined8 **)(this_03 + 0x10) = puVar9 + 3;
  }
  puVar9[1] = 1;
  *puVar9 = 1;
  puVar9[2] = puVar8;
  pCVar6 = (CallDescriptor *)Linkage::GetSimplifiedCDescriptor(uVar5,puVar9,0);
  pOVar7 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)this + 8),pCVar6);
  uStack_140 = *(undefined8 *)(this + 0x60);
  local_148 = *(undefined8 *)(this + 0x58);
  local_158 = pNVar3;
  pNStack_150 = pNVar10;
  pNVar10 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar7,
                                   *(int *)(pOVar7 + 0x18) + *(int *)(pOVar7 + 0x1c) + 2,&local_158,
                                   false);
  *(Node **)(this + 0x58) = pNVar10;
  pNVar10 = (Node *)GraphAssembler::AddNode(this_00,pNVar10);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,-1);
  uVar5 = GraphAssembler::Word32Equal(this_00,pNVar10,pNVar3);
  GraphAssembler::DeoptimizeIf(this_00,0x19,pFVar2,uVar5,param_2,1);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_e8,pNVar10);
  GraphAssembler::GotoBasicBlock(this_00,local_e0);
  *(undefined8 *)pEVar11 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_e8);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c0);
}

