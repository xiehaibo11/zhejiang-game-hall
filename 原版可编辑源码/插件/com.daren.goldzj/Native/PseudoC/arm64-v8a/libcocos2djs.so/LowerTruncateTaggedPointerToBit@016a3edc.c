
/* v8::internal::compiler::EffectControlLinearizer::LowerTruncateTaggedPointerToBit(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerTruncateTaggedPointerToBit
          (EffectControlLinearizer *this,Node *param_1)

{
  long lVar1;
  GraphAssemblerLabel local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = GraphAssembler::NewBasicBlock((GraphAssembler *)(this + 0x38),false);
  uStack_68 = 0;
  local_78[0] = (GraphAssemblerLabel)0x0;
  local_74 = 1;
  local_40 = 1;
  TruncateTaggedPointerToBit(this,param_1,local_78);
  GraphAssembler::Bind<1ul>((GraphAssembler *)(this + 0x38),local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50);
}

