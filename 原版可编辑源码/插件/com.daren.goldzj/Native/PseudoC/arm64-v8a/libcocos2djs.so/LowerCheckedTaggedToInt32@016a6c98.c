
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedTaggedToInt32(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedTaggedToInt32
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined1 *puVar2;
  Node *pNVar3;
  Node *pNVar4;
  AccessBuilder *this_01;
  undefined8 uVar5;
  AccessBuilder *this_02;
  Node *pNVar6;
  FieldAccess aFStack_108 [56];
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
  puVar2 = (undefined1 *)CheckMinusZeroParametersOf(*(Operator **)param_1);
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar6 = *(Node **)pNVar6;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_88 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_80 = 0;
  local_90[0] = (GraphAssemblerLabel)0x0;
  local_8c = 0;
  local_c8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_c0 = 0;
  local_d0[0] = (GraphAssemblerLabel)0x0;
  local_cc = 1;
  local_98 = 4;
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar3 = (Node *)GraphAssembler::Word32And(this_00,pNVar6,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar3,pNVar4);
  GraphAssembler::GotoIfNot<>(this_00,pNVar3,local_90);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar3 = (Node *)GraphAssembler::TruncateInt64ToInt32(this_00,pNVar6);
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
      pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    }
    else {
      pNVar4 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    }
    pNVar3 = (Node *)GraphAssembler::Word32Sar(this_00,pNVar3,pNVar4);
  }
  else {
    pNVar3 = (Node *)ChangeSmiToIntPtr(this,pNVar6);
  }
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_c8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_90);
  AccessBuilder::ForMap(this_01);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,aFStack_108,pNVar6);
  pNVar4 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  uVar5 = GraphAssembler::TaggedEqual(this_00,pNVar3,pNVar4);
  this_02 = (AccessBuilder *)
            GraphAssembler::DeoptimizeIfNot(this_00,0x15,puVar2 + 8,uVar5,param_2,1);
  AccessBuilder::ForHeapNumberValue(this_02);
  uVar5 = GraphAssembler::LoadField(this_00,aFStack_108,pNVar6);
  pNVar6 = (Node *)BuildCheckedFloat64ToInt32(this,*puVar2,puVar2 + 8,uVar5,param_2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar6);
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

