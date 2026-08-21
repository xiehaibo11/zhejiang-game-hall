
/* v8::internal::compiler::EffectControlLinearizer::LowerArgumentsFrame(v8::internal::compiler::Node*)
    */

void v8::internal::compiler::EffectControlLinearizer::LowerArgumentsFrame(Node *param_1)

{
  GraphAssembler *this;
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
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
  this = (GraphAssembler *)(param_1 + 0x38);
  local_80 = (BasicBlock *)GraphAssembler::NewBasicBlock(this,false);
  uStack_78 = 0;
  local_88[0] = (GraphAssemblerLabel)0x0;
  local_84 = 1;
  local_50 = 5;
  pNVar2 = (Node *)GraphAssembler::LoadFramePointer(this);
  uVar3 = GraphAssembler::IntPtrConstant(this,0);
  pNVar4 = (Node *)GraphAssembler::Load(this,5,pNVar2,uVar3);
  uVar3 = GraphAssembler::IntPtrConstant(this,-8);
  pNVar5 = (Node *)GraphAssembler::Load(this,0x405,pNVar4,uVar3);
  GraphAssembler::IntPtrConstant(this,0x26);
  pNVar5 = (Node *)GraphAssembler::IntPtrEqual((Node *)this,pNVar5);
  GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this,pNVar5,local_88,pNVar4);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this,local_88,pNVar2);
  GraphAssembler::GotoBasicBlock(this,local_80);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this,local_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}

