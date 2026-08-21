
/* v8::internal::compiler::RefsMap::LookupOrInsert(unsigned long const&, v8::internal::Zone*) */

ulong * __thiscall
v8::internal::compiler::RefsMap::LookupOrInsert(RefsMap *this,ulong *param_1,Zone *param_2)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  lVar3 = *(long *)this;
  uVar5 = (uint)uVar6;
  uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar5);
  puVar2 = (ulong *)(lVar3 + uVar4 * 0x18);
  if ((*(char *)((long)puVar2 + 0x14) != '\0') && (uVar6 != *(ulong *)(lVar3 + uVar4 * 0x18))) {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
      if (*(char *)(lVar3 + uVar4 * 0x18 + 0x14) == '\0') break;
    } while (uVar6 != *(ulong *)(lVar3 + uVar4 * 0x18));
    puVar2 = (ulong *)(lVar3 + uVar4 * 0x18);
  }
  if (*(char *)((long)puVar2 + 0x14) == '\0') {
    *puVar2 = uVar6;
    puVar2[1] = 0;
    *(uint *)(puVar2 + 2) = uVar5;
    *(undefined1 *)((long)puVar2 + 0x14) = 1;
    uVar1 = *(int *)(this + 0xc) + 1;
    *(uint *)(this + 0xc) = uVar1;
    if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
      base::
      TemplateHashMapImpl<unsigned_long,v8::internal::compiler::ObjectData*,v8::internal::compiler::AddressMatcher,v8::internal::ZoneAllocationPolicy>
      ::Resize((TemplateHashMapImpl<unsigned_long,v8::internal::compiler::ObjectData*,v8::internal::compiler::AddressMatcher,v8::internal::ZoneAllocationPolicy>
                *)this,param_2);
      lVar3 = *(long *)this;
      uVar4 = (ulong)(*(int *)(this + 8) - 1U & uVar5);
      puVar2 = (ulong *)(lVar3 + uVar4 * 0x18);
      if ((*(char *)((long)puVar2 + 0x14) != '\0') && (*param_1 != *(ulong *)(lVar3 + uVar4 * 0x18))
         ) {
        do {
          uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
          if (*(char *)(lVar3 + uVar4 * 0x18 + 0x14) == '\0') break;
        } while (*param_1 != *(ulong *)(lVar3 + uVar4 * 0x18));
        puVar2 = (ulong *)(lVar3 + uVar4 * 0x18);
      }
    }
  }
  return puVar2;
}

