
/* v8::internal::SharedFunctionInfo::HasOuterScopeInfo() const */

bool __thiscall v8::internal::SharedFunctionInfo::HasOuterScopeInfo(SharedFunctionInfo *this)

{
  uint uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong local_8;
  
  uVar1 = *(uint *)(*(ulong *)this + 3);
  if ((uVar1 == 0x84) ||
     (((uVar1 & 1) != 0 &&
      (uVar2 = *(ulong *)this & 0xffffffff00000000,
      *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) - 0x95 < 2)))) {
    uVar4 = *(ulong *)this & 0xffffffff00000000;
    uVar2 = uVar4 | *(uint *)(*(ulong *)this + 0xb);
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x83) goto LAB_00f3ea3c;
  }
  else {
    uVar1 = *(uint *)(*(ulong *)this + 7);
    pIVar3 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
    if (((uVar1 & 1) == 0) ||
       (local_8 = (ulong)pIVar3 | (ulong)uVar1,
       *(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(local_8 - 1)) != 0x83)) {
      local_8 = ScopeInfo::Empty(pIVar3);
    }
    uVar2 = ScopeInfo::HasOuterScopeInfo((ScopeInfo *)&local_8);
    if ((uVar2 & 1) != 0) {
      uVar1 = *(uint *)(*(ulong *)this + 7);
      pIVar3 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
      if (((uVar1 & 1) == 0) ||
         (uVar2 = (ulong)pIVar3 | (ulong)uVar1,
         *(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x83)) {
        uVar2 = ScopeInfo::Empty(pIVar3);
      }
      local_8 = uVar2;
      uVar2 = ScopeInfo::OuterScopeInfo((ScopeInfo *)&local_8);
LAB_00f3ea3c:
      return 1 < *(int *)(uVar2 + 3);
    }
  }
  return false;
}

