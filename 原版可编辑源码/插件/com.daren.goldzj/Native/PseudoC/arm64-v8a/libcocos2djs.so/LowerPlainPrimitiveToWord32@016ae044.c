
/* v8::internal::compiler::EffectControlLinearizer::LowerPlainPrimitiveToWord32(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerPlainPrimitiveToWord32
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  AccessBuilder *this_01;
  Node *pNVar4;
  EffectControlLinearizer *pEVar5;
  FieldAccess aFStack_140 [56];
  GraphAssemblerLabel local_108 [4];
  undefined4 local_104;
  BasicBlock *local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined1 local_d0;
  GraphAssemblerLabel local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  GraphAssemblerLabel local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_88 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 0;
  local_c0 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_b8 = 0;
  local_c8[0] = (GraphAssemblerLabel)0x0;
  local_c4 = 1;
  local_100 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_f8 = 0;
  local_108[0] = (GraphAssemblerLabel)0x0;
  local_104 = 1;
  local_d0 = 4;
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar2 = (Node *)GraphAssembler::Word32And(this_00,pNVar4,pNVar2);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar2 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar2,pNVar3);
  GraphAssembler::GotoIfNot<>(this_00,pNVar2,local_90);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar2 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,pNVar4);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar3 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    pNVar2 = (Node *)GraphAssembler::Word32Sar(this_00,pNVar2,pNVar3);
  }
  else {
    pNVar2 = (Node *)ChangeSmiToIntPtr(this,pNVar4);
  }
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_108,pNVar2);
  GraphAssembler::GotoBasicBlock(this_00,local_100);
  pEVar5 = this + 0x58;
  *(undefined8 *)pEVar5 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_90);
  pNVar4 = (Node *)GraphAssembler::ToNumber(this_00,pNVar4);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar2 = (Node *)GraphAssembler::Word32And(this_00,pNVar4,pNVar2);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar2 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar2,pNVar3);
  GraphAssembler::GotoIf<>(this_00,pNVar2,local_c8);
  AccessBuilder::ForHeapNumberValue(this_01);
  pNVar2 = (Node *)GraphAssembler::LoadField(this_00,aFStack_140,pNVar4);
  pNVar2 = (Node *)GraphAssembler::TruncateFloat64ToWord32(this_00,pNVar2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_108,pNVar2);
  GraphAssembler::GotoBasicBlock(this_00,local_100);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)pEVar5 = 0;
  GraphAssembler::Bind<0ul>(this_00,local_c8);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar4 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,pNVar4);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar2 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    pNVar4 = (Node *)GraphAssembler::Word32Sar(this_00,pNVar4,pNVar2);
  }
  else {
    pNVar4 = (Node *)ChangeSmiToIntPtr(this,pNVar4);
  }
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_108,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_100);
  *(undefined8 *)pEVar5 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_108);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_e0);
}

