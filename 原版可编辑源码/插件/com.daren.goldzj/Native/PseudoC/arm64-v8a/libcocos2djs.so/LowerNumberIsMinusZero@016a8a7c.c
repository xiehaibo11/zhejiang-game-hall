
/* v8::internal::compiler::EffectControlLinearizer::LowerNumberIsMinusZero(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerNumberIsMinusZero
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *pGVar1;
  long lVar2;
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
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pGVar1 = (GraphAssembler *)(this + 0x38);
    pNVar5 = (Node *)GraphAssembler::BitcastFloat64ToInt64(pGVar1,pNVar5);
    pNVar3 = (Node *)GraphAssembler::Int64Constant(pGVar1,-0x8000000000000000);
    local_60 = GraphAssembler::Word64Equal(pGVar1,pNVar5,pNVar3);
  }
  else {
    pGVar1 = (GraphAssembler *)(this + 0x38);
    local_80 = (BasicBlock *)GraphAssembler::NewBasicBlock(pGVar1,false);
    uStack_78 = 0;
    local_88[0] = (GraphAssemblerLabel)0x0;
    local_84 = 1;
    local_50 = 1;
    pNVar3 = (Node *)GraphAssembler::Float64ExtractLowWord32(pGVar1,pNVar5);
    pNVar4 = (Node *)GraphAssembler::Int32Constant(pGVar1,0);
    pNVar3 = (Node *)GraphAssembler::Word32Equal(pGVar1,pNVar3,pNVar4);
    pNVar4 = (Node *)GraphAssembler::Int32Constant(pGVar1,0);
    GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(pGVar1,pNVar3,local_88,pNVar4);
    pNVar5 = (Node *)GraphAssembler::Float64ExtractHighWord32(pGVar1,pNVar5);
    pNVar3 = (Node *)GraphAssembler::Int32Constant(pGVar1,-0x80000000);
    pNVar5 = (Node *)GraphAssembler::Word32Equal(pGVar1,pNVar5,pNVar3);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(pGVar1,local_88,pNVar5);
    GraphAssembler::GotoBasicBlock(pGVar1,local_80);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<1ul>(pGVar1,local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}

