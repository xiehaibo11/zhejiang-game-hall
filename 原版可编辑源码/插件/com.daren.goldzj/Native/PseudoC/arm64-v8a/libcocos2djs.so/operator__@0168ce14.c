
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::DeoptimizeParameters,
   v8::internal::compiler::DeoptimizeParameters) */

void v8::internal::compiler::operator!=(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
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
  uStack_48 = param_1[1];
  local_50 = *param_1;
  local_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_68 = param_2[1];
  local_70 = *param_2;
  local_58 = param_2[3];
  uStack_60 = param_2[2];
  bVar2 = (char)local_50 == (char)local_70;
  if (((bVar2) &&
      (local_50._1_1_ = (char)((ulong)local_50 >> 8), local_70._1_1_ = (char)((ulong)local_70 >> 8),
      bVar2 = local_50._1_1_ == local_70._1_1_, bVar2)) &&
     (uVar3 = operator==((FeedbackSource *)((ulong)&local_50 | 8),
                         (FeedbackSource *)((ulong)&local_70 | 8)), (uVar3 & 1) != 0)) {
    bVar2 = (char)local_38 != (char)local_58;
  }
  else {
    bVar2 = true;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

