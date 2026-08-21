
/* v8::internal::Dictionary<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NumberDictionary>, unsigned int,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails,
   v8::internal::InternalIndex*) */

ulong * v8::internal::Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>
        ::Add(Factory *param_1,undefined8 param_2,uint param_3,undefined8 *param_4,
             undefined4 param_5,ulong *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  ulong local_38;
  
  uVar7 = (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_3 ^ 0xffffffffffffffff) +
          (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_3) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uVar7 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  puVar5 = (ulong *)HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                    EnsureCapacity(param_1,param_2,1,0);
  puVar6 = (undefined8 *)Factory::NewNumberFromUint(param_1,param_3);
  local_38 = *puVar5;
  uVar4 = (*(int *)(local_38 + 0xf) >> 1) - 1;
  uVar7 = (ulong)(uVar4 & ((uint)(uVar7 >> 0x16) ^ (uint)uVar7) & 0x3fffffff);
  iVar8 = *(int *)(((long)(uVar7 * 0xc00000000 + 0x1000000000) >> 0x20) + local_38 + 7);
  iVar1 = *(int *)((local_38 & 0xffffffff00000000) + 0xa8);
  if ((iVar8 != iVar1) && (iVar2 = *(int *)((local_38 & 0xffffffff00000000) + 0xa0), iVar8 != iVar2)
     ) {
    iVar8 = 1;
    do {
      uVar7 = (ulong)((int)uVar7 + iVar8 & uVar4);
      iVar3 = *(int *)(((long)(uVar7 * 0xc00000000 + 0x1000000000) >> 0x20) + local_38 + 7);
      if (iVar3 == iVar1) break;
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar2);
  }
  SetEntry((Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *)
           &local_38,param_1,uVar7,*puVar6,*param_4,param_5);
  *(uint *)(*puVar5 + 7) = *(uint *)(*puVar5 + 7) + 2 & 0xfffffffe;
  if (param_6 != (ulong *)0x0) {
    *param_6 = uVar7;
  }
  return puVar5;
}

