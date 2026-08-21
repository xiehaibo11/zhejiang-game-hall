
/* v8::internal::Dictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::ValueAtPut(v8::internal::InternalIndex, v8::internal::Object)
    */

void __thiscall
v8::internal::Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::ValueAtPut
          (Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *this,
          long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = (param_2 * 0xc00000000 + 0x1800000000 >> 0x20) + 7;
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

