
/* v8::internal::compiler::EffectControlLinearizer::LowerChangeBitToTagged(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerChangeBitToTagged
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined8 uVar2;
  Node *pNVar3;
  GraphAssemblerLabel local_c0 [4];
  undefined4 local_bc;
  BasicBlock *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined1 local_88;
  GraphAssemblerLabel local_80 [4];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  pNVar3 = *(Node **)pNVar3;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_78 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_70 = 0;
  local_80[0] = (GraphAssemblerLabel)0x0;
  local_7c = 1;
  local_b8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_b0 = 0;
  local_c0[0] = (GraphAssemblerLabel)0x0;
  local_bc = 1;
  local_88 = 8;
  GraphAssembler::GotoIf<>(this_00,pNVar3,local_80);
  uVar2 = GraphAssembler::FalseConstant(this_00);
  GraphAssembler::MergeState<v8::internal::TNode<v8::internal::Oddball>>(this_00,local_c0,uVar2);
  GraphAssembler::GotoBasicBlock(this_00,local_b8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_80);
  uVar2 = GraphAssembler::TrueConstant(this_00);
  GraphAssembler::MergeState<v8::internal::TNode<v8::internal::Oddball>>(this_00,local_c0,uVar2);
  GraphAssembler::GotoBasicBlock(this_00,local_b8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_c0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_98);
}

