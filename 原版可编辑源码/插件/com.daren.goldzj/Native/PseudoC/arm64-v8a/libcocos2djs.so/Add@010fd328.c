
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails,
   v8::internal::InternalIndex*) */

ulong * v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
        ::Add(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,uint param_5,
             ulong *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_68;
  
  uVar3 = *(uint *)(*param_3 + 3);
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar3 >> 3;
  }
  else {
    local_68 = *param_3;
    uVar3 = String::ComputeAndSetHash((String *)&local_68);
  }
  puVar4 = (ulong *)BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
                    ::EnsureCapacity(param_1,param_2,1);
  uVar8 = *puVar4;
  uVar10 = uVar8 & 0xffffffff00000000;
  uVar2 = (*(int *)(uVar8 + 0xf) >> 1) - 1;
  uVar3 = uVar2 & uVar3;
  lVar6 = (long)(int)(uVar3 * 4 + 0x14);
  if (*(int *)(uVar8 + 7 + lVar6) != *(int *)(uVar10 + 0xa0)) {
    iVar7 = 1;
    do {
      uVar3 = uVar3 + iVar7 & uVar2;
      lVar6 = (long)(int)(uVar3 * 4 + 0x14);
      iVar7 = iVar7 + 1;
    } while (*(int *)(uVar8 + 7 + lVar6) != *(int *)(uVar10 + 0xa0));
  }
  uVar9 = *param_4;
  puVar1 = (uint *)(lVar6 + uVar8 + 7);
  *(int *)(lVar6 + uVar8 + 7) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar5 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar1,uVar9);
      uVar5 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar9);
    }
  }
  uVar8 = uVar10 | *puVar1;
  if ((param_5 >> 3 & 1) != (*(byte *)(uVar8 + 7) & 0x10) >> 4) {
    local_68 = uVar10 | *(uint *)(uVar8 + 0xf);
    DependentCode::DeoptimizeDependentCodeGroup(&local_68,param_1,2);
  }
  *(uint *)(uVar8 + 7) = param_5 << 1;
  *(uint *)(*puVar4 + 7) = *(uint *)(*puVar4 + 7) + 2 & 0xfffffffe;
  if (param_6 != (ulong *)0x0) {
    *param_6 = (ulong)uVar3;
  }
  return puVar4;
}

