
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckEqualsInternalizedString(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckEqualsInternalizedString
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  long lVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  AccessBuilder *pAVar6;
  CallDescriptor *pCVar7;
  Operator *pOVar8;
  AccessBuilder *this_01;
  Node *pNVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  Zone *this_02;
  undefined8 uVar12;
  Node *local_188;
  undefined8 local_180;
  Node *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  GraphAssemblerLabel local_150 [4];
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  GraphAssemblerLabel local_118 [4];
  int local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  GraphAssemblerLabel local_e0 [4];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  GraphAssemblerLabel local_a8 [4];
  undefined4 local_a4;
  BasicBlock *local_a0;
  undefined8 uStack_98;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pNVar9 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  pNVar1 = *(Node **)pNVar9;
  pNVar9 = *(Node **)(pNVar9 + 8);
  this_00 = (GraphAssembler *)(this + 0x38);
  local_a0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_98 = 0;
  local_a8[0] = (GraphAssemblerLabel)0x0;
  local_a4 = 1;
  local_d8 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_d0 = 0;
  local_e0[0] = (GraphAssemblerLabel)0x0;
  local_dc = 0;
  local_110 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_108 = 0;
  local_118[0] = (GraphAssemblerLabel)0x0;
  local_114 = 1;
  local_148 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_140 = 0;
  local_150[0] = (GraphAssemblerLabel)0x0;
  local_14c = 1;
  uVar3 = GraphAssembler::TaggedEqual(this_00,pNVar1,pNVar9);
  GraphAssembler::BranchImpl<>(this_00,uVar3,local_a8,local_e0,1,2);
  GraphAssembler::Bind<0ul>(this_00,local_e0);
  local_188 = (Node *)0x0;
  local_180._0_4_ = 0xffffffff;
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar9,pNVar4);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  uVar3 = GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  pAVar6 = (AccessBuilder *)GraphAssembler::DeoptimizeIf(this_00,0x27,&local_188,uVar3,param_2,1);
  AccessBuilder::ForMap(pAVar6);
  pAVar6 = (AccessBuilder *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_188,pNVar9);
  AccessBuilder::ForMapInstanceType(pAVar6);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_188,(Node *)pAVar6);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0x2d);
  pNVar5 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::GotoIf<>(this_00,pNVar5,local_118);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0x25);
  uVar3 = GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::BranchImpl<>(this_00,uVar3,local_118,local_150,(ulong)(local_114 == 0) << 1,2);
  GraphAssembler::Bind<0ul>(this_00,local_150);
  local_188 = (Node *)0x0;
  local_180 = CONCAT44(local_180._4_4_,0xffffffff);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,-0x20);
  pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar4,pNVar5);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0x20);
  uVar3 = GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::DeoptimizeIfNot(this_00,0x27,&local_188,uVar3,param_2,1);
  this_02 = *(Zone **)**(undefined8 **)this;
  puVar10 = *(undefined4 **)(this_02 + 0x10);
  if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar10) < 8) {
    puVar10 = (undefined4 *)Zone::NewExpand(this_02,8);
  }
  else {
    *(undefined4 **)(this_02 + 0x10) = puVar10 + 2;
  }
  *puVar10 = 0x50708;
  *(undefined2 *)(puVar10 + 1) = 0x708;
  uVar3 = ExternalReference::try_internalize_string_function();
  pNVar4 = (Node *)GraphAssembler::ExternalConstant(this_00,uVar3);
  uVar3 = ExternalReference::isolate_address(*(Isolate **)(*(long *)this + 0x168));
  uVar3 = GraphAssembler::ExternalConstant(this_00,uVar3);
  puVar11 = *(undefined8 **)(this_02 + 0x10);
  uVar12 = *(undefined8 *)**(undefined8 **)this;
  if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar11) < 0x18) {
    puVar11 = (undefined8 *)Zone::NewExpand(this_02,0x18);
  }
  else {
    *(undefined8 **)(this_02 + 0x10) = puVar11 + 3;
  }
  puVar11[2] = puVar10;
  puVar11[1] = 2;
  *puVar11 = 1;
  pCVar7 = (CallDescriptor *)Linkage::GetSimplifiedCDescriptor(uVar12,puVar11,0);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)this + 8),pCVar7);
  uStack_168 = *(undefined8 *)(this + 0x60);
  local_170 = *(undefined8 *)(this + 0x58);
  local_188 = pNVar4;
  local_180 = uVar3;
  local_178 = pNVar9;
  pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar8,
                                  *(int *)(pOVar8 + 0x18) + *(int *)(pOVar8 + 0x1c) + 3,&local_188,
                                  false);
  *(Node **)(this + 0x58) = pNVar4;
  pNVar4 = (Node *)GraphAssembler::AddNode(this_00,pNVar4);
  local_188 = (Node *)0x0;
  local_180._0_4_ = 0xffffffff;
  uVar3 = GraphAssembler::TaggedEqual(this_00,pNVar1,pNVar4);
  GraphAssembler::DeoptimizeIfNot(this_00,0x27,&local_188,uVar3,param_2,1);
  GraphAssembler::MergeState<>(this_00,local_a8);
  GraphAssembler::GotoBasicBlock(this_00,local_a0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_118);
  AccessBuilder::ForThinStringActual(this_01);
  pNVar9 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_188,pNVar9);
  local_188 = (Node *)0x0;
  local_180 = CONCAT44(local_180._4_4_,0xffffffff);
  uVar3 = GraphAssembler::TaggedEqual(this_00,pNVar1,pNVar9);
  GraphAssembler::DeoptimizeIfNot(this_00,0x27,&local_188,uVar3,param_2,1);
  GraphAssembler::MergeState<>(this_00,local_a8);
  GraphAssembler::GotoBasicBlock(this_00,local_a0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_a8);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

