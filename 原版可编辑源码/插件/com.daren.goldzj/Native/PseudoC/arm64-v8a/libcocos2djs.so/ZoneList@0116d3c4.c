
/* v8::internal::ZoneList<v8::internal::AstRawString
   const*>::ZoneList(v8::internal::ZoneList<v8::internal::AstRawString const*> const&,
   v8::internal::Zone*) */

void __thiscall
v8::internal::ZoneList<v8::internal::AstRawString_const*>::ZoneList
          (ZoneList<v8::internal::AstRawString_const*> *this,ZoneList *param_1,Zone *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((int)uVar2 < 1) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar5 = (ulong)uVar2 * 8;
    if (uVar5 < (ulong)(*(long *)(param_2 + 0x18) - (long)pvVar4) ||
        uVar5 - (*(long *)(param_2 + 0x18) - (long)pvVar4) == 0) {
      *(void **)(param_2 + 0x10) = (void *)((long)pvVar4 + uVar5);
    }
    else {
      pvVar4 = (void *)Zone::NewExpand(param_2,uVar5);
    }
  }
  *(void **)this = pvVar4;
  *(uint *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = 0;
  uVar3 = *(uint *)(param_1 + 0xc);
  puVar7 = *(undefined8 **)param_1;
  if ((int)uVar2 < (int)uVar3) {
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar5 = (long)(int)uVar3 * 8;
    if (uVar5 < (ulong)(*(long *)(param_2 + 0x18) - (long)pvVar4) ||
        uVar5 - (*(long *)(param_2 + 0x18) - (long)pvVar4) == 0) {
      *(void **)(param_2 + 0x10) = (void *)((long)pvVar4 + uVar5);
    }
    else {
      pvVar4 = (void *)Zone::NewExpand(param_2,uVar5);
    }
    if (0 < (int)*(uint *)(this + 0xc)) {
      MemCopy(pvVar4,*(void **)this,(ulong)*(uint *)(this + 0xc) << 3);
    }
    *(void **)this = pvVar4;
    *(uint *)(this + 8) = uVar3;
  }
  if ((0 < (int)uVar3) &&
     (*(undefined8 *)((long)pvVar4 + (long)*(int *)(this + 0xc) * 8) = *puVar7, uVar3 != 1)) {
    uVar5 = 1;
    do {
      puVar1 = puVar7 + uVar5;
      iVar6 = (int)uVar5;
      uVar5 = uVar5 + 1;
      *(undefined8 *)(*(long *)this + (long)(iVar6 + *(int *)(this + 0xc)) * 8) = *puVar1;
    } while (uVar3 != uVar5);
  }
  *(uint *)(this + 0xc) = uVar3;
  return;
}

