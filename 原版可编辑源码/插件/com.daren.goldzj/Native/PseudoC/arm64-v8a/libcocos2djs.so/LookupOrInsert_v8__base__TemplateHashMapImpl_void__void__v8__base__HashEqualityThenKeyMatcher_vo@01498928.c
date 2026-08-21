
/* v8::base::TemplateHashMapEntry<void*, void*>* v8::base::TemplateHashMapImpl<void*, void*,
   v8::base::HashEqualityThenKeyMatcher<void*, bool (*)(void*, void*)>,
   v8::internal::ZoneAllocationPolicy>::LookupOrInsert<v8::base::TemplateHashMapImpl<void*, void*,
   v8::base::HashEqualityThenKeyMatcher<void*, bool (*)(void*, void*)>,
   v8::internal::ZoneAllocationPolicy>::LookupOrInsert(void* const&, unsigned int,
   v8::internal::ZoneAllocationPolicy)::{lambda()#1}>(void* const&, unsigned int,
   v8::base::TemplateHashMapImpl<void*, void*, v8::base::HashEqualityThenKeyMatcher<void*, bool
   (*)(void*, void*)>, v8::internal::ZoneAllocationPolicy>::LookupOrInsert(void* const&, unsigned
   int, v8::internal::ZoneAllocationPolicy)::{lambda()#1} const&,
   v8::internal::ZoneAllocationPolicy) */

TemplateHashMapEntry * __thiscall
v8::base::
TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
::
LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::internal::ZoneAllocationPolicy)::_lambda()_1_>
          (TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
           *this,undefined8 *param_1,uint param_2,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  TemplateHashMapEntry *pTVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  iVar6 = *(int *)(this + 8);
  lVar5 = *(long *)this;
  uVar7 = (ulong)(iVar6 - 1U & param_2);
  lVar4 = *(long *)(lVar5 + uVar7 * 0x18);
  while (lVar4 != 0) {
    if (*(uint *)(lVar5 + uVar7 * 0x18 + 0x10) == param_2) {
      uVar2 = (**(code **)(this + 0x10))(*param_1,lVar4);
      if ((uVar2 & 1) != 0) {
        lVar5 = *(long *)this;
        break;
      }
      iVar6 = *(int *)(this + 8);
      lVar5 = *(long *)this;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & iVar6 - 1U);
    lVar4 = *(long *)(lVar5 + uVar7 * 0x18);
  }
  pTVar3 = (TemplateHashMapEntry *)(lVar5 + uVar7 * 0x18);
  if (*(long *)pTVar3 == 0) {
    lVar5 = lVar5 + uVar7 * 0x18;
    *(undefined8 *)pTVar3 = *param_1;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(uint *)(lVar5 + 0x10) = param_2;
    uVar1 = *(int *)(this + 0xc) + 1;
    *(uint *)(this + 0xc) = uVar1;
    if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
      Resize(this,param_5);
      iVar6 = *(int *)(this + 8);
      lVar5 = *(long *)this;
      uVar7 = (ulong)(iVar6 - 1U & param_2);
      lVar4 = *(long *)(lVar5 + uVar7 * 0x18);
      while (lVar4 != 0) {
        if (*(uint *)(lVar5 + uVar7 * 0x18 + 0x10) == param_2) {
          uVar2 = (**(code **)(this + 0x10))(*param_1);
          if ((uVar2 & 1) != 0) {
            lVar5 = *(long *)this;
            break;
          }
          iVar6 = *(int *)(this + 8);
          lVar5 = *(long *)this;
        }
        uVar7 = (ulong)((int)uVar7 + 1U & iVar6 - 1U);
        lVar4 = *(long *)(lVar5 + uVar7 * 0x18);
      }
      pTVar3 = (TemplateHashMapEntry *)(lVar5 + uVar7 * 0x18);
    }
  }
  return pTVar3;
}

