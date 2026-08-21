
/* v8::internal::SharedFunctionInfo::GetCode() const */

ulong __thiscall v8::internal::SharedFunctionInfo::GetCode(SharedFunctionInfo *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(ulong *)this + 3);
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  if ((uVar1 & 1) == 0) {
    uVar2 = Builtins::builtin((Builtins *)(uVar2 + 0x9e00),*(int *)(*(long *)this + 3) >> 1);
    return uVar2;
  }
  uVar3 = uVar2 | uVar1;
  uVar4 = uVar2 | 7;
  if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x86) {
    uVar2 = Builtins::builtin((Builtins *)(uVar2 + 0x9e00),0x38);
    return uVar2;
  }
  if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x57) {
    uVar2 = Builtins::builtin((Builtins *)(uVar2 + 0x9e00),0x44);
    return uVar2;
  }
  if (*(ushort *)(uVar4 + *(uint *)(uVar3 - 1)) - 0x95 < 2) {
    uVar2 = Builtins::builtin((Builtins *)(uVar2 + 0x9e00),0x42);
    return uVar2;
  }
  if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x4e) {
    uVar2 = Builtins::builtin((Builtins *)(uVar2 + 0x9e00),0x4c);
    return uVar2;
  }
  if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x73) {
    uVar2 = *(ulong *)this & 0xffffffff00000000;
    uVar3 = (ulong)*(uint *)((uVar2 | *(uint *)(*(ulong *)this + 3)) + 3);
  }
  else if ((*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x61) ||
          (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x75)) {
    uVar2 = *(ulong *)this & 0xffffffff00000000;
    uVar3 = (ulong)*(uint *)((uVar2 | *(uint *)(*(ulong *)this + 3)) + 7);
  }
  else {
    if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) != 0x70) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar2 = *(ulong *)this & 0xffffffff00000000;
    uVar3 = (ulong)*(uint *)((uVar2 | *(uint *)(*(ulong *)this + 3)) + 0xf);
  }
  return uVar2 | uVar3;
}

