
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32Add(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedInt32Add
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar2 = (Node *)GraphAssembler::Int32AddWithOverflow
                             (this_00,*(Node **)pNVar2,*(Node **)(pNVar2 + 8));
  uVar3 = GraphAssembler::Projection(this_00,1,pNVar2);
  local_48 = 0;
  local_40 = 0xffffffff;
  GraphAssembler::DeoptimizeIf(this_00,0x1f,&local_48,uVar3,param_2,1);
  GraphAssembler::Projection(this_00,0,pNVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

