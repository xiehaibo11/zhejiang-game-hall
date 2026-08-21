
/* v8::internal::compiler::EffectControlLinearizer::BuildCheckedFloat64ToInt32(v8::internal::compiler::CheckForMinusZeroMode,
   v8::internal::compiler::FeedbackSource const&, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::BuildCheckedFloat64ToInt32
          (EffectControlLinearizer *this,char param_2,undefined8 param_3,Node *param_4,
          undefined8 param_5)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *pNVar5;
  GraphAssemblerLabel local_d8 [4];
  undefined4 local_d4;
  BasicBlock *local_d0;
  undefined8 uStack_c8;
  GraphAssemblerLabel local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::RoundFloat64ToInt32(this_00,param_4);
  pNVar3 = (Node *)GraphAssembler::ChangeInt32ToFloat64(this_00,pNVar2);
  uVar4 = GraphAssembler::Float64Equal(this_00,param_4,pNVar3);
  GraphAssembler::DeoptimizeIfNot(this_00,0x11,param_3,uVar4,param_5,1);
  if (param_2 == '\0') {
    local_98 = GraphAssembler::NewBasicBlock(this_00,true);
    uStack_90 = 0;
    local_a0[0] = (GraphAssemblerLabel)0x0;
    local_9c = 0;
    local_d0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_c8 = 0;
    local_d8[0] = (GraphAssemblerLabel)0x0;
    local_d4 = 1;
    pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0);
    pNVar3 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar2,pNVar3);
    GraphAssembler::GotoIf<>(this_00,pNVar3,local_a0);
    GraphAssembler::MergeState<>(this_00,local_d8);
    GraphAssembler::GotoBasicBlock(this_00,local_d0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_a0);
    pNVar3 = (Node *)GraphAssembler::Float64ExtractHighWord32(this_00,param_4);
    pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0);
    uVar4 = GraphAssembler::Int32LessThan(this_00,pNVar3,pNVar5);
    GraphAssembler::DeoptimizeIf(this_00,0x12,param_3,uVar4,param_5,1);
    GraphAssembler::MergeState<>(this_00,local_d8);
    GraphAssembler::GotoBasicBlock(this_00,local_d0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

