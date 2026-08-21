
/* v8::internal::ScopedList<v8::internal::Expression*,
   void*>::CopyTo(v8::internal::ZoneList<v8::internal::Expression*>*, v8::internal::Zone*) const */

void __thiscall
v8::internal::ScopedList<v8::internal::Expression*,void*>::CopyTo
          (ScopedList<v8::internal::Expression*,void*> *this,ZoneList *param_1,Zone *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  iVar5 = (int)(*(long *)(this + 0x10) - *(long *)(this + 8));
  if (iVar5 != 0) {
    if (iVar5 < 1) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = *(void **)(param_2 + 0x10);
      uVar8 = (*(long *)(this + 0x10) - *(long *)(this + 8) & 0xffffffffU) * 8;
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)pvVar3) < uVar8) {
        pvVar3 = (void *)Zone::NewExpand(param_2,uVar8);
      }
      else {
        *(void **)(param_2 + 0x10) = (void *)((long)pvVar3 + uVar8);
      }
    }
    *(void **)param_1 = pvVar3;
    *(int *)(param_1 + 8) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 0;
    lVar6 = *(long *)(this + 8);
    lVar9 = **(long **)this;
    uVar8 = *(long *)(this + 0x10) - lVar6;
    iVar7 = (int)uVar8;
    if (iVar5 < iVar7) {
      pvVar3 = *(void **)(param_2 + 0x10);
      uVar4 = -(uVar8 >> 0x1f & 1) & 0xfffffff800000000 | (uVar8 & 0xffffffff) << 3;
      if ((ulong)(*(long *)(param_2 + 0x18) - (long)pvVar3) < uVar4) {
        pvVar3 = (void *)Zone::NewExpand(param_2,uVar4);
      }
      else {
        *(ulong *)(param_2 + 0x10) = (long)pvVar3 + uVar4;
      }
      if (0 < (int)*(uint *)(param_1 + 0xc)) {
        MemCopy(pvVar3,*(void **)param_1,(ulong)*(uint *)(param_1 + 0xc) << 3);
      }
      *(void **)param_1 = pvVar3;
      *(int *)(param_1 + 8) = iVar7;
    }
    if (0 < iVar7) {
      puVar2 = (undefined8 *)(lVar9 + lVar6 * 8);
      *(undefined8 *)((long)pvVar3 + (long)*(int *)(param_1 + 0xc) * 8) = *puVar2;
      if ((uVar8 & 0xffffffff) != 1) {
        lVar6 = 1;
        do {
          puVar1 = puVar2 + lVar6;
          iVar5 = (int)lVar6;
          lVar6 = lVar6 + 1;
          *(undefined8 *)(*(long *)param_1 + (long)(iVar5 + *(int *)(param_1 + 0xc)) * 8) = *puVar1;
        } while (iVar7 != lVar6);
      }
    }
    *(int *)(param_1 + 0xc) = iVar7;
  }
  return;
}

