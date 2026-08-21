
/* v8::internal::compiler::EffectControlLinearizer::LowerStoreMessage(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStoreMessage
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  long lVar2;
  AccessBuilder *this_00;
  Node *pNVar3;
  FieldAccess aFStack_70 [56];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  pNVar1 = *(Node **)pNVar3;
  this_00 = (AccessBuilder *)
            GraphAssembler::BitcastTaggedToWord
                      ((GraphAssembler *)(this + 0x38),*(Node **)(pNVar3 + 8));
  AccessBuilder::ForExternalIntPtr(this_00);
  GraphAssembler::StoreField((GraphAssembler *)(this + 0x38),aFStack_70,pNVar1,(Node *)this_00);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

