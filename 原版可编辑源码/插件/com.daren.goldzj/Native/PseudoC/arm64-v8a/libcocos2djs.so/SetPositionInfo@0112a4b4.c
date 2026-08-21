
/* v8::internal::ScopeInfo::SetPositionInfo(int, int) */

void __thiscall v8::internal::ScopeInfo::SetPositionInfo(ScopeInfo *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *(long *)this;
  if (*(int *)(lVar2 + 3) < 2) {
    uVar3 = 0;
    iVar1 = 3;
  }
  else {
    iVar1 = (*(int *)(lVar2 + 0xf) >> 1) + (*(int *)(lVar2 + 0xf) >> 1) +
            (*(uint *)(lVar2 + 7) >> 0xb & 1) + (uint)((*(uint *)(lVar2 + 7) & 0x6000) != 0) * 2;
    if ((*(uint *)(lVar2 + 7) >> 8 & 3) - 1 < 2) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 + 3;
    uVar3 = *(uint *)(lVar2 + 7) >> 0xf & 1;
  }
  *(int *)(lVar2 + 7 + (long)(int)((uVar3 + iVar1) * 4)) = param_1 << 1;
  lVar2 = *(long *)this;
  if (*(int *)(lVar2 + 3) < 2) {
    uVar3 = 0;
    iVar1 = 3;
  }
  else {
    iVar1 = (*(int *)(lVar2 + 0xf) >> 1) + (*(int *)(lVar2 + 0xf) >> 1) +
            (*(uint *)(lVar2 + 7) >> 0xb & 1) + (uint)((*(uint *)(lVar2 + 7) & 0x6000) != 0) * 2;
    if ((*(uint *)(lVar2 + 7) >> 8 & 3) - 1 < 2) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 + 3;
    uVar3 = *(uint *)(lVar2 + 7) >> 0xf & 1;
  }
  *(int *)(lVar2 + 7 + (long)(int)((uVar3 + iVar1) * 4 + 4)) = param_2 << 1;
  return;
}

