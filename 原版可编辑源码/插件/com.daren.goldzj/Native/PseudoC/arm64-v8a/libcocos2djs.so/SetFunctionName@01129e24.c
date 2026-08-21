
/* v8::internal::ScopeInfo::SetFunctionName(v8::internal::Object) */

void __thiscall v8::internal::ScopeInfo::SetFunctionName(ScopeInfo *this,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = *(long *)this;
  if (*(int *)(lVar3 + 3) < 2) {
    uVar5 = 0;
    iVar6 = 3;
  }
  else {
    iVar6 = (*(int *)(lVar3 + 0xf) >> 1) + (*(int *)(lVar3 + 0xf) >> 1) +
            (*(uint *)(lVar3 + 7) >> 0xb & 1) + 3;
    uVar5 = (uint)((*(uint *)(lVar3 + 7) >> 8 & 3) - 1 < 2);
  }
  lVar1 = (long)(int)((uVar5 + iVar6) * 4) + 7;
  *(int *)(lVar1 + lVar3) = (int)param_2;
  if ((param_2 & 1) != 0) {
    uVar2 = *(ulong *)this;
    uVar4 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar3 = lVar1 + uVar2;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar3,param_2);
      uVar2 = *(ulong *)this;
      uVar4 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar2 + lVar1;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,lVar3,param_2);
      return;
    }
  }
  return;
}

