
/* v8::internal::compiler::EffectControlLinearizer::LowerChangeFloat64ToTagged(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerChangeFloat64ToTagged
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  char cVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 uVar6;
  AccessBuilder *this_01;
  AccessBuilder *this_02;
  EffectControlLinearizer *pEVar7;
  Node *pNVar8;
  GraphAssemblerLabel local_178 [4];
  undefined4 local_174;
  BasicBlock *local_170;
  undefined8 uStack_168;
  GraphAssemblerLabel local_140 [4];
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  GraphAssemblerLabel local_108 [4];
  undefined4 local_104;
  BasicBlock *local_100;
  undefined8 uStack_f8;
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
  cVar2 = CheckMinusZeroModeOf(*(Operator **)param_1);
  pNVar8 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  pNVar8 = *(Node **)pNVar8;
  this_00 = (GraphAssembler *)(this + 0x38);
  local_c8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_c0 = 0;
  local_d0[0] = (GraphAssemblerLabel)0x0;
  local_cc = 1;
  local_98 = 8;
  local_100 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,true);
  uStack_f8 = 0;
  local_108[0] = (GraphAssemblerLabel)0x0;
  local_104 = 0;
  local_138 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_130 = 0;
  local_140[0] = (GraphAssemblerLabel)0x0;
  local_13c = 1;
  pNVar3 = (Node *)GraphAssembler::RoundFloat64ToInt32(this_00,pNVar8);
  pNVar4 = (Node *)GraphAssembler::ChangeInt32ToFloat64(this_00,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Float64Equal(this_00,pNVar8,pNVar4);
  GraphAssembler::GotoIf<>(this_00,pNVar4,local_140);
  GraphAssembler::MergeState<>(this_00,local_108);
  GraphAssembler::GotoBasicBlock(this_00,local_100);
  pEVar7 = this + 0x58;
  *(undefined8 *)pEVar7 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_140);
  if (cVar2 == '\0') {
    pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
    local_88 = GraphAssembler::NewBasicBlock(this_00,true);
    uStack_80 = 0;
    local_90[0] = (GraphAssemblerLabel)0x0;
    local_8c = 0;
    local_170 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_168 = 0;
    local_178[0] = (GraphAssemblerLabel)0x0;
    local_174 = 1;
    pNVar5 = (Node *)GraphAssembler::Word32Equal(this_00,pNVar3,pNVar4);
    GraphAssembler::GotoIf<>(this_00,pNVar5,local_90);
    GraphAssembler::MergeState<>(this_00,local_178);
    GraphAssembler::GotoBasicBlock(this_00,local_170);
    *(undefined8 *)pEVar7 = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_90);
    pNVar5 = (Node *)GraphAssembler::Float64ExtractHighWord32(this_00,pNVar8);
    pNVar4 = (Node *)GraphAssembler::Int32LessThan(this_00,pNVar5,pNVar4);
    GraphAssembler::GotoIf<>(this_00,pNVar4,local_108);
    GraphAssembler::MergeState<>(this_00,local_178);
    GraphAssembler::GotoBasicBlock(this_00,local_170);
    *(undefined8 *)pEVar7 = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_178);
  }
  pNVar3 = (Node *)GraphAssembler::Int32AddWithOverflow(this_00,pNVar3,pNVar3);
  pNVar4 = (Node *)GraphAssembler::Projection(this_00,1,pNVar3);
  GraphAssembler::GotoIf<>(this_00,pNVar4,local_108);
  pNVar3 = (Node *)GraphAssembler::Projection(this_00,0,pNVar3);
  pNVar3 = (Node *)GraphAssembler::BitcastWord32ToWord64(this_00,pNVar3);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_c8);
  *(undefined8 *)pEVar7 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_108);
  uVar6 = GraphAssembler::IntPtrConstant(this_00,0xc);
  this_01 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar6);
  AccessBuilder::ForMap(this_01);
  pNVar3 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  this_02 = (AccessBuilder *)
            GraphAssembler::StoreField(this_00,(FieldAccess *)local_90,(Node *)this_01,pNVar3);
  AccessBuilder::ForHeapNumberValue(this_02);
  GraphAssembler::StoreField(this_00,(FieldAccess *)local_90,(Node *)this_01,pNVar8);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,(Node *)this_01);
  GraphAssembler::GotoBasicBlock(this_00,local_c8);
  *(undefined8 *)pEVar7 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_d0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8);
}

