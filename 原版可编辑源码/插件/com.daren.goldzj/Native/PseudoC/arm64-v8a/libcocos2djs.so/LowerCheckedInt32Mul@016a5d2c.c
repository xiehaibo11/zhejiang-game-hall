
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32Mul(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32Mul
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  long lVar2;
  char cVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 local_e8;
  undefined4 local_e0;
  GraphAssemblerLabel local_d8 [4];
  undefined4 local_d4;
  BasicBlock *local_d0;
  undefined8 uStack_c8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  cVar3 = CheckMinusZeroModeOf(*(Operator **)param_1);
  pNVar8 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  pNVar1 = *(Node **)pNVar8;
  pNVar8 = *(Node **)(pNVar8 + 8);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar4 = (Node *)GraphAssembler::Int32MulWithOverflow(this_00,pNVar1,pNVar8);
  uVar5 = GraphAssembler::Projection(this_00,1,pNVar4);
  local_a0 = 0;
  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  GraphAssembler::DeoptimizeIf(this_00,0x1f,&local_a0,uVar5,param_2,1);
  pNVar4 = (Node *)GraphAssembler::Projection(this_00,0,pNVar4);
  if (cVar3 == '\0') {
    local_98 = GraphAssembler::NewBasicBlock(this_00,true);
    uStack_90 = 0;
    local_a0 = (local_a0 >> 8 & 0xffffff) << 8;
    local_d0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_c8 = 0;
    local_d8[0] = (GraphAssemblerLabel)0x0;
    local_d4 = 1;
    pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,0);
    pNVar7 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar4,pNVar6);
    GraphAssembler::GotoIf<>(this_00,pNVar7,(GraphAssemblerLabel *)&local_a0);
    GraphAssembler::MergeState<>(this_00,local_d8);
    GraphAssembler::GotoBasicBlock(this_00,local_d0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,(GraphAssemblerLabel *)&local_a0);
    pNVar8 = (Node *)GraphAssembler::Word32Or(this_00,pNVar1,pNVar8);
    uVar5 = GraphAssembler::Int32LessThan(this_00,pNVar8,pNVar6);
    local_e8 = 0;
    local_e0 = 0xffffffff;
    GraphAssembler::DeoptimizeIf(this_00,0x12,&local_e8,uVar5,param_2,1);
    GraphAssembler::MergeState<>(this_00,local_d8);
    GraphAssembler::GotoBasicBlock(this_00,local_d0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_d8);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return pNVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

