
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32Mod(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32Mod
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  long lVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 uVar6;
  undefined8 local_168;
  undefined4 local_160;
  GraphAssemblerLabel local_158 [4];
  undefined4 local_154;
  BasicBlock *local_150;
  undefined8 uStack_148;
  undefined8 local_130;
  undefined1 local_120;
  GraphAssemblerLabel local_118 [4];
  undefined4 local_114;
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
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar1 = *(Node **)pNVar5;
  pNVar5 = *(Node **)(pNVar5 + 8);
  this_00 = (GraphAssembler *)(this + 0x38);
  local_98 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_90 = 0;
  local_a0[0] = (GraphAssemblerLabel)0x0;
  local_9c = 0;
  local_d0 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_c8 = 0;
  local_d8[0] = (GraphAssemblerLabel)0x0;
  local_d4 = 0;
  GraphAssembler::NewBasicBlock(this_00,false);
  local_110 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_108 = 0;
  local_118[0] = (GraphAssemblerLabel)0x0;
  local_114 = 1;
  local_e0 = 4;
  local_150 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_148 = 0;
  local_158[0] = (GraphAssemblerLabel)0x0;
  local_154 = 1;
  local_120 = 4;
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar4 = (Node *)GraphAssembler::Int32LessThanOrEqual(this_00,pNVar5,pNVar3);
  GraphAssembler::GotoIf<>(this_00,pNVar4,local_a0);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_118,pNVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_110);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_a0);
  pNVar5 = (Node *)GraphAssembler::Int32Sub(this_00,pNVar3,pNVar5);
  local_168 = 0;
  local_160 = 0xffffffff;
  uVar6 = GraphAssembler::Word32Equal(this_00,pNVar5,pNVar3);
  GraphAssembler::DeoptimizeIf(this_00,5,&local_168,uVar6,param_2,1);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_118,pNVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_110);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_118);
  pNVar5 = (Node *)GraphAssembler::Int32LessThan(this_00,pNVar1,pNVar3);
  GraphAssembler::GotoIf<>(this_00,pNVar5,local_d8);
  pNVar5 = (Node *)BuildUint32Mod(this,pNVar1,local_f0);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_158,pNVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_150);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_d8);
  pNVar5 = (Node *)GraphAssembler::Int32Sub(this_00,pNVar3,pNVar1);
  pNVar5 = (Node *)GraphAssembler::Uint32Mod(this_00,pNVar5,local_f0);
  local_168 = 0;
  local_160 = 0xffffffff;
  uVar6 = GraphAssembler::Word32Equal(this_00,pNVar5,pNVar3);
  GraphAssembler::DeoptimizeIf(this_00,0x12,&local_168,uVar6,param_2,1);
  pNVar5 = (Node *)GraphAssembler::Int32Sub(this_00,pNVar3,pNVar5);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_158,pNVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_150);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_158);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_130);
}

