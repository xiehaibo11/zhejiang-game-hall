
/* v8::internal::AccessorPair::SetComponents(v8::internal::Object, v8::internal::Object) */

void __thiscall
v8::internal::AccessorPair::SetComponents(AccessorPair *this,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((((param_2 & 1) == 0) || ((int)param_2 != *(int *)((param_2 & 0xffffffff00000000) + 0xb0))) &&
     (*(int *)(*(long *)this + 3) = (int)param_2, (param_2 & 1) != 0)) {
    uVar1 = *(ulong *)this;
    uVar3 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar1 + 3;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,param_2);
      uVar1 = *(ulong *)this;
      uVar3 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar1 + 3;
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,param_2);
    }
  }
  if ((((param_3 & 1) == 0) || ((int)param_3 != *(int *)((param_3 & 0xffffffff00000000) + 0xb0))) &&
     (*(int *)(*(long *)this + 7) = (int)param_3, (param_3 & 1) != 0)) {
    uVar1 = *(ulong *)this;
    uVar3 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar1 + 7;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,param_3);
      uVar1 = *(ulong *)this;
      uVar3 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar1 + 7;
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,param_3);
      return;
    }
  }
  return;
}

