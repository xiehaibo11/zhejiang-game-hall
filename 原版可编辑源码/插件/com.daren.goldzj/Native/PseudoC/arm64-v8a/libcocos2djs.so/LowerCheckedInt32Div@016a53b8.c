
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32Div(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32Div
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  uint uVar2;
  long lVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined8 local_198;
  undefined4 local_190;
  GraphAssemblerLabel local_188 [4];
  undefined4 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint local_118 [2];
  BasicBlock *local_110;
  undefined8 uStack_108;
  Node *local_f0;
  undefined1 local_e0;
  GraphAssemblerLabel local_d8 [4];
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  GraphAssemblerLabel local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar1 = *(Node **)pNVar5;
  pNVar5 = *(Node **)(pNVar5 + 8);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  if (*(short *)(*(long *)pNVar5 + 0x10) == 0x17) {
    uVar2 = *(uint *)(*(long *)pNVar5 + 0x2c);
    if ((0 < (int)uVar2) &&
       (uVar9 = CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                         CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                  CONCAT11(POPCOUNT((char)(uVar2 >> 8)),POPCOUNT((char)uVar2)))),
       uVar8 = NEON_uaddlv((ulong)uVar9,1), CONCAT22((short)(uVar9 >> 0x10),uVar8) < 2)) {
      pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,uVar2 - 1);
      uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      pNVar6 = (Node *)GraphAssembler::Int32Constant
                                 (this_00,(int)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10));
      pNVar5 = (Node *)GraphAssembler::Word32And(this_00,pNVar1,pNVar5);
      uVar7 = GraphAssembler::Word32Equal(this_00,pNVar5,pNVar4);
      local_118[0] = 0;
      local_118[1] = 0;
      local_110 = (BasicBlock *)CONCAT44(local_110._4_4_,0xffffffff);
      GraphAssembler::DeoptimizeIfNot(this_00,0x10,local_118,uVar7,param_2,1);
      local_f0 = (Node *)GraphAssembler::Word32Sar(this_00,pNVar1,pNVar6);
      goto LAB_016a577c;
    }
  }
  local_98 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_90 = 0;
  local_a0[0] = (GraphAssemblerLabel)0x0;
  local_9c = 1;
  local_d0 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_c8 = 0;
  local_d8[0] = (GraphAssemblerLabel)0x0;
  local_d4 = 0;
  local_110 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  local_118[1] = 1;
  local_e0 = 4;
  uVar7 = GraphAssembler::Int32LessThan(this_00,pNVar4,pNVar5);
  GraphAssembler::BranchImpl<>(this_00,uVar7,local_a0,local_d8,1,2);
  GraphAssembler::Bind<0ul>(this_00,local_a0);
  pNVar6 = (Node *)GraphAssembler::Int32Div(this_00,pNVar1,pNVar5);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_118,pNVar6);
  GraphAssembler::GotoBasicBlock(this_00,local_110);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_d8);
  local_148 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_140 = 0;
  local_150 = (local_150 >> 8 & 0xffffff) << 8;
  local_180 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_178 = 0;
  local_188[0] = (GraphAssemblerLabel)0x0;
  local_184 = 1;
  uVar7 = GraphAssembler::Word32Equal(this_00,pNVar5,pNVar4);
  local_198 = 0;
  local_190 = 0xffffffff;
  GraphAssembler::DeoptimizeIf(this_00,5,&local_198,uVar7,param_2,1);
  uVar7 = GraphAssembler::Word32Equal(this_00,pNVar1,pNVar4);
  local_198 = 0;
  local_190 = 0xffffffff;
  GraphAssembler::DeoptimizeIf(this_00,0x12,&local_198,uVar7,param_2,1);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,-0x80000000);
  uVar7 = GraphAssembler::Word32Equal(this_00,pNVar1,pNVar4);
  GraphAssembler::BranchImpl<>(this_00,uVar7,&local_150,local_188,2,2);
  GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)&local_150);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,-1);
  uVar7 = GraphAssembler::Word32Equal(this_00,pNVar5,pNVar4);
  local_198 = 0;
  local_190 = 0xffffffff;
  GraphAssembler::DeoptimizeIf(this_00,0x1f,&local_198,uVar7,param_2,1);
  pNVar4 = (Node *)GraphAssembler::Int32Div(this_00,pNVar1,pNVar5);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_118,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_110);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_188);
  pNVar4 = (Node *)GraphAssembler::Int32Div(this_00,pNVar1,pNVar5);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>
            (this_00,(GraphAssemblerLabel *)local_118,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_110);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,(GraphAssemblerLabel *)local_118);
  pNVar5 = (Node *)GraphAssembler::Int32Mul(this_00,local_f0,pNVar5);
  uVar7 = GraphAssembler::Word32Equal(this_00,pNVar1,pNVar5);
  local_150 = 0;
  local_148 = CONCAT44(local_148._4_4_,0xffffffff);
  GraphAssembler::DeoptimizeIfNot(this_00,0x10,&local_150,uVar7,param_2,1);
LAB_016a577c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return local_f0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

