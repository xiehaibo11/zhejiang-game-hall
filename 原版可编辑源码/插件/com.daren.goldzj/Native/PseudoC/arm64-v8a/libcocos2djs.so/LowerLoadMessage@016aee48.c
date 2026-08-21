
/* v8::internal::compiler::EffectControlLinearizer::LowerLoadMessage(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerLoadMessage
          (EffectControlLinearizer *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  FieldAccess aFStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  pNVar2 = *(Node **)pNVar2;
  AccessBuilder::ForExternalIntPtr((AccessBuilder *)this);
  pNVar2 = (Node *)GraphAssembler::LoadField((GraphAssembler *)(this + 0x38),aFStack_70,pNVar2);
  GraphAssembler::BitcastWordToTagged((GraphAssembler *)(this + 0x38),pNVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

