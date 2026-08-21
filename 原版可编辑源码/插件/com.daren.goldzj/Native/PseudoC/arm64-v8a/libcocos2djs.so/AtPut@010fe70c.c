
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::AtPut(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails) */

ulong * v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
        ::AtPut(long param_1,ulong *param_2,long *param_3,ulong *param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long local_48;
  
  uVar9 = *param_2;
  uVar3 = *(uint *)(*param_3 + 3);
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar3 >> 3;
  }
  else {
    local_48 = *param_3;
    uVar3 = String::ComputeAndSetHash((String *)&local_48);
  }
  uVar2 = (*(int *)(uVar9 + 0xf) >> 1) - 1;
  uVar3 = uVar2 & uVar3;
  uVar7 = *(uint *)(uVar9 + 7 + (long)(int)(uVar3 * 4 + 0x14));
  if (uVar7 != *(uint *)(param_1 + 0xa0)) {
    iVar6 = 1;
    do {
      if (*(int *)((uVar9 & 0xffffffff00000000 | (ulong)uVar7) + 3) == (int)*param_3) {
        uVar8 = *param_2;
        uVar9 = *param_4;
        lVar1 = uVar8 + (long)(int)(uVar3 * 4 + 0x14);
        *(int *)(lVar1 + 7) = (int)uVar9;
        if ((uVar9 & 1) == 0) {
          return param_2;
        }
        uVar5 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        lVar1 = lVar1 + 7;
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,lVar1,uVar9);
          uVar5 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar5 & 0x18) == 0) {
          return param_2;
        }
        if ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
          return param_2;
        }
        Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar9);
        return param_2;
      }
      uVar3 = uVar3 + iVar6 & uVar2;
      uVar7 = *(uint *)(uVar9 + 7 + (long)(int)(uVar3 * 4 + 0x14));
      iVar6 = iVar6 + 1;
    } while (uVar7 != *(uint *)(param_1 + 0xa0));
  }
  uVar3 = *(uint *)(*param_2 + 0x13);
  puVar4 = (ulong *)Add(param_1,param_2,param_3,param_4,
                        (uVar3 & 0x1fffffe) << 7 | param_5 & 0x800000ff,0);
  *(uint *)(*puVar4 + 0x13) = uVar3 + 2 & 0xfffffffe;
  return puVar4;
}

