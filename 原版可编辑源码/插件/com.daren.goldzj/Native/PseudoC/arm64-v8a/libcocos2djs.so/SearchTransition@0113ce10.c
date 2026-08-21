
/* v8::internal::TransitionsAccessor::SearchTransition(v8::internal::Name,
   v8::internal::PropertyKind, v8::internal::PropertyAttributes) */

ulong __thiscall
v8::internal::TransitionsAccessor::SearchTransition
          (TransitionsAccessor *this,undefined8 param_2,uint param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_18;
  
  uVar1 = *(uint *)(this + 0x20);
  if (2 < uVar1) {
    if (uVar1 == 4) {
      local_18 = *(undefined8 *)(this + 0x18);
      uVar2 = TransitionArray::SearchAndGetTarget(&local_18,param_3,param_2);
      return uVar2;
    }
    if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar2 = *(ulong *)(this + 0x18) & 0xfffffffffffffffd;
    uVar3 = *(ulong *)(this + 0x18) & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x17);
    uVar4 = (long)(int)((*(uint *)(uVar2 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 + 0x1000000000 >>
            0x20;
    if (*(int *)(uVar3 + uVar4 + -1) == (int)param_2) {
      if ((*(uint *)((uVar4 | 3) + uVar3) >> 1 & 0x39) == (param_3 | param_4 << 3)) {
        return uVar2;
      }
      return 0;
    }
  }
  return 0;
}

