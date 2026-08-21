
/* v8::internal::compiler::EffectControlLinearizer::LowerObjectIsNumber(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerObjectIsNumber
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  AccessBuilder *this_01;
  Node *pNVar4;
  FieldAccess aFStack_f8 [56];
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
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_78 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_70 = 0;
  local_80[0] = (GraphAssemblerLabel)0x0;
  local_7c = 1;
  local_b8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_b0 = 0;
  local_c0[0] = (GraphAssemblerLabel)0x0;
  local_bc = 1;
  local_88 = 1;
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar2 = (Node *)GraphAssembler::Word32And(this_00,pNVar4,pNVar2);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  pNVar2 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar2,pNVar3);
  GraphAssembler::GotoIf<>(this_00,pNVar2,local_80);
  AccessBuilder::ForMap(this_01);
  pNVar4 = (Node *)GraphAssembler::LoadField(this_00,aFStack_f8,pNVar4);
  pNVar2 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  pNVar4 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar4,pNVar2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_c0,pNVar4);
  GraphAssembler::GotoBasicBlock(this_00,local_b8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_80);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_c0,pNVar4);
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

