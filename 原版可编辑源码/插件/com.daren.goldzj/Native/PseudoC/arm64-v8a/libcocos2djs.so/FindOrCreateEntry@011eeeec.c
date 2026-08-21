
/* v8::internal::CodeAddressMap::NameMap::FindOrCreateEntry(unsigned long) */

void __thiscall
v8::internal::CodeAddressMap::NameMap::FindOrCreateEntry(NameMap *this,ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = ~(uint)param_1 + (uint)param_1 * 0x8000;
  uVar2 = (uVar2 ^ uVar2 >> 0xc) * 5;
  uVar2 = (uVar2 ^ uVar2 >> 4) * 0x809;
  uVar2 = uVar2 & 0x3fffffff ^ uVar2 >> 0x10;
  uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar2);
  puVar3 = (ulong *)(*(long *)this + uVar4 * 0x18);
  uVar5 = *puVar3;
  while( true ) {
    if (uVar5 == 0) {
      *puVar3 = param_1;
      puVar3[1] = 0;
      *(uint *)(puVar3 + 2) = uVar2;
      uVar1 = *(int *)(this + 0xc) + 1;
      *(uint *)(this + 0xc) = uVar1;
      if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
        base::
        TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
        ::Resize(this);
        uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar2);
        uVar5 = *(ulong *)(*(long *)this + uVar4 * 0x18);
        while ((uVar5 != 0 && (uVar5 != param_1))) {
          uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
          uVar5 = *(ulong *)(*(long *)this + uVar4 * 0x18);
        }
      }
      return;
    }
    if (uVar5 == param_1) break;
    uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
    puVar3 = (ulong *)(*(long *)this + uVar4 * 0x18);
    uVar5 = *puVar3;
  }
  return;
}

