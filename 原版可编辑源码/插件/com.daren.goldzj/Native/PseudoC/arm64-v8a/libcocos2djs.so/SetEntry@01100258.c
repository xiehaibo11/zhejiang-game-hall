
/* v8::internal::Dictionary<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::SetEntry(v8::internal::Isolate*,
   v8::internal::InternalIndex, v8::internal::Object, v8::internal::Object,
   v8::internal::PropertyDetails) */

void __thiscall
v8::internal::Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
SetEntry(Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
        undefined8 param_2,int param_3,ulong param_4,ulong param_5,int param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (ulong)(uint)(param_3 * 3) << 0x22;
  lVar1 = (lVar5 + 0x1000000000 >> 0x20) + 7;
  uVar4 = *(ulong *)((*(ulong *)this & 0xfffffffffffc0000) + 8);
  *(int *)(*(ulong *)this + lVar1) = (int)param_4;
  uVar2 = *(ulong *)this;
  if ((((uint)uVar4 >> 0x12 & 1) == 0) && ((uVar4 & 0x18) != 0)) {
    *(int *)(uVar2 + (lVar5 + 0x1400000000 >> 0x20) + 7) = (int)param_5;
  }
  else {
    if ((param_4 & 1) != 0) {
      uVar4 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
      lVar3 = uVar2 + lVar1;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar2,lVar3,param_4);
        uVar2 = *(ulong *)this;
        uVar4 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
        lVar3 = uVar2 + lVar1;
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,lVar3,param_4);
        uVar2 = *(ulong *)this;
      }
    }
    lVar1 = (lVar5 + 0x1400000000 >> 0x20) + 7;
    *(int *)(uVar2 + lVar1) = (int)param_5;
    if ((param_5 & 1) != 0) {
      uVar2 = *(ulong *)this;
      uVar4 = *(ulong *)((param_5 & 0xfffffffffffc0000) + 8);
      lVar3 = uVar2 + lVar1;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar2,lVar3,param_5);
        uVar2 = *(ulong *)this;
        uVar4 = *(ulong *)(param_5 & 0xfffffffffffc0000 | 8);
        lVar3 = uVar2 + lVar1;
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,lVar3,param_5);
      }
    }
  }
  *(int *)(*(long *)this + (lVar5 + 0x1800000000 >> 0x20) + 7) = param_6 << 1;
  return;
}

