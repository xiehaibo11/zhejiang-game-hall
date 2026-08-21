
/* rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(void*, unsigned long, unsigned
   long) */

void * __thiscall
rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc
          (MemoryPoolAllocator<rapidjson::CrtAllocator> *this,void *param_1,ulong param_2,
          ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  if (param_1 == (void *)0x0) {
    if (param_3 == 0) {
      return (void *)0x0;
    }
    puVar8 = *(ulong **)this;
    uVar6 = param_3 + 7 & 0xfffffffffffffff8;
    if ((puVar8 == (ulong *)0x0) || (uVar7 = puVar8[1], puVar3 = puVar8, *puVar8 < uVar7 + uVar6)) {
      uVar4 = *(ulong *)(this + 8);
      if (*(ulong *)(this + 8) <= uVar6) {
        uVar4 = uVar6;
      }
      if (*(long *)(this + 0x18) == 0) {
        pvVar2 = operator_new(1);
        *(void **)(this + 0x18) = pvVar2;
        *(void **)(this + 0x20) = pvVar2;
      }
      if (uVar4 == 0xffffffffffffffe8) {
        return (void *)0x0;
      }
      puVar3 = malloc(uVar4 + 0x18);
      if (puVar3 == (ulong *)0x0) {
        return (void *)0x0;
      }
      uVar7 = 0;
      puVar3[2] = (ulong)puVar8;
      *puVar3 = uVar4;
      puVar3[1] = 0;
      *(ulong **)this = puVar3;
    }
    puVar3[1] = uVar7 + uVar6;
    return (void *)((long)puVar3 + uVar7 + 0x18);
  }
  if (param_3 == 0) {
    return (void *)0x0;
  }
  uVar6 = param_2 + 7 & 0xfffffffffffffff8;
  uVar7 = param_3 + 7 & 0xfffffffffffffff8;
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    return param_1;
  }
  puVar8 = *(ulong **)this;
  uVar4 = puVar8[1];
  if ((void *)((long)puVar8 + (uVar4 - uVar6) + 0x18) == param_1) {
    uVar5 = *puVar8;
    uVar1 = uVar4 + (uVar7 - uVar6);
    if (uVar1 <= uVar5) {
      puVar8[1] = uVar1;
      return param_1;
    }
LAB_00c6c738:
    puVar3 = puVar8;
    if (uVar7 + uVar4 <= uVar5) goto LAB_00c6c788;
  }
  else if (puVar8 != (ulong *)0x0) {
    uVar5 = *puVar8;
    goto LAB_00c6c738;
  }
  uVar1 = *(ulong *)(this + 8);
  if (*(ulong *)(this + 8) <= uVar7) {
    uVar1 = uVar7;
  }
  if (*(long *)(this + 0x18) == 0) {
    pvVar2 = operator_new(1);
    *(void **)(this + 0x18) = pvVar2;
    *(void **)(this + 0x20) = pvVar2;
  }
  if ((uVar1 + 0x18 == 0) || (puVar3 = malloc(uVar1 + 0x18), puVar3 == (ulong *)0x0)) {
    return (void *)0x0;
  }
  uVar4 = 0;
  puVar3[2] = (ulong)puVar8;
  *puVar3 = uVar1;
  puVar3[1] = 0;
  *(ulong **)this = puVar3;
LAB_00c6c788:
  pvVar2 = (void *)((long)puVar3 + uVar4 + 0x18);
  puVar3[1] = uVar4 + uVar7;
  if (uVar6 != 0) {
    memcpy(pvVar2,param_1,uVar6);
    return pvVar2;
  }
  return pvVar2;
}

