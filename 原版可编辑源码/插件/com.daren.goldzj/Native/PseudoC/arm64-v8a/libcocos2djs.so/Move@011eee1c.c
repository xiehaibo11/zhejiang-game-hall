
/* v8::internal::CodeAddressMap::NameMap::Move(unsigned long, unsigned long) */

void __thiscall
v8::internal::CodeAddressMap::NameMap::Move(NameMap *this,ulong param_1,ulong param_2)

{
  uint uVar1;
  void **ppvVar2;
  long lVar3;
  void **ppvVar4;
  ulong uVar5;
  void *pvVar6;
  
  if (param_1 != param_2) {
    uVar1 = ~(uint)param_1 + (uint)param_1 * 0x8000;
    uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
    uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
    uVar5 = (ulong)(*(int *)(this + 8) - 1U & (uVar1 & 0x3fffffff ^ uVar1 >> 0x10));
    ppvVar4 = (void **)(*(long *)this + uVar5 * 0x18);
    pvVar6 = *ppvVar4;
    while (pvVar6 != (void *)0x0) {
      if (pvVar6 == (void *)param_1) goto LAB_011eeeb4;
      uVar5 = (ulong)((int)uVar5 + 1U & *(int *)(this + 8) - 1U);
      ppvVar4 = (void **)(*(long *)this + uVar5 * 0x18);
      pvVar6 = *ppvVar4;
    }
    param_1 = 0;
LAB_011eeeb4:
    ppvVar2 = (void **)0x0;
    if (param_1 != 0) {
      ppvVar2 = ppvVar4;
    }
    pvVar6 = ppvVar2[1];
    base::
    TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
    ::Remove((TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
              *)this,ppvVar2,*(uint *)(ppvVar2 + 2));
    lVar3 = FindOrCreateEntry(this,param_2);
    *(void **)(lVar3 + 8) = pvVar6;
  }
  return;
}

