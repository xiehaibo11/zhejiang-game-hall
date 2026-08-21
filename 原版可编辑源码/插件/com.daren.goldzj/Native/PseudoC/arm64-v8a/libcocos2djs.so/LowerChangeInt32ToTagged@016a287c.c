
/* v8::internal::compiler::EffectControlLinearizer::LowerChangeInt32ToTagged(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerChangeInt32ToTagged
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  AccessBuilder *this_01;
  AccessBuilder *this_02;
  Node *pNVar5;
  GraphAssemblerLabel local_f8 [4];
  undefined4 local_f4;
  BasicBlock *local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined1 local_c0;
  GraphAssemblerLabel local_b8 [4];
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  FieldAccess aFStack_80 [56];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_b0 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_a8 = 0;
  local_b8[0] = (GraphAssemblerLabel)0x0;
  local_b4 = 0;
  local_f0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_e8 = 0;
  local_f8[0] = (GraphAssemblerLabel)0x0;
  local_f4 = 1;
  local_c0 = 8;
  pNVar2 = (Node *)GraphAssembler::Int32AddWithOverflow(this_00,pNVar5,pNVar5);
  pNVar3 = (Node *)GraphAssembler::Projection(this_00,1,pNVar2);
  GraphAssembler::GotoIf<>(this_00,pNVar3,local_b8);
  pNVar2 = (Node *)GraphAssembler::Projection(this_00,0,pNVar2);
  pNVar2 = (Node *)GraphAssembler::BitcastWord32ToWord64(this_00,pNVar2);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_f8,pNVar2);
  GraphAssembler::GotoBasicBlock(this_00,local_f0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_b8);
  pNVar5 = (Node *)GraphAssembler::ChangeInt32ToFloat64(this_00,pNVar5);
  uVar4 = GraphAssembler::IntPtrConstant(this_00,0xc);
  this_01 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar4);
  AccessBuilder::ForMap(this_01);
  pNVar2 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  this_02 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_80,(Node *)this_01,pNVar2);
  AccessBuilder::ForHeapNumberValue(this_02);
  GraphAssembler::StoreField(this_00,aFStack_80,(Node *)this_01,pNVar5);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_f8,(Node *)this_01);
  GraphAssembler::GotoBasicBlock(this_00,local_f0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_f8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_d0);
}

