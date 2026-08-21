
/* v8::internal::ObjectHashTableBase<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::AddEntry(v8::internal::InternalIndex,
   v8::internal::Object, v8::internal::Object) */

void __thiscall
v8::internal::
ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
AddEntry(ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
         *this,int param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  lVar1 = (long)(param_2 * 8 + 0xc) + 7;
  *(int *)(*(long *)this + lVar1) = (int)param_3;
  uVar5 = *(ulong *)this;
  lVar2 = uVar5 + lVar1;
  pbVar6 = (byte *)(param_3 & 0xfffffffffffc0000 | 8);
  uVar4 = uVar5;
  if (((param_3 & 1) != 0) && ((pbVar6[2] >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar5,lVar2);
    lVar2 = *(ulong *)this + lVar1;
    uVar4 = *(ulong *)this;
  }
  if (((*pbVar6 & 0x18) != 0) && ((*(byte *)(uVar5 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
    Heap_GenerationalEphemeronKeyBarrierSlow
              (*(undefined8 *)(uVar5 & 0xfffffffffffc0000 | 0x18),uVar5,lVar2);
    uVar4 = *(ulong *)this;
  }
  uVar5 = (long)(param_2 * 8 + 0x10) | 7;
  *(int *)(uVar4 + uVar5) = (int)param_4;
  uVar4 = *(ulong *)this;
  if ((param_4 & 1) != 0) {
    uVar3 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar1 = uVar4 + uVar5;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar1,param_4);
      uVar4 = *(ulong *)this;
      uVar3 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
      lVar1 = uVar4 + uVar5;
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,lVar1,param_4);
      uVar4 = *(ulong *)this;
    }
  }
  *(uint *)(uVar4 + 7) = *(uint *)(uVar4 + 7) + 2 & 0xfffffffe;
  return;
}

