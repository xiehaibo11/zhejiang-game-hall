
/* v8::internal::SharedFunctionInfo::AreSourcePositionsAvailable() const */

bool __thiscall
v8::internal::SharedFunctionInfo::AreSourcePositionsAvailable(SharedFunctionInfo *this)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (FLAG_enable_lazy_source_positions != '\0') {
    uVar2 = *(uint *)(*(ulong *)this + 3);
    if (((uVar2 & 1) == 0) ||
       (uVar1 = *(ulong *)this & 0xffffffff00000000,
       *(short *)((uVar1 | 7) + (ulong)*(uint *)((uVar1 | uVar2) - 1)) != 0x86)) {
      uVar2 = *(uint *)(*(ulong *)this + 3);
      if ((uVar2 & 1) == 0) {
        return true;
      }
      uVar1 = *(ulong *)this & 0xffffffff00000000;
      if (*(short *)((uVar1 | 7) + (ulong)*(uint *)((uVar1 | uVar2) - 1)) != 0x61) {
        return true;
      }
    }
    uVar4 = *(ulong *)this;
    uVar1 = uVar4 & 0xffffffff00000000;
    uVar5 = uVar1 | *(uint *)(uVar4 + 0xf);
    uVar3 = uVar1 | 7;
    if ((*(short *)(uVar3 + *(uint *)(uVar5 - 1)) == 0x5b) &&
       (*(short *)(uVar3 + *(uint *)((uVar1 | *(uint *)(uVar5 + 0x13)) - 1)) == 0x86)) {
      uVar2 = *(uint *)(uVar5 + 0xf);
    }
    else if (((*(uint *)(uVar4 + 3) & 1) == 0) ||
            (*(short *)(uVar3 + *(uint *)((uVar1 | *(uint *)(uVar4 + 3)) - 1)) != 0x86)) {
      uVar1 = *(ulong *)this & 0xffffffff00000000;
      uVar2 = *(uint *)((uVar1 | *(uint *)(*(ulong *)this + 3)) + 3);
    }
    else {
      uVar2 = *(uint *)(*(ulong *)this + 3);
      uVar1 = *(ulong *)this & 0xffffffff00000000;
    }
    uVar2 = *(uint *)((uVar1 | uVar2) + 0xf);
    if ((uVar2 & 1) != 0) {
      if (uVar2 != *(uint *)(uVar1 + 0xa0)) {
        return uVar2 != *(uint *)(uVar1 + 0x180);
      }
      return false;
    }
  }
  return true;
}

