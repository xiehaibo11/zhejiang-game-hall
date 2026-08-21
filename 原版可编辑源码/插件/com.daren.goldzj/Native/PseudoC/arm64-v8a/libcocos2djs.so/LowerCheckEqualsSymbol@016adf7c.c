
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckEqualsSymbol(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckEqualsSymbol
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  long lVar1;
  undefined8 uVar2;
  Node *pNVar3;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  uVar2 = GraphAssembler::TaggedEqual
                    ((GraphAssembler *)(this + 0x38),*(Node **)pNVar3,*(Node **)(pNVar3 + 8));
  local_48 = 0;
  local_40 = 0xffffffff;
  GraphAssembler::DeoptimizeIfNot((GraphAssembler *)(this + 0x38),0x27,&local_48,uVar2,param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

