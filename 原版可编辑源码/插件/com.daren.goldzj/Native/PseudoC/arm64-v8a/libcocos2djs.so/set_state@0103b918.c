
/* v8::internal::Genesis::ExtensionStates::set_state(v8::RegisteredExtension*,
   v8::internal::Genesis::ExtensionTraversalState) */

void __thiscall
v8::internal::Genesis::ExtensionStates::set_state(ExtensionStates *this,long param_1,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = ~(uint)param_1 + (uint)param_1 * 0x8000;
  uVar2 = (uVar2 ^ uVar2 >> 0xc) * 5;
  uVar2 = (uVar2 ^ uVar2 >> 4) * 0x809;
  uVar2 = uVar2 & 0x3fffffff ^ uVar2 >> 0x10;
  uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar2);
  plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
  lVar5 = *plVar3;
  while (lVar5 != 0) {
    if (lVar5 == param_1) goto LAB_0103ba1c;
    uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
    plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
    lVar5 = *plVar3;
  }
  *plVar3 = param_1;
  plVar3[1] = 0;
  *(uint *)(plVar3 + 2) = uVar2;
  uVar1 = *(int *)(this + 0xc) + 1;
  *(uint *)(this + 0xc) = uVar1;
  if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
    base::
    TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
    ::Resize(this);
    uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar2);
    plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
    lVar5 = *plVar3;
    while ((lVar5 != 0 && (lVar5 != param_1))) {
      uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
      plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
      lVar5 = *plVar3;
    }
  }
LAB_0103ba1c:
  plVar3[1] = (ulong)param_3;
  return;
}

