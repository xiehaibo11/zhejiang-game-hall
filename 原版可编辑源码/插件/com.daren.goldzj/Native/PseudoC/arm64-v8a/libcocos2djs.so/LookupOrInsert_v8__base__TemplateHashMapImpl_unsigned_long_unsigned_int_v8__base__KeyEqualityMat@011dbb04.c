
/* v8::base::TemplateHashMapEntry<unsigned long, unsigned int>*
   v8::base::TemplateHashMapImpl<unsigned long, unsigned int, v8::base::KeyEqualityMatcher<long>,
   v8::base::DefaultAllocationPolicy>::LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned long,
   unsigned int, v8::base::KeyEqualityMatcher<long>,
   v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned long const&, unsigned int,
   v8::base::DefaultAllocationPolicy)::{lambda()#1}>(unsigned long const&, unsigned int,
   v8::base::TemplateHashMapImpl<unsigned long, unsigned int, v8::base::KeyEqualityMatcher<long>,
   v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned long const&, unsigned int,
   v8::base::DefaultAllocationPolicy)::{lambda()#1} const&, v8::base::DefaultAllocationPolicy) */

TemplateHashMapEntry *
v8::base::
TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
::
LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
          (long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  TemplateHashMapEntry *pTVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar1 = (int)param_1[1] - 1;
  uVar4 = (ulong)(uVar1 & param_3);
  pTVar2 = (TemplateHashMapEntry *)(lVar3 + uVar4 * 0x18);
  if ((pTVar2[0x10] != (TemplateHashMapEntry)0x0) && (*param_2 != *(long *)(lVar3 + uVar4 * 0x18)))
  {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
      if (*(char *)(lVar3 + uVar4 * 0x18 + 0x10) == '\0') break;
    } while (*param_2 != *(long *)(lVar3 + uVar4 * 0x18));
    pTVar2 = (TemplateHashMapEntry *)(lVar3 + uVar4 * 0x18);
  }
  if (pTVar2[0x10] == (TemplateHashMapEntry)0x0) {
    lVar3 = *param_2;
    *(undefined4 *)(pTVar2 + 8) = 0;
    *(uint *)(pTVar2 + 0xc) = param_3;
    pTVar2[0x10] = (TemplateHashMapEntry)0x1;
    *(long *)pTVar2 = lVar3;
    uVar1 = *(int *)((long)param_1 + 0xc) + 1;
    *(uint *)((long)param_1 + 0xc) = uVar1;
    if (*(uint *)(param_1 + 1) <= uVar1 + (uVar1 >> 2)) {
      Resize(param_1);
      lVar3 = *param_1;
      uVar1 = (int)param_1[1] - 1;
      uVar4 = (ulong)(uVar1 & param_3);
      pTVar2 = (TemplateHashMapEntry *)(lVar3 + uVar4 * 0x18);
      if ((pTVar2[0x10] != (TemplateHashMapEntry)0x0) &&
         (*param_2 != *(long *)(lVar3 + uVar4 * 0x18))) {
        do {
          uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
          if (*(char *)(lVar3 + uVar4 * 0x18 + 0x10) == '\0') break;
        } while (*param_2 != *(long *)(lVar3 + uVar4 * 0x18));
        pTVar2 = (TemplateHashMapEntry *)(lVar3 + uVar4 * 0x18);
      }
    }
  }
  return pTVar2;
}

