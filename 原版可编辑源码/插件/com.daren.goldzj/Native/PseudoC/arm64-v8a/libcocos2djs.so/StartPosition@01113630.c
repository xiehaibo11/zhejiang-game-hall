
/* v8::internal::SharedFunctionInfo::StartPosition() const */

ulong __thiscall v8::internal::SharedFunctionInfo::StartPosition(SharedFunctionInfo *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_18;
  
  uVar3 = *(ulong *)this;
  uVar2 = uVar3 & 0xffffffff00000000;
  if (((*(uint *)(uVar3 + 7) & 1) == 0) ||
     (local_18 = uVar2 | *(uint *)(uVar3 + 7),
     *(short *)((uVar2 | 7) + (ulong)*(uint *)(local_18 - 1)) != 0x83)) {
    if (((*(uint *)(uVar3 + 3) & 1) != 0) &&
       (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | *(uint *)(uVar3 + 3)) - 1)) - 0x95 < 2))
    {
      return (ulong)*(uint *)((*(ulong *)this & 0xffffffff00000000 |
                              (ulong)*(uint *)(*(ulong *)this + 3)) + 7);
    }
    uVar1 = *(uint *)(*(ulong *)this + 3);
    if ((((uVar1 & 1) != 0) &&
        (uVar2 = *(ulong *)this & 0xffffffff00000000,
        *(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) == 0x4e)) ||
       ((*(uint *)(*(long *)this + 3) & 1) == 0)) {
      return 0;
    }
  }
  else {
    uVar2 = ScopeInfo::HasPositionInfo((ScopeInfo *)&local_18);
    if ((uVar2 & 1) != 0) {
      uVar2 = ScopeInfo::StartPosition((ScopeInfo *)&local_18);
      return uVar2;
    }
  }
  return 0xffffffff;
}

