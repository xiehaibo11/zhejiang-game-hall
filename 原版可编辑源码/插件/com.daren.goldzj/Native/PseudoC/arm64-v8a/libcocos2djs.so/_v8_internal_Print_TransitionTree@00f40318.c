
/* _v8_internal_Print_TransitionTree(void*) */

void _v8_internal_Print_TransitionTree(void *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long local_50 [2];
  void *local_40;
  ulong local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((ulong)param_1 >> 0x20 == 0) {
    uVar3 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
    param_1 = (void *)(uVar3 & 0xffffffff00000000 | (ulong)param_1 & 0xffffffff);
  }
  if ((((ulong)param_1 & 1) == 0) ||
     (*(short *)(((ulong)param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)param_1 + -1))
      != 0xa2)) {
    uVar2 = puts("Please provide a valid Map");
    uVar3 = (ulong)uVar2;
  }
  else {
    local_50[0] = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
    local_50[1] = 0;
    local_38 = (ulong)*(uint *)((long)param_1 + 0x23) + local_50[0];
    local_40 = param_1;
    if (((local_38 & 1) == 0) || ((int)local_38 == 3)) {
      local_30 = 1;
    }
    else if ((local_38 & 3) == 1) {
      uVar3 = local_38 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) == 0x98) {
        local_30 = 4;
      }
      else if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) == 100) {
        local_30 = 0;
      }
      else {
        local_30 = 2;
      }
    }
    else {
      if ((local_38 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_30 = 3;
    }
    uVar3 = v8::internal::TransitionsAccessor::PrintTransitionTree((TransitionsAccessor *)local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

