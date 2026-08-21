
/* v8::internal::TransitionArray::Set(int, v8::internal::Name, v8::internal::MaybeObject) */

void __thiscall
v8::internal::TransitionArray::Set(TransitionArray *this,int param_1,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = (long)(param_1 * 8 + 8) | 7;
  *(int *)(*(long *)this + uVar5) = (int)param_3;
  uVar1 = *(ulong *)this;
  if (((int)param_3 != 3) && ((param_3 & 1) != 0)) {
    uVar4 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar1 + uVar5;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,param_3 & 0xfffffffffffffffd);
      uVar1 = *(ulong *)this;
      uVar4 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar1 + uVar5;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,param_3 & 0xfffffffffffffffd);
      uVar1 = *(ulong *)this;
    }
  }
  lVar2 = (long)(param_1 * 8 + 0xc) + 7;
  *(int *)(uVar1 + lVar2) = (int)param_4;
  if (((int)param_4 != 3) && ((param_4 & 1) != 0)) {
    uVar1 = *(ulong *)this;
    uVar5 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar1 + lVar2;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar3,param_4 & 0xfffffffffffffffd);
      uVar1 = *(ulong *)this;
      uVar5 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar1 + lVar2;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar3,param_4 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

