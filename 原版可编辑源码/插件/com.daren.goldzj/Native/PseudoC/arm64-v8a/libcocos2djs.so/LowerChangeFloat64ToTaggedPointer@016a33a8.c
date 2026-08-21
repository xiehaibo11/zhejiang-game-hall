
/* v8::internal::compiler::EffectControlLinearizer::LowerChangeFloat64ToTaggedPointer(v8::internal::compiler::Node*)
    */

AccessBuilder * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerChangeFloat64ToTaggedPointer
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined8 uVar2;
  AccessBuilder *this_01;
  Node *pNVar3;
  AccessBuilder *this_02;
  Node *pNVar4;
  FieldAccess aFStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  this_00 = (GraphAssembler *)(this + 0x38);
  uVar2 = GraphAssembler::IntPtrConstant(this_00,0xc);
  this_01 = (AccessBuilder *)GraphAssembler::Allocate(this_00,0,uVar2);
  AccessBuilder::ForMap(this_01);
  pNVar3 = (Node *)GraphAssembler::HeapNumberMapConstant(this_00);
  this_02 = (AccessBuilder *)GraphAssembler::StoreField(this_00,aFStack_70,(Node *)this_01,pNVar3);
  AccessBuilder::ForHeapNumberValue(this_02);
  GraphAssembler::StoreField(this_00,aFStack_70,(Node *)this_01,pNVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

