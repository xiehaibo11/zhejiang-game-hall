
/* v8::internal::SharedFunctionInfo::abstract_code() */

ulong __thiscall v8::internal::SharedFunctionInfo::abstract_code(SharedFunctionInfo *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(ulong *)this + 3);
  if (((uVar1 & 1) == 0) ||
     (uVar2 = *(ulong *)this & 0xffffffff00000000,
     *(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) != 0x86)) {
    uVar1 = *(uint *)(*(ulong *)this + 3);
    if (((uVar1 & 1) == 0) ||
       (uVar2 = *(ulong *)this & 0xffffffff00000000,
       *(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) != 0x61)) {
      uVar2 = GetCode(this);
      return uVar2;
    }
  }
  uVar4 = *(ulong *)this;
  uVar2 = uVar4 & 0xffffffff00000000;
  uVar5 = uVar2 | *(uint *)(uVar4 + 0xf);
  uVar3 = uVar2 | 7;
  if ((*(short *)(uVar3 + *(uint *)(uVar5 - 1)) == 0x5b) &&
     (*(short *)(uVar3 + *(uint *)((uVar2 | *(uint *)(uVar5 + 0x13)) - 1)) == 0x86)) {
    return uVar2 | *(uint *)(uVar5 + 0xf);
  }
  if (((*(uint *)(uVar4 + 3) & 1) != 0) &&
     (*(short *)(uVar3 + *(uint *)((uVar2 | *(uint *)(uVar4 + 3)) - 1)) == 0x86)) {
    return *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  }
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  return uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)this + 3)) + 3);
}

