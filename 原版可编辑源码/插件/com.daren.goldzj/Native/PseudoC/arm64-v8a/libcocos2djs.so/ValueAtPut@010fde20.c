
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::ValueAtPut(v8::internal::InternalIndex,
   v8::internal::Object) */

void __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
ValueAtPut(Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
          int param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = (long)(param_2 * 4 + 0x18) + 7;
  *(int *)(*(long *)this + lVar1) = (int)param_3;
  if ((param_3 & 1) != 0) {
    uVar2 = *(ulong *)this;
    uVar4 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar2 + lVar1;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar3,param_3);
      uVar2 = *(ulong *)this;
      uVar4 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar2 + lVar1;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,lVar3,param_3);
      return;
    }
  }
  return;
}

