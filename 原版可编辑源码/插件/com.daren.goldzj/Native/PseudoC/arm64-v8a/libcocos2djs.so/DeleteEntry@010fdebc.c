
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::DeleteEntry(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>, v8::internal::InternalIndex) */

void v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
     DeleteEntry(undefined8 param_1,ulong *param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  
  uVar4 = *param_2;
  uVar6 = uVar4 & 0xffffffff00000000;
  uVar5 = *(ulong *)(uVar6 + 0xa8);
  lVar1 = uVar4 + (long)(param_3 * 4 + 0x14);
  puVar3 = (uint *)(lVar1 + 7);
  *(int *)(lVar1 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar2 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,puVar3,uVar5);
      uVar2 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,puVar3,uVar5);
    }
  }
  uVar4 = uVar6 | *puVar3;
  if ((*(byte *)(uVar4 + 7) >> 4 & 1) != 0) {
    local_38 = uVar6 | *(uint *)(uVar4 + 0xf);
    DependentCode::DeoptimizeDependentCodeGroup(&local_38,param_1,2);
  }
  *(undefined4 *)(uVar4 + 7) = 0x180;
  uVar4 = *param_2;
  puVar3 = (uint *)(uVar4 + 7);
  *puVar3 = *puVar3 - 2 & 0xfffffffe;
  puVar3 = (uint *)(uVar4 + 0xb);
  *puVar3 = *puVar3 + 2 & 0xfffffffe;
  HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::Shrink
            (param_1,param_2,0);
  return;
}

