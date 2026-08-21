
/* v8::internal::compiler::EffectControlLinearizer::LowerTransitionAndStoreNonNumberElement(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerTransitionAndStoreNonNumberElement
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  long lVar3;
  AccessBuilder *pAVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 uVar7;
  AccessBuilder *this_01;
  ulong uVar8;
  long lVar9;
  Node *pNVar10;
  long local_150;
  GraphAssemblerLabel local_148 [4];
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  GraphAssemblerLabel local_110 [4];
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  GraphAssemblerLabel local_d8 [4];
  undefined4 local_d4;
  BasicBlock *local_d0;
  undefined8 uStack_c8;
  FieldAccess aFStack_a0 [8];
  long local_98;
  undefined1 local_8e;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar1 = *(Node **)pNVar5;
  pNVar2 = *(Node **)(pNVar5 + 8);
  pNVar10 = *(Node **)(pNVar5 + 0x10);
  this_00 = (GraphAssembler *)(this + 0x38);
  AccessBuilder::ForMap((AccessBuilder *)this);
  pAVar4 = (AccessBuilder *)GraphAssembler::LoadField(this_00,aFStack_a0,pNVar1);
  AccessBuilder::ForMapBitField2(pAVar4);
  pNVar5 = (Node *)GraphAssembler::LoadField(this_00,aFStack_a0,(Node *)pAVar4);
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,0xf8);
  pNVar5 = (Node *)GraphAssembler::Word32And(this_00,pNVar5,pNVar6);
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,3);
  pNVar5 = (Node *)GraphAssembler::Word32Shr(this_00,pNVar5,pNVar6);
  local_d0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_c8 = 0;
  local_d8[0] = (GraphAssemblerLabel)0x0;
  local_d4 = 1;
  local_108 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_100 = 0;
  local_110[0] = (GraphAssemblerLabel)0x0;
  local_10c = 0;
  local_140 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_138 = 0;
  local_148[0] = (GraphAssemblerLabel)0x0;
  local_144 = 0;
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar6 = (Node *)GraphAssembler::Int32LessThan(this_00,pNVar6,pNVar5);
  GraphAssembler::GotoIfNot<>(this_00,pNVar6,local_110);
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,3);
  pNVar5 = (Node *)GraphAssembler::Int32LessThan(this_00,pNVar6,pNVar5);
  GraphAssembler::GotoIf<>(this_00,pNVar5,local_148);
  GraphAssembler::MergeState<>(this_00,local_d8);
  GraphAssembler::GotoBasicBlock(this_00,local_d0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_110);
  uVar7 = FastMapParameterOf(*(Operator **)param_1);
  pAVar4 = (AccessBuilder *)GraphAssembler::HeapConstant(this_00,uVar7);
  AccessBuilder::ForMap(pAVar4);
  GraphAssembler::StoreField(this_00,aFStack_a0,pNVar1,(Node *)pAVar4);
  GraphAssembler::MergeState<>(this_00,local_d8);
  GraphAssembler::GotoBasicBlock(this_00,local_d0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_148);
  TransitionElementsTo(this,param_1,pNVar1,5,3);
  GraphAssembler::MergeState<>(this_00,local_d8);
  GraphAssembler::GotoBasicBlock(this_00,local_d0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_d8);
  AccessBuilder::ForJSObjectElements(this_01);
  pNVar5 = (Node *)GraphAssembler::LoadField(this_00,aFStack_a0,pNVar1);
  AccessBuilder::ForFixedArrayElement((AccessBuilder *)aFStack_a0,3,1);
  local_150 = ValueTypeParameterOf(*(Operator **)param_1);
  if (local_150 == 0x381) {
    lVar9 = 0x381;
  }
  else {
    uVar8 = Type::SlowIs((Type *)&local_150,0x381);
    lVar9 = local_150;
    if ((uVar8 & 1) == 0) goto LAB_016b0934;
  }
  local_8e = 0;
  local_98 = lVar9;
LAB_016b0934:
  GraphAssembler::StoreElement(this_00,(ElementAccess *)aFStack_a0,pNVar5,pNVar2,pNVar10);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

