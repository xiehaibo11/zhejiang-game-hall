
/* v8::internal::compiler::EffectControlLinearizer::LowerObjectIsNaN(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerObjectIsNaN
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node *pNVar4;
  AccessBuilder *this_01;
  AccessBuilder *this_02;
  Node *pNVar5;
  FieldAccess aFStack_c0 [56];
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
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar3 = (Node *)GraphAssembler::Word32And(this_00,pNVar5,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar3 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar3,pNVar4);
  GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar3,local_88,pNVar2);
  AccessBuilder::ForMap(this_01);
  pNVar3 = (Node *)GraphAssembler::LoadField(this_00,aFStack_c0,pNVar5);
  pNVar4 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  pNVar3 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar3,pNVar4);
  GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(this_00,pNVar3,local_88,pNVar2);
  AccessBuilder::ForHeapNumberValue(this_02);
  pNVar5 = (Node *)GraphAssembler::LoadField(this_00,aFStack_c0,pNVar5);
  pNVar5 = (Node *)GraphAssembler::Float64Equal(this_00,pNVar5,pNVar5);
  pNVar5 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar5,pNVar2);
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

