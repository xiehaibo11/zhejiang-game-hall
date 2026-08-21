
/* v8::base::TemplateHashMapEntry<v8::internal::SharedFunctionInfo, unsigned int>*
   v8::base::TemplateHashMapImpl<v8::internal::SharedFunctionInfo, unsigned int,
   v8::base::KeyEqualityMatcher<v8::internal::Object>,
   v8::base::DefaultAllocationPolicy>::LookupOrInsert<v8::internal::SharedToCounterMap::Add(v8::internal::SharedFunctionInfo,
   unsigned int)::{lambda()#1}>(v8::internal::SharedFunctionInfo const&, unsigned int,
   v8::internal::SharedToCounterMap::Add(v8::internal::SharedFunctionInfo, unsigned
   int)::{lambda()#1} const&, v8::base::DefaultAllocationPolicy) */

TemplateHashMapEntry *
v8::base::
TemplateHashMapImpl<v8::internal::SharedFunctionInfo,unsigned_int,v8::base::KeyEqualityMatcher<v8::internal::Object>,v8::base::DefaultAllocationPolicy>
::
LookupOrInsert<v8::internal::SharedToCounterMap::Add(v8::internal::SharedFunctionInfo,unsigned_int)::_lambda()_1_>
          (long *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  TemplateHashMapEntry *pTVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar3 = *param_1;
  uVar1 = (int)param_1[1] - 1;
  uVar5 = (ulong)(uVar1 & param_3);
  pTVar2 = (TemplateHashMapEntry *)(lVar3 + uVar5 * 0x18);
  if ((pTVar2[0x10] != (TemplateHashMapEntry)0x0) && (*param_2 != *(int *)(lVar3 + uVar5 * 0x18))) {
    do {
      uVar5 = (ulong)((int)uVar5 + 1U & uVar1);
      if (*(char *)(lVar3 + uVar5 * 0x18 + 0x10) == '\0') break;
    } while (*param_2 != *(int *)(lVar3 + uVar5 * 0x18));
    pTVar2 = (TemplateHashMapEntry *)(lVar3 + uVar5 * 0x18);
  }
  if (pTVar2[0x10] == (TemplateHashMapEntry)0x0) {
    uVar4 = *(undefined8 *)param_2;
    *(undefined4 *)(pTVar2 + 8) = 0;
    *(uint *)(pTVar2 + 0xc) = param_3;
    pTVar2[0x10] = (TemplateHashMapEntry)0x1;
    *(undefined8 *)pTVar2 = uVar4;
    uVar1 = *(int *)((long)param_1 + 0xc) + 1;
    *(uint *)((long)param_1 + 0xc) = uVar1;
    if (*(uint *)(param_1 + 1) <= uVar1 + (uVar1 >> 2)) {
      Resize(param_1);
      lVar3 = *param_1;
      uVar1 = (int)param_1[1] - 1;
      uVar5 = (ulong)(uVar1 & param_3);
      pTVar2 = (TemplateHashMapEntry *)(lVar3 + uVar5 * 0x18);
      if ((pTVar2[0x10] != (TemplateHashMapEntry)0x0) &&
         (*param_2 != *(int *)(lVar3 + uVar5 * 0x18))) {
        do {
          uVar5 = (ulong)((int)uVar5 + 1U & uVar1);
          if (*(char *)(lVar3 + uVar5 * 0x18 + 0x10) == '\0') break;
        } while (*param_2 != *(int *)(lVar3 + uVar5 * 0x18));
        pTVar2 = (TemplateHashMapEntry *)(lVar3 + uVar5 * 0x18);
      }
    }
  }
  return pTVar2;
}

