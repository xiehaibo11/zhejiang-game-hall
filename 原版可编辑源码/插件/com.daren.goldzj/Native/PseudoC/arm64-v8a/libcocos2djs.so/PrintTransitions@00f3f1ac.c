
/* v8::internal::TransitionsAccessor::PrintTransitions(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::TransitionsAccessor::PrintTransitions
          (TransitionsAccessor *this,basic_ostream *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  if (*(int *)(this + 0x20) == 4) {
    local_18 = *(undefined8 *)(this + 0x18);
    TransitionArray::PrintInternal((TransitionArray *)&local_18,param_1);
  }
  else if (*(int *)(this + 0x20) == 3) {
    uVar1 = *(ulong *)(this + 0x18) & 0xfffffffffffffffd;
    uVar2 = *(ulong *)(this + 0x18) & 0xffffffff00000000;
    PrintOneTransition(param_1,uVar2 | *(uint *)((uVar2 | *(uint *)(uVar1 + 0x17)) +
                                                 ((long)(int)((*(uint *)(uVar1 + 0xb) >> 10 & 0x3ff)
                                                             - 1) * 0xc00000000 + 0x1000000000 >>
                                                 0x20) + -1));
    return;
  }
  return;
}

