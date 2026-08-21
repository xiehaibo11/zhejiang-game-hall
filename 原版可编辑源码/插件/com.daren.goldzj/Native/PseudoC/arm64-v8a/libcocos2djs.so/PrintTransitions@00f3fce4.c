
/* v8::internal::JSObject::PrintTransitions(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::JSObject::PrintTransitions(JSObject *this,basic_ostream *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  int local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_50[0] = *(ulong *)this & 0xffffffff00000000;
  local_50[1] = 0;
  local_50[2] = local_50[0] | *(uint *)(*(ulong *)this - 1);
  uVar1 = *(uint *)(local_50[2] + 0x23);
  local_38 = local_50[0] | uVar1;
  if ((uVar1 == 3) || ((uVar1 & 1) == 0)) {
    local_30 = 1;
  }
  else {
    uVar4 = (ulong)uVar1 & 3;
    if (uVar4 == 1) {
      if (*(short *)((local_50[0] | 7) + (ulong)*(uint *)(local_38 - 1)) == 0x98) {
        local_30 = 4;
      }
      else if (*(short *)((local_50[0] | 7) + (ulong)*(uint *)(local_38 - 1)) == 100) {
        local_30 = 0;
      }
      else {
        local_30 = 2;
      }
    }
    else {
      if (uVar4 != 3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_30 = 3;
    }
  }
  iVar3 = TransitionsAccessor::NumberOfTransitions((TransitionsAccessor *)local_50);
  if (iVar3 != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - transitions",0xf);
    if (local_30 == 4) {
      local_58 = local_38;
      TransitionArray::PrintInternal((TransitionArray *)&local_58,param_1);
    }
    else if (local_30 == 3) {
      TransitionsAccessor::PrintOneTransition
                (param_1,local_38 & 0xffffffff00000000 |
                         (ulong)*(uint *)((local_38 & 0xffffffff00000000 |
                                          (ulong)*(uint *)((local_38 & 0xfffffffffffffffd) + 0x17))
                                          + ((long)(int)((*(uint *)((local_38 & 0xfffffffffffffffd)
                                                                   + 0xb) >> 10 & 0x3ff) - 1) *
                                             0xc00000000 + 0x1000000000 >> 0x20) + -1));
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

