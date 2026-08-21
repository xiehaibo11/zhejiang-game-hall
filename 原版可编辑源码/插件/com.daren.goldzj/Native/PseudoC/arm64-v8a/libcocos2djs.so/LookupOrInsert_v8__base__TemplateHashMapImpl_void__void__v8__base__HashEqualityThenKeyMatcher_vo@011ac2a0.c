
/* v8::base::TemplateHashMapEntry<void*, void*>* v8::base::TemplateHashMapImpl<void*, void*,
   v8::base::HashEqualityThenKeyMatcher<void*, bool (*)(void*, void*)>,
   v8::base::DefaultAllocationPolicy>::LookupOrInsert<v8::base::TemplateHashMapImpl<void*, void*,
   v8::base::HashEqualityThenKeyMatcher<void*, bool (*)(void*, void*)>,
   v8::base::DefaultAllocationPolicy>::LookupOrInsert(void* const&, unsigned int,
   v8::base::DefaultAllocationPolicy)::{lambda()#1}>(void* const&, unsigned int,
   v8::base::TemplateHashMapImpl<void*, void*, v8::base::HashEqualityThenKeyMatcher<void*, bool
   (*)(void*, void*)>, v8::base::DefaultAllocationPolicy>::LookupOrInsert(void* const&, unsigned
   int, v8::base::DefaultAllocationPolicy)::{lambda()#1} const&, v8::base::DefaultAllocationPolicy)
    */

TemplateHashMapEntry *
v8::base::
TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
::
LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
          (long *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  TemplateHashMapEntry *pTVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  iVar6 = (int)param_1[1];
  lVar5 = *param_1;
  uVar7 = (ulong)(iVar6 - 1U & param_3);
  lVar4 = *(long *)(lVar5 + uVar7 * 0x18);
  while (lVar4 != 0) {
    if (*(uint *)(lVar5 + uVar7 * 0x18 + 0x10) == param_3) {
      uVar2 = (*(code *)param_1[2])(*param_2,lVar4);
      if ((uVar2 & 1) != 0) {
        lVar5 = *param_1;
        break;
      }
      iVar6 = (int)param_1[1];
      lVar5 = *param_1;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & iVar6 - 1U);
    lVar4 = *(long *)(lVar5 + uVar7 * 0x18);
  }
  pTVar3 = (TemplateHashMapEntry *)(lVar5 + uVar7 * 0x18);
  if (*(long *)pTVar3 == 0) {
    lVar5 = lVar5 + uVar7 * 0x18;
    *(undefined8 *)pTVar3 = *param_2;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(uint *)(lVar5 + 0x10) = param_3;
    uVar1 = *(int *)((long)param_1 + 0xc) + 1;
    *(uint *)((long)param_1 + 0xc) = uVar1;
    if (*(uint *)(param_1 + 1) <= uVar1 + (uVar1 >> 2)) {
      Resize(param_1);
      iVar6 = (int)param_1[1];
      lVar5 = *param_1;
      uVar7 = (ulong)(iVar6 - 1U & param_3);
      lVar4 = *(long *)(lVar5 + uVar7 * 0x18);
      while (lVar4 != 0) {
        if (*(uint *)(lVar5 + uVar7 * 0x18 + 0x10) == param_3) {
          uVar2 = (*(code *)param_1[2])(*param_2);
          if ((uVar2 & 1) != 0) {
            lVar5 = *param_1;
            break;
          }
          iVar6 = (int)param_1[1];
          lVar5 = *param_1;
        }
        uVar7 = (ulong)((int)uVar7 + 1U & iVar6 - 1U);
        lVar4 = *(long *)(lVar5 + uVar7 * 0x18);
      }
      pTVar3 = (TemplateHashMapEntry *)(lVar5 + uVar7 * 0x18);
    }
  }
  return pTVar3;
}

