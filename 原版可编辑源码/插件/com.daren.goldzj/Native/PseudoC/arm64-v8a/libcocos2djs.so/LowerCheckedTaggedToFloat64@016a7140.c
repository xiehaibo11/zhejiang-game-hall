
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedTaggedToFloat64(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedTaggedToFloat64
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined1 *puVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
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
  puVar2 = (undefined1 *)CheckTaggedInputParametersOf(*(Operator **)param_1);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_88 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 1;
  local_c8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_c0 = 0;
  local_d0[0] = (GraphAssemblerLabel)0x0;
  local_cc = 1;
  local_98 = 0xc;
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar3 = (Node *)GraphAssembler::Word32And(this_00,pNVar5,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar3,pNVar4);
  GraphAssembler::GotoIf<>(this_00,pNVar3,local_90);
  pNVar3 = (Node *)BuildCheckedHeapNumberOrOddballToFloat64(this,*puVar2,puVar2 + 8,pNVar5,param_2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_c8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_90);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar5 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,pNVar5);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar3 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    pNVar5 = (Node *)GraphAssembler::Word32Sar(this_00,pNVar5,pNVar3);
  }
  else {
    pNVar5 = (Node *)ChangeSmiToIntPtr(this,pNVar5);
  }
  pNVar5 = (Node *)GraphAssembler::ChangeInt32ToFloat64(this_00,pNVar5);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar5);
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

