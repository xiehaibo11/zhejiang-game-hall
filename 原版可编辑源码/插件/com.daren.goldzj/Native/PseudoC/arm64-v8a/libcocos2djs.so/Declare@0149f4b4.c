
/* v8::internal::VariableMap::Declare(v8::internal::Zone*, v8::internal::Scope*,
   v8::internal::AstRawString const*, v8::internal::VariableMode, v8::internal::VariableKind,
   v8::internal::InitializationFlag, v8::internal::MaybeAssignedFlag, v8::internal::IsStaticFlag,
   bool*) */

undefined8 * __thiscall
v8::internal::VariableMap::Declare
          (VariableMap *this,Zone *param_1,undefined8 param_2,long param_3,ushort param_5,
          ushort param_6,short param_7,short param_8,byte param_9,undefined8 param_10)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *(uint *)(param_3 + 0x18) >> 3;
  uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar2);
  plVar6 = (long *)(*(long *)this + uVar4 * 0x18);
  lVar5 = *plVar6;
  while (lVar5 != 0) {
    if (lVar5 == param_3) goto LAB_0149f5f4;
    uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
    plVar6 = (long *)(*(long *)this + uVar4 * 0x18);
    lVar5 = *plVar6;
  }
  *plVar6 = param_3;
  plVar6[1] = 0;
  *(uint *)(plVar6 + 2) = uVar2;
  uVar1 = *(int *)(this + 0xc) + 1;
  *(uint *)(this + 0xc) = uVar1;
  if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
    base::
    TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
    ::Resize((TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
              *)this,param_1);
    uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar2);
    plVar6 = (long *)(*(long *)this + uVar4 * 0x18);
    lVar5 = *plVar6;
    while ((lVar5 != 0 && (lVar5 != param_3))) {
      uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
      plVar6 = (long *)(*(long *)this + uVar4 * 0x18);
      lVar5 = *plVar6;
    }
  }
LAB_0149f5f4:
  lVar5 = plVar6[1];
  *(bool *)param_10 = lVar5 == 0;
  if (lVar5 == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < 0x30) {
      puVar3 = (undefined8 *)Zone::NewExpand(param_1,0x30);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar3 + 6;
    }
    *puVar3 = param_2;
    puVar3[1] = param_3;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0xffffffffffffffff;
    *(ushort *)(puVar3 + 5) =
         param_5 & 0xff | (param_6 & 0xff) << 4 | param_7 << 0xc | param_8 << 0xe |
         (ushort)param_9 << 0xf;
    plVar6[1] = (long)puVar3;
  }
  else {
    puVar3 = (undefined8 *)plVar6[1];
  }
  return puVar3;
}

