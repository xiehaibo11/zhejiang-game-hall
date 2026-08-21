
/* v8::internal::Dictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NameDictionary>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails,
   v8::internal::InternalIndex*) */

ulong * v8::internal::Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
        Add(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
           undefined4 param_5,ulong *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  ulong local_38;
  
  uVar5 = *(uint *)(*param_3 + 3);
  if ((uVar5 & 1) == 0) {
    uVar5 = uVar5 >> 3;
  }
  else {
    local_38 = *param_3;
    uVar5 = String::ComputeAndSetHash((String *)&local_38);
  }
  puVar6 = (ulong *)BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                    ::EnsureCapacity(param_1,param_2,1);
  local_38 = *puVar6;
  uVar4 = (*(int *)(local_38 + 0xf) >> 1) - 1;
  uVar8 = (ulong)(uVar4 & uVar5);
  iVar7 = *(int *)(((long)(uVar8 * 0xc00000000 + 0x1400000000) >> 0x20) + local_38 + 7);
  iVar1 = *(int *)((local_38 & 0xffffffff00000000) + 0xa8);
  if ((iVar7 != iVar1) && (iVar2 = *(int *)((local_38 & 0xffffffff00000000) + 0xa0), iVar7 != iVar2)
     ) {
    iVar7 = 1;
    do {
      uVar8 = (ulong)((int)uVar8 + iVar7 & uVar4);
      iVar3 = *(int *)(((long)(uVar8 * 0xc00000000 + 0x1400000000) >> 0x20) + local_38 + 7);
      if (iVar3 == iVar1) break;
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar2);
  }
  SetEntry((Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *)&local_38,
           param_1,uVar8,*param_3,*param_4,param_5);
  *(uint *)(*puVar6 + 7) = *(uint *)(*puVar6 + 7) + 2 & 0xfffffffe;
  if (param_6 != (ulong *)0x0) {
    *param_6 = uVar8;
  }
  return puVar6;
}

