
/* v8::internal::compiler::EffectControlLinearizer::LowerStringCharCodeAt(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStringCharCodeAt
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  AccessBuilder *this_01;
  AccessBuilder *pAVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 uVar6;
  AccessBuilder *this_02;
  AccessBuilder *this_03;
  AccessBuilder *this_04;
  AccessBuilder *this_05;
  undefined8 uVar7;
  AccessBuilder *this_06;
  CallDescriptor *pCVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Operator *pOVar11;
  EffectControlLinearizer *pEVar12;
  GraphAssemblerLabel local_378 [4];
  undefined4 local_374;
  undefined8 local_370;
  undefined8 uStack_368;
  GraphAssemblerLabel local_340 [4];
  undefined4 local_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  GraphAssemblerLabel local_308 [4];
  undefined4 local_304;
  undefined8 local_300;
  undefined8 uStack_2f8;
  GraphAssemblerLabel local_2d0 [4];
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  GraphAssemblerLabel local_298 [4];
  undefined4 local_294;
  undefined8 local_290;
  undefined8 uStack_288;
  GraphAssemblerLabel local_260 [4];
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  GraphAssemblerLabel local_228 [4];
  undefined4 local_224;
  undefined8 local_220;
  undefined8 uStack_218;
  GraphAssemblerLabel local_1f0 [4];
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  GraphAssemblerLabel local_1b8 [4];
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  GraphAssemblerLabel local_180 [4];
  undefined4 local_17c;
  BasicBlock *local_178;
  undefined8 local_170;
  undefined8 local_158;
  undefined1 local_148;
  GraphAssemblerLabel local_140 [4];
  undefined4 local_13c;
  BasicBlock *local_138;
  undefined8 uStack_130;
  Node *local_118;
  Node *pNStack_110;
  undefined2 local_100;
  GraphAssemblerLabel local_f8 [4];
  undefined4 local_f4;
  BasicBlock *local_f0;
  undefined8 uStack_e8;
  Node *local_d0;
  Node *pNStack_c8;
  undefined2 local_b8;
  undefined8 local_b0;
  Node *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  pNVar4 = *(Node **)pNVar3;
  pNVar3 = *(Node **)(pNVar3 + 8);
  this_00 = (GraphAssembler *)(this + 0x38);
  local_f0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_e8 = 0;
  local_f8[0] = (GraphAssemblerLabel)0x0;
  local_f4 = 2;
  local_b8 = 0x508;
  local_138 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_130 = 0;
  local_140[0] = (GraphAssemblerLabel)0x0;
  local_13c = 1;
  local_100 = 0x508;
  local_178 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  local_180[0] = (GraphAssemblerLabel)0x0;
  local_17c = 1;
  local_170 = 0;
  local_148 = 4;
  GraphAssembler::MergeState<v8::internal::compiler::Node*,v8::internal::compiler::Node*>
            (this_00,local_f8,pNVar4,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_f0);
  pEVar12 = this + 0x58;
  *(undefined8 *)pEVar12 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<2ul>(this_00,local_f8);
  AccessBuilder::ForMap(this_01);
  pAVar2 = (AccessBuilder *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_b0,local_d0);
  AccessBuilder::ForMapInstanceType(pAVar2);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_b0,(Node *)pAVar2);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,7);
  pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar3,pNVar4);
  local_1b0 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_1a8 = 0;
  local_1b8[0] = (GraphAssemblerLabel)0x0;
  local_1b4 = 1;
  local_1e8 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_1e0 = 0;
  local_1f0[0] = (GraphAssemblerLabel)0x0;
  local_1ec = 1;
  local_220 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_218 = 0;
  local_228[0] = (GraphAssemblerLabel)0x0;
  local_224 = 1;
  local_258 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_250 = 0;
  local_260[0] = (GraphAssemblerLabel)0x0;
  local_25c = 1;
  local_290 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_288 = 0;
  local_298[0] = (GraphAssemblerLabel)0x0;
  local_294 = 1;
  local_2c8 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_2c0 = 0;
  local_2d0[0] = (GraphAssemblerLabel)0x0;
  local_2cc = 1;
  local_300 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_2f8 = 0;
  local_308[0] = (GraphAssemblerLabel)0x0;
  local_304 = 1;
  local_338 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_330 = 0;
  local_340[0] = (GraphAssemblerLabel)0x0;
  local_33c = 0;
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  uVar6 = GraphAssembler::Int32LessThanOrEqual(this_00,pNVar4,pNVar5);
  GraphAssembler::BranchImpl<>(this_00,uVar6,local_1b8,local_1f0,0,2);
  GraphAssembler::Bind<0ul>(this_00,local_1b8);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  uVar6 = GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::BranchImpl<>(this_00,uVar6,local_260,local_228,0,2);
  GraphAssembler::Bind<0ul>(this_00,local_1f0);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,5);
  pNVar5 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::GotoIf<>(this_00,pNVar5,local_298);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,2);
  pNVar5 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::GotoIf<>(this_00,pNVar5,local_2d0);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,3);
  uVar6 = GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::BranchImpl<>(this_00,uVar6,local_308,local_340,1,2);
  GraphAssembler::Bind<0ul>(this_00,local_228);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,8);
  pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar3,pNVar4);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar4 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar4 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  pNVar4 = (Node *)LoadFromSeqString(this,local_d0,pNStack_c8,pNVar4);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_180,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_178);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar12 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_260);
  AccessBuilder::ForConsStringSecond(this_02);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_b0,local_d0);
  pNVar5 = (Node *)GraphAssembler::EmptyStringConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar4,pNVar5);
  GraphAssembler::GotoIfNot<>(this_00,pNVar4,local_340);
  AccessBuilder::ForConsStringFirst(this_03);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_b0,local_d0);
  GraphAssembler::MergeState<v8::internal::compiler::Node*,v8::internal::compiler::Node*>
            (this_00,local_140,pNVar4,pNStack_c8);
  GraphAssembler::GotoBasicBlock(this_00,local_138);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar12 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_298);
  AccessBuilder::ForThinStringActual(this_04);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_b0,local_d0);
  GraphAssembler::MergeState<v8::internal::compiler::Node*,v8::internal::compiler::Node*>
            (this_00,local_140,pNVar4,pNStack_c8);
  GraphAssembler::GotoBasicBlock(this_00,local_138);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar12 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_2d0);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0x10);
  pNVar4 = (Node *)GraphAssembler::Word32And(this_00,pNVar3,pNVar4);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0x10);
  pNVar4 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::GotoIf<>(this_00,pNVar4,local_340);
  AccessBuilder::ForExternalStringResourceData(this_05);
  uVar6 = GraphAssembler::LoadField(this_00,(FieldAccess *)&local_b0,local_d0);
  local_a8 = (Node *)GraphAssembler::NewBasicBlock(this_00,false);
  local_a0 = 0;
  local_b0._0_4_ = (uint)local_b0 & 0xffffff00;
  local_b0 = (Node *)CONCAT44(1,(uint)local_b0);
  local_370 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_368 = 0;
  local_378[0] = (GraphAssemblerLabel)0x0;
  local_374 = 1;
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,8);
  pNVar3 = (Node *)GraphAssembler::Word32And(this_00,pNVar3,pNVar4);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  uVar7 = GraphAssembler::Word32Equal(this_00,pNVar3,pNVar4);
  GraphAssembler::BranchImpl<>(this_00,uVar7,local_378,&local_b0,0,2);
  GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)&local_b0);
  pNVar3 = (Node *)GraphAssembler::Load(this_00,0x302,uVar6,pNStack_c8);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_180,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_178);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar12 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_378);
  pNVar3 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
  uVar7 = GraphAssembler::WordShl(this_00,pNStack_c8,pNVar3);
  pNVar3 = (Node *)GraphAssembler::Load(this_00,0x303,uVar6,uVar7);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_180,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_178);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar12 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_308);
  AccessBuilder::ForSlicedStringOffset(this_06);
  pAVar2 = (AccessBuilder *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_b0,local_d0);
  AccessBuilder::ForSlicedStringParent(pAVar2);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_b0,local_d0);
  pNVar4 = (Node *)ChangeSmiToIntPtr(this,(Node *)pAVar2);
  pNVar4 = (Node *)GraphAssembler::IntAdd(this_00,pNStack_c8,pNVar4);
  GraphAssembler::MergeState<v8::internal::compiler::Node*,v8::internal::compiler::Node*>
            (this_00,local_140,pNVar3,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_138);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar12 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_340);
  pCVar8 = (CallDescriptor *)
           Linkage::GetRuntimeCallDescriptor(*(undefined8 *)**(undefined8 **)this,0x149,2,0x60,0);
  pNVar3 = (Node *)GraphAssembler::CEntryStubConstant(this_00,1);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    pNVar4 = (Node *)GraphAssembler::Word32Shl(this_00,pNStack_c8,pNVar4);
    uVar6 = GraphAssembler::BitcastWord32ToWord64(this_00,pNVar4);
  }
  else {
    pNVar4 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    uVar6 = GraphAssembler::WordShl(this_00,pNStack_c8,pNVar4);
  }
  uVar7 = ExternalReference::Create(0x149);
  uVar7 = GraphAssembler::ExternalConstant(this_00,uVar7);
  uVar9 = GraphAssembler::Int32Constant(this_00,2);
  uVar10 = GraphAssembler::NoContextConstant(this_00);
  pOVar11 = (Operator *)
            CommonOperatorBuilder::Call
                      (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar8);
  local_a8 = local_d0;
  uStack_78 = *(undefined8 *)(this + 0x60);
  local_80 = *(undefined8 *)(this + 0x58);
  local_b0 = pNVar3;
  local_a0 = uVar6;
  uStack_98 = uVar7;
  local_90 = uVar9;
  uStack_88 = uVar10;
  pNVar3 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar11,
                                  *(int *)(pOVar11 + 0x18) + *(int *)(pOVar11 + 0x1c) + 6,
                                  (Node **)&local_b0,false);
  *(Node **)(this + 0x58) = pNVar3;
  pNVar3 = (Node *)GraphAssembler::AddNode(this_00,pNVar3);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar3 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,pNVar3);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar4 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    pNVar3 = (Node *)GraphAssembler::Word32Sar(this_00,pNVar3,pNVar4);
  }
  else {
    pNVar3 = (Node *)ChangeSmiToIntPtr(this,pNVar3);
  }
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_180,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_178);
  *(undefined8 *)pEVar12 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<2ul>(this_00,local_140);
  GraphAssembler::MergeState<v8::internal::compiler::Node*,v8::internal::compiler::Node*>
            (this_00,local_f8,local_118,pNStack_110);
  GraphAssembler::GotoBasicBlock(this_00,local_f0);
  *(undefined8 *)pEVar12 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_180);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_158);
}

