
/* v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::AddEntry(v8::internal::InternalIndex, v8::internal::Object,
   v8::internal::Object) */

void __thiscall
v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
::AddEntry(ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
           *this,int param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = (long)(param_2 * 8 + 0xc) + 7;
  *(int *)(*(long *)this + lVar3) = (int)param_3;
  uVar1 = *(ulong *)this;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar1 + lVar3;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,param_3);
      uVar1 = *(ulong *)this;
      uVar4 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar1 + lVar3;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,param_3);
      uVar1 = *(ulong *)this;
    }
  }
  uVar4 = (long)(param_2 * 8 + 0x10) | 7;
  *(int *)(uVar1 + uVar4) = (int)param_4;
  uVar1 = *(ulong *)this;
  if ((param_4 & 1) != 0) {
    uVar5 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar1 + uVar4;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar3,param_4);
      uVar1 = *(ulong *)this;
      uVar5 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar1 + uVar4;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar3,param_4);
      uVar1 = *(ulong *)this;
    }
  }
  *(uint *)(uVar1 + 7) = *(uint *)(uVar1 + 7) + 2 & 0xfffffffe;
  return;
}

