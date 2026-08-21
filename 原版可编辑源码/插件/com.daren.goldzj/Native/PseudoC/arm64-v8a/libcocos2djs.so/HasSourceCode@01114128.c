
/* v8::internal::SharedFunctionInfo::HasSourceCode() const */

bool __thiscall v8::internal::SharedFunctionInfo::HasSourceCode(SharedFunctionInfo *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  uVar1 = uVar2 | *(uint *)(*(ulong *)this + 0xf);
  uVar3 = uVar1;
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x5b) {
    uVar3 = (ulong)*(uint *)(uVar1 + 0xb);
  }
  if ((uint)uVar3 == *(uint *)(uVar2 + 0xa0)) {
    return false;
  }
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x5b) {
    uVar1 = uVar2 | *(uint *)(uVar1 + 0xb);
  }
  return *(uint *)(uVar1 + 3) != *(uint *)(uVar2 + 0xa0) || (*(uint *)(uVar1 + 3) & 1) == 0;
}

