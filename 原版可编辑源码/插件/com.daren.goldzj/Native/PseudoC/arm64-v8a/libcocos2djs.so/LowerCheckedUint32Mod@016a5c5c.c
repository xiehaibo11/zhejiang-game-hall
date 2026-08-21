
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint32Mod(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint32Mod
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  long lVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *pNVar5;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar1 = *(Node **)pNVar5;
  pNVar5 = *(Node **)(pNVar5 + 8);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar3 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  uVar4 = GraphAssembler::Word32Equal(this_00,pNVar5,pNVar3);
  local_58 = 0;
  local_50 = 0xffffffff;
  GraphAssembler::DeoptimizeIf(this_00,5,&local_58,uVar4,param_2,1);
  BuildUint32Mod(this,pNVar1,pNVar5);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

