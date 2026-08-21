
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint32Bounds(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint32Bounds
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  Node *pNVar5;
  GraphAssemblerLabel local_c8 [4];
  undefined4 local_c4;
  BasicBlock *local_c0;
  undefined8 uStack_b8;
  GraphAssemblerLabel local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar1 = *(Node **)pNVar5;
  pNVar5 = *(Node **)(pNVar5 + 8);
  lVar3 = CheckBoundsParametersOf(*(Operator **)param_1);
  this_00 = (GraphAssembler *)(this + 0x38);
  uVar4 = GraphAssembler::Uint32LessThan(this_00,pNVar1,pNVar5);
  if (*(int *)(lVar3 + 0x10) == 0) {
    local_88 = GraphAssembler::NewBasicBlock(this_00,true);
    uStack_80 = 0;
    local_90[0] = (GraphAssemblerLabel)0x0;
    local_8c = 0;
    local_c0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_b8 = 0;
    local_c8[0] = (GraphAssemblerLabel)0x0;
    local_c4 = 1;
    GraphAssembler::BranchImpl<>(this_00,uVar4,local_c8,local_90,1,2);
    GraphAssembler::Bind<0ul>(this_00,local_90);
    GraphAssembler::Unreachable(this_00);
    GraphAssembler::MergeState<>(this_00,local_c8);
    GraphAssembler::GotoBasicBlock(this_00,local_c0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_c8);
  }
  else if (*(int *)(lVar3 + 0x10) == 1) {
    GraphAssembler::DeoptimizeIfNot(this_00,0x1e,lVar3,uVar4,param_2,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

