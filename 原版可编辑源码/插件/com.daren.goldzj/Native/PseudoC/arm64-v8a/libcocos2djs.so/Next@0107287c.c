
/* v8::internal::Code::OptimizedCodeIterator::Next() */

ulong __thiscall v8::internal::Code::OptimizedCodeIterator::Next(OptimizedCodeIterator *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if ((int)uVar2 != 0) {
    uVar1 = *(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xf)) + 3);
    uVar2 = uVar2 & 0xffffffff00000000 | (ulong)uVar1;
    if ((uVar1 & 1) == 0) goto LAB_01072898;
    goto LAB_01072914;
  }
  do {
    if (*(int *)this == 0) {
      return 0;
    }
    uVar2 = NativeContext::OptimizedCodeListHead((NativeContext *)this);
    uVar1 = *(uint *)(*(ulong *)this + 0x41f);
    if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(*(long *)(this + 0x10) + 0xa0))) {
      *(ulong *)this = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar1;
    }
    else {
      *(undefined8 *)this = 0;
    }
    if ((uVar2 & 1) != 0) {
LAB_01072914:
      if ((int)uVar2 == *(int *)(*(long *)(this + 0x10) + 0xa0)) {
        uVar2 = 0;
      }
    }
LAB_01072898:
    *(ulong *)(this + 8) = uVar2;
  } while ((int)uVar2 == 0);
  return uVar2;
}

