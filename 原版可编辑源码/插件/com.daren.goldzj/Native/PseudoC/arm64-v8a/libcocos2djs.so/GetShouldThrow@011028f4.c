
/* v8::internal::GetShouldThrow(v8::internal::Isolate*, v8::Maybe<v8::internal::ShouldThrow>) */

void v8::internal::GetShouldThrow(Isolate *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  void *local_5f0;
  void *local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8 [177];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2 & 0xff) == 0) {
    local_5f0 = *(void **)(param_1 + 0x2bc8);
    local_5d8[0] = Context::scope_info((Context *)&local_5f0);
    uVar4 = ScopeInfo::language_mode((ScopeInfo *)local_5d8);
    if ((uVar4 & 1) == 0) {
      StackFrameIterator::StackFrameIterator((StackFrameIterator *)local_5d8,param_1);
      while (local_50 != (long *)0x0) {
        iVar3 = (**(code **)(*local_50 + 8))();
        if ((iVar3 == 4) || (iVar3 = (**(code **)(*local_50 + 8))(), iVar3 == 0xc)) {
          local_5e8 = (void *)0x0;
          uStack_5e0 = 0;
          local_5f0 = (void *)0x0;
          (**(code **)(*local_50 + 0xa0))(local_50,&local_5f0);
          uVar1 = *(uint *)(*(long *)((long)local_5e8 + -8) + 0x1b);
          if (local_5f0 != (void *)0x0) {
            local_5e8 = local_5f0;
            operator_delete(local_5f0);
          }
          param_2 = (ulong)((uVar1 >> 6 ^ 0xffffffff) & 1);
          goto LAB_011029e4;
        }
        StackFrameIterator::Advance((StackFrameIterator *)local_5d8);
      }
      param_2 = 1;
    }
    else {
      param_2 = 0;
    }
  }
  else {
    param_2 = param_2 >> 0x20;
  }
LAB_011029e4:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}

