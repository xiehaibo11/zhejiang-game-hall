
/* v8::internal::DescriptorArray::Set(v8::internal::InternalIndex, v8::internal::Name,
   v8::internal::MaybeObject, v8::internal::PropertyDetails) */

void __thiscall
v8::internal::DescriptorArray::Set
          (DescriptorArray *this,int param_2,ulong param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = (ulong)(uint)(param_2 * 3) << 0x22;
  uVar5 = lVar4 + 0x1000000000 >> 0x20;
  lVar6 = uVar5 - 1;
  *(int *)(*(long *)this + lVar6) = (int)param_3;
  uVar1 = *(ulong *)this;
  if ((param_3 & 1) != 0) {
    uVar3 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar1 + lVar6;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,param_3);
      uVar1 = *(ulong *)this;
      uVar3 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar1 + lVar6;
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,param_3);
      uVar1 = *(ulong *)this;
    }
  }
  *(int *)(uVar1 + (uVar5 | 3)) = param_5 << 1;
  lVar4 = (lVar4 >> 0x20) + 0x17;
  *(int *)(*(long *)this + lVar4) = (int)param_4;
  if (((int)param_4 != 3) && ((param_4 & 1) != 0)) {
    uVar1 = *(ulong *)this;
    uVar5 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar6 = uVar1 + lVar4;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar6,param_4 & 0xfffffffffffffffd);
      uVar1 = *(ulong *)this;
      uVar5 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
      lVar6 = uVar1 + lVar4;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar6,param_4 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

