
/* v8::internal::AccessorPair::set(v8::internal::AccessorComponent, v8::internal::Object) */

void __thiscall v8::internal::AccessorPair::set(AccessorPair *this,int param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    *(int *)(*(long *)this + 3) = (int)param_3;
    if ((param_3 & 1) == 0) {
      return;
    }
    uVar2 = *(ulong *)this;
    uVar3 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar1 = uVar2 + 3;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar1,param_3);
      uVar2 = *(ulong *)this;
      uVar3 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar1 = uVar2 + 3;
    }
  }
  else {
    *(int *)(*(long *)this + 7) = (int)param_3;
    if ((param_3 & 1) == 0) {
      return;
    }
    uVar2 = *(ulong *)this;
    uVar3 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar1 = uVar2 + 7;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar1,param_3);
      uVar2 = *(ulong *)this;
      uVar3 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar1 = uVar2 + 7;
    }
  }
  if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    Heap_GenerationalBarrierSlow(uVar2,lVar1,param_3);
    return;
  }
  return;
}

