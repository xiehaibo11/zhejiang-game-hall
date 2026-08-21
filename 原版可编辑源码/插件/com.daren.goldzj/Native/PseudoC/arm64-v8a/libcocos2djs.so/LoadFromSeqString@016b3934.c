
/* v8::internal::compiler::EffectControlLinearizer::LoadFromSeqString(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LoadFromSeqString
          (EffectControlLinearizer *this,Node *param_1,Node *param_2,Node *param_3)

{
  GraphAssembler *this_00;
  long lVar1;
  AccessBuilder *this_01;
  Node *pNVar2;
  AccessBuilder *this_02;
  ElementAccess aEStack_e8 [24];
  GraphAssemblerLabel local_d0 [4];
  undefined4 local_cc;
  BasicBlock *local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined1 local_98;
  GraphAssemblerLabel local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (GraphAssembler *)(this + 0x38);
  local_88 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 1;
  local_c8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_c0 = 0;
  local_d0[0] = (GraphAssemblerLabel)0x0;
  local_cc = 1;
  local_98 = 4;
  GraphAssembler::GotoIf<>(this_00,param_3,local_90);
  AccessBuilder::ForSeqTwoByteStringCharacter(this_01);
  pNVar2 = (Node *)GraphAssembler::LoadElement(this_00,aEStack_e8,param_1,param_2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar2);
  GraphAssembler::GotoBasicBlock(this_00,local_c8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_90);
  AccessBuilder::ForSeqOneByteStringCharacter(this_02);
  pNVar2 = (Node *)GraphAssembler::LoadElement(this_00,aEStack_e8,param_1,param_2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar2);
  GraphAssembler::GotoBasicBlock(this_00,local_c8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_d0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8);
}

