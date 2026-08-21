
/* v8::internal::VariableMap::Add(v8::internal::Zone*, v8::internal::Variable*) */

void __thiscall v8::internal::VariableMap::Add(VariableMap *this,Zone *param_1,Variable *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 8);
  uVar2 = *(uint *)(lVar6 + 0x18) >> 3;
  uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar2);
  plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
  lVar5 = *plVar3;
  while (lVar5 != 0) {
    if (lVar5 == lVar6) goto LAB_0149f8d8;
    uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
    plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
    lVar5 = *plVar3;
  }
  *plVar3 = lVar6;
  plVar3[1] = 0;
  *(uint *)(plVar3 + 2) = uVar2;
  uVar1 = *(int *)(this + 0xc) + 1;
  *(uint *)(this + 0xc) = uVar1;
  if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
    base::
    TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
    ::Resize((TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
              *)this);
    uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar2);
    plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
    lVar5 = *plVar3;
    while ((lVar5 != 0 && (lVar5 != lVar6))) {
      uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
      plVar3 = (long *)(*(long *)this + uVar4 * 0x18);
      lVar5 = *plVar3;
    }
  }
LAB_0149f8d8:
  plVar3[1] = (long)param_2;
  return;
}

