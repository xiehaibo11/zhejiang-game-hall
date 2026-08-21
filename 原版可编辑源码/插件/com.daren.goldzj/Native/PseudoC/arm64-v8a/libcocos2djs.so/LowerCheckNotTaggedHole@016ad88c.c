
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckNotTaggedHole(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckNotTaggedHole
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::TheHoleConstant(this_00);
  uVar3 = GraphAssembler::TaggedEqual(this_00,pNVar4,pNVar2);
  local_48 = 0;
  local_40 = 0xffffffff;
  GraphAssembler::DeoptimizeIf(this_00,6,&local_48,uVar3,param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pNVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

