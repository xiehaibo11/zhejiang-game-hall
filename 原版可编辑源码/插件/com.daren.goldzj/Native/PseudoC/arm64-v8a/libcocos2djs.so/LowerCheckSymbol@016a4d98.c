
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckSymbol(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckSymbol
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *pNVar5;
  undefined8 local_80;
  undefined4 local_78;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar5 = *(Node **)pNVar5;
  this_00 = (GraphAssembler *)(this + 0x38);
  AccessBuilder::ForMap((AccessBuilder *)this);
  pNVar2 = (Node *)GraphAssembler::LoadField(this_00,(FieldAccess *)&local_80,pNVar5);
  pNVar3 = (Node *)GraphAssembler::HeapConstant(this_00,*(long *)(*(long *)this + 0x168) + 0xf8);
  uVar4 = GraphAssembler::TaggedEqual(this_00,pNVar2,pNVar3);
  local_80 = 0;
  local_78 = 0xffffffff;
  GraphAssembler::DeoptimizeIfNot(this_00,0x1c,&local_80,uVar4,param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pNVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

