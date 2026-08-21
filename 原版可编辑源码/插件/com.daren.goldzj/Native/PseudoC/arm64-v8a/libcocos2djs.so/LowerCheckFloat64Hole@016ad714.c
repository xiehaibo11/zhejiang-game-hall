
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckFloat64Hole(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckFloat64Hole
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  GraphAssemblerLabel local_c8 [4];
  undefined4 local_c4;
  BasicBlock *local_c0;
  undefined8 uStack_b8;
  GraphAssemblerLabel local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = CheckFloat64HoleParametersOf(*(Operator **)param_1);
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar6 = *(Node **)pNVar6;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_88 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 0;
  local_c0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_b8 = 0;
  local_c8[0] = (GraphAssemblerLabel)0x0;
  local_c4 = 1;
  uVar3 = GraphAssembler::Float64Equal(this_00,pNVar6,pNVar6);
  GraphAssembler::BranchImpl<>(this_00,uVar3,local_c8,local_90,1,2);
  GraphAssembler::Bind<0ul>(this_00,local_90);
  pNVar4 = (Node *)GraphAssembler::Float64ExtractHighWord32(this_00,pNVar6);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,-0x80001);
  uVar3 = GraphAssembler::Word32Equal(this_00,pNVar4,pNVar5);
  GraphAssembler::DeoptimizeIf(this_00,6,lVar2 + 8,uVar3,param_2,1);
  GraphAssembler::MergeState<>(this_00,local_c8);
  GraphAssembler::GotoBasicBlock(this_00,local_c0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_c8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pNVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

