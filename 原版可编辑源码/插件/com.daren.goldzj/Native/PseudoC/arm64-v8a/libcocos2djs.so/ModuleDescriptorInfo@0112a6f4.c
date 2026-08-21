
/* v8::internal::ScopeInfo::ModuleDescriptorInfo() const */

ulong __thiscall v8::internal::ScopeInfo::ModuleDescriptorInfo(ScopeInfo *this)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(ulong *)this;
  if (*(int *)(uVar1 + 3) < 2) {
    uVar2 = 0;
    iVar3 = 3;
  }
  else {
    iVar3 = (*(int *)(uVar1 + 0xf) >> 1) + (*(int *)(uVar1 + 0xf) >> 1) +
            (*(uint *)(uVar1 + 7) >> 0xb & 1) + (uint)((*(uint *)(uVar1 + 7) & 0x6000) != 0) * 2 +
            (*(uint *)(uVar1 + 7) >> 0xf & 1);
    if ((*(uint *)(uVar1 + 7) >> 8 & 3) - 1 < 2) {
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 + (uint)(((*(uint *)(uVar1 + 7) >> 1 & 0xf) - 1 & 0xff) < 4) * 2 + 3;
    uVar2 = *(uint *)(uVar1 + 7) >> 0x17 & 1;
  }
  return uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7 + (long)(int)((uVar2 + iVar3) * 4))
  ;
}

