
/* v8::internal::Dictionary<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SimpleNumberDictionary>, unsigned int,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails,
   v8::internal::InternalIndex*) */

ulong * v8::internal::
        Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
        Add(Factory *param_1,undefined8 param_2,uint param_3,undefined8 *param_4,undefined4 param_5,
           ulong *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  ulong local_38;
  
  uVar8 = (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_3 ^ 0xffffffffffffffff) +
          (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_3) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  puVar6 = (ulong *)HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
                    ::EnsureCapacity(param_1,param_2,1,0);
  puVar7 = (undefined8 *)Factory::NewNumberFromUint(param_1,param_3);
  local_38 = *puVar6;
  uVar5 = (*(int *)(local_38 + 0xf) >> 1) - 1;
  uVar1 = uVar5 & ((uint)(uVar8 >> 0x16) ^ (uint)uVar8);
  uVar8 = (ulong)(uVar1 & 0x3fffffff);
  iVar9 = *(int *)(local_38 + 7 + (long)(int)(uVar1 * 8 + 0xc));
  iVar2 = *(int *)((local_38 & 0xffffffff00000000) + 0xa8);
  if ((iVar9 != iVar2) && (iVar3 = *(int *)((local_38 & 0xffffffff00000000) + 0xa0), iVar9 != iVar3)
     ) {
    iVar9 = 1;
    do {
      uVar1 = (int)uVar8 + iVar9 & uVar5;
      uVar8 = (ulong)uVar1;
      iVar4 = *(int *)(local_38 + 7 + (long)(int)(uVar1 * 8 + 0xc));
      if (iVar4 == iVar2) break;
      iVar9 = iVar9 + 1;
    } while (iVar4 != iVar3);
    uVar8 = (ulong)uVar1;
  }
  SetEntry(&local_38,param_1,uVar8,*puVar7,*param_4,param_5);
  *(uint *)(*puVar6 + 7) = *(uint *)(*puVar6 + 7) + 2 & 0xfffffffe;
  if (param_6 != (ulong *)0x0) {
    *param_6 = uVar8;
  }
  return puVar6;
}

