
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::SetEntry(v8::internal::Isolate*,
   v8::internal::InternalIndex, v8::internal::Object, v8::internal::Object,
   v8::internal::PropertyDetails) */

void __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
SetEntry(Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
        undefined8 param_1,int param_3,ulong param_4,ulong param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_58;
  
  param_3 = param_3 * 4;
  uVar4 = *(ulong *)((*(ulong *)this & 0xfffffffffffc0000) + 8);
  lVar1 = (long)(param_3 + 0x14) + 7;
  *(int *)(*(ulong *)this + lVar1) = (int)param_4;
  if ((((uint)uVar4 >> 0x12 & 1) == 0) && ((uVar4 & 0x18) != 0)) {
    *(int *)(*(long *)this + (long)(param_3 + 0x18) + 7) = (int)param_5;
  }
  else {
    uVar4 = *(ulong *)this;
    if ((param_4 & 1) != 0) {
      uVar5 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
      lVar2 = uVar4 + lVar1;
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,lVar2,param_4);
        uVar4 = *(ulong *)this;
        uVar5 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
        lVar2 = uVar4 + lVar1;
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,lVar2,param_4);
        uVar4 = *(ulong *)this;
      }
    }
    lVar2 = (long)(param_3 + 0x18) + 7;
    *(int *)(uVar4 + lVar2) = (int)param_5;
    if ((param_5 & 1) != 0) {
      uVar4 = *(ulong *)this;
      uVar5 = *(ulong *)((param_5 & 0xfffffffffffc0000) + 8);
      lVar3 = uVar4 + lVar2;
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,lVar3,param_5);
        uVar4 = *(ulong *)this;
        uVar5 = *(ulong *)(param_5 & 0xfffffffffffc0000 | 8);
        lVar3 = uVar4 + lVar2;
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,lVar3,param_5);
      }
    }
  }
  local_58 = *(ulong *)this & 0xffffffff00000000;
  uVar4 = local_58 | *(uint *)(lVar1 + *(ulong *)this);
  if ((param_6 >> 3 & 1) != (*(byte *)(uVar4 + 7) & 0x10) >> 4) {
    local_58 = local_58 | *(uint *)(uVar4 + 0xf);
    DependentCode::DeoptimizeDependentCodeGroup(&local_58,param_1,2);
  }
  *(uint *)(uVar4 + 7) = param_6 << 1;
  return;
}

