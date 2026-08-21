
/* v8::internal::compiler::EffectControlLinearizer::LowerStoreDataViewElement(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStoreDataViewElement
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  Node *pNVar3;
  long lVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  Node *pNVar7;
  Node *pNVar8;
  GraphAssemblerLabel local_e0 [4];
  undefined4 local_dc;
  BasicBlock *local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined1 local_a8;
  GraphAssemblerLabel local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = ExternalArrayTypeOf(*(Operator **)param_1);
  pNVar7 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  uVar2 = *(undefined8 *)(pNVar7 + 8);
  uVar1 = *(undefined8 *)(pNVar7 + 0x10);
  pNVar3 = *(Node **)(pNVar7 + 0x18);
  pNVar8 = *(Node **)(pNVar7 + 0x20);
  this_00 = (GraphAssembler *)(this + 0x38);
  GraphAssembler::Retain(this_00,*(Node **)pNVar7);
  AccessBuilder::ForTypedArrayElement((AccessBuilder *)local_e0,uVar6,1,1);
  uVar5 = (undefined1)local_d0;
  local_98 = GraphAssembler::NewBasicBlock(this_00,false);
  uStack_90 = 0;
  local_a0[0] = (GraphAssemblerLabel)0x0;
  local_9c = 1;
  local_d8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  local_d0 = 0;
  local_e0[0] = (GraphAssemblerLabel)0x0;
  local_dc = 1;
  local_a8 = uVar5;
  GraphAssembler::GotoIfNot<>(this_00,pNVar8,local_a0);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_e0,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_d8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_a0);
  pNVar7 = (Node *)BuildReverseBytes(this,uVar6,pNVar3);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_e0,pNVar7);
  GraphAssembler::GotoBasicBlock(this_00,local_d8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_e0);
  GraphAssembler::StoreUnaligned(this_00,uVar5,uVar2,uVar1,local_b8);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

