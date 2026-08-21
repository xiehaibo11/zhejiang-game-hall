
/* v8::internal::compiler::Operator1<v8::internal::compiler::DeoptimizeParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::DeoptimizeParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>>
::Equals(Operator1<v8::internal::compiler::DeoptimizeParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>>
         *this,Operator *param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    uStack_48 = *(undefined8 *)(this + 0x38);
    uVar5 = *(undefined8 *)(this + 0x30);
    local_38 = *(undefined8 *)(this + 0x48);
    uStack_40 = *(undefined8 *)(this + 0x40);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    local_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    local_50._0_1_ = (char)uVar5;
    local_70._0_1_ = (char)uVar4;
    bVar2 = (char)local_50 == (char)local_70;
    local_70 = uVar4;
    local_50 = uVar5;
    if (((bVar2) &&
        (local_50._1_1_ = (char)((ulong)uVar5 >> 8), local_70._1_1_ = (char)((ulong)uVar4 >> 8),
        bVar2 = local_50._1_1_ == local_70._1_1_, bVar2)) &&
       (uVar3 = compiler::operator==
                          ((FeedbackSource *)((ulong)&local_50 | 8),
                           (FeedbackSource *)((ulong)&local_70 | 8)), (uVar3 & 1) != 0)) {
      bVar2 = (char)local_38 == (char)local_58;
      goto LAB_01693258;
    }
  }
  bVar2 = false;
LAB_01693258:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

