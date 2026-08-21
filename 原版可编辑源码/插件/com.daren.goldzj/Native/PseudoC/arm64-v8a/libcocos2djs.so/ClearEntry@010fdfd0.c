
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::ClearEntry(v8::internal::Isolate*,
   v8::internal::InternalIndex) */

void __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
ClearEntry(Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
          undefined8 param_1,int param_3)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_48;
  
  uVar4 = *(ulong *)this;
  uVar6 = uVar4 & 0xffffffff00000000;
  uVar5 = *(ulong *)(uVar6 + 0xa8);
  lVar1 = uVar4 + (long)(param_3 * 4 + 0x14);
  puVar2 = (uint *)(lVar1 + 7);
  *(int *)(lVar1 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,puVar2,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,puVar2,uVar5);
    }
  }
  uVar4 = uVar6 | *puVar2;
  if ((*(byte *)(uVar4 + 7) >> 4 & 1) != 0) {
    local_48 = uVar6 | *(uint *)(uVar4 + 0xf);
    DependentCode::DeoptimizeDependentCodeGroup(&local_48,param_1,2);
  }
  *(undefined4 *)(uVar4 + 7) = 0x180;
  return;
}

