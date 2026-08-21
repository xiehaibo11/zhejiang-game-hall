
/* v8::internal::JSFunction::HasOptimizedCode() */

bool __thiscall v8::internal::JSFunction::HasOptimizedCode(JSFunction *this)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)this;
  uVar3 = uVar4 & 0xffffffff00000000;
  if (*(int *)((uVar3 | *(uint *)(uVar4 + 0x17)) + 0x27) != 0x42) {
    uVar1 = *(uint *)((uVar3 | *(uint *)(uVar4 + 0xb)) + 3);
    if ((uVar1 != 0x84) &&
       (((uVar1 & 1) == 0 ||
        (1 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95)))) {
      uVar4 = *(ulong *)this;
      uVar3 = uVar4 & 0xffffffff00000000;
      if (((*(byte *)((uVar3 | *(uint *)(uVar4 + 0x17)) + 0x17) & 0x3e) == 0) &&
         ((*(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(uVar4 + 0x17)) + 0xf)) + 7) & 1) == 0)) {
        return true;
      }
    }
  }
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar3 | *(uint *)(*(ulong *)this + 0xb)) + 3);
  if ((uVar1 != 0x84) &&
     (((uVar1 & 1) == 0 ||
      (1 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95)))) {
    uVar3 = *(ulong *)this & 0xffffffff00000000;
    uVar4 = uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)this + 0x13)) + 3);
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x9f) {
      uVar1 = *(uint *)(uVar4 + 7);
      bVar2 = false;
      if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
        uVar3 = -((ulong)uVar1 & 1) & ((ulong)uVar1 & 0xfffffffffffffffd | uVar3);
        bVar2 = (*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xf)) + 7) & 1) ==
                0;
      }
      return bVar2;
    }
  }
  return false;
}

