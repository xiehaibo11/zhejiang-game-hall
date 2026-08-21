
/* v8::internal::compiler::EffectControlLinearizer::LowerNumberIsSafeInteger(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerNumberIsSafeInteger
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  GraphAssemblerLabel local_88 [4];
  undefined4 local_84;
  BasicBlock *local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  local_80 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_78 = 0;
  local_88[0] = (GraphAssemblerLabel)0x0;
  local_84 = 1;
  local_50 = 1;
  pNVar3 = (Node *)BuildFloat64RoundTruncate(this,pNVar5);
  pNVar5 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar5,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Float64Constant(this_00,0.0);
  pNVar5 = (Node *)GraphAssembler::Float64Equal(this_00,pNVar5,pNVar4);
  GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(this_00,pNVar5,local_88,pNVar2);
  pNVar5 = (Node *)GraphAssembler::Float64Abs(this_00,pNVar3);
  pNVar2 = (Node *)GraphAssembler::Float64Constant(this_00,9007199254740991.0);
  pNVar5 = (Node *)GraphAssembler::Float64LessThanOrEqual(this_00,pNVar5,pNVar2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_88,pNVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_80);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}

