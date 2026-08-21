
/* v8::internal::Processor::AssignUndefinedBefore(v8::internal::Statement*) */

undefined8 * __thiscall
v8::internal::Processor::AssignUndefinedBefore(Processor *this,Statement *param_1)

{
  uint uVar1;
  uint uVar2;
  Zone *pZVar3;
  undefined8 uVar4;
  Expression *pEVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  void *pvVar11;
  
  pZVar3 = *(Zone **)(this + 0x20);
  pEVar5 = *(Expression **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pEVar5) < 0x10) {
    pEVar5 = (Expression *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(Expression **)(pZVar3 + 0x10) = pEVar5 + 0x10;
  }
  *(undefined8 *)pEVar5 = 0x329ffffffff;
  uVar4 = SetResult(this,pEVar5);
  pZVar3 = *(Zone **)(this + 0x20);
  puVar6 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar6) < 0x20) {
    puVar6 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar6 + 4;
  }
  pZVar3 = *(Zone **)(this + 0x20);
  *puVar6 = 0x47ffffffff;
  lVar7 = *(long *)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar7) < 0x10) {
    lVar7 = Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(long *)(pZVar3 + 0x10) = lVar7 + 0x10;
  }
  puVar6[1] = lVar7;
  puVar6[3] = 0;
  puVar6[2] = 2;
  pZVar3 = *(Zone **)(this + 0x20);
  puVar8 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar8) < 0x10) {
    puVar8 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar8 + 2;
  }
  puVar8[1] = uVar4;
  *puVar8 = 0x9ffffffff;
  uVar2 = *(uint *)(puVar6 + 2);
  uVar10 = *(uint *)((long)puVar6 + 0x14);
  if ((int)uVar10 < (int)uVar2) {
    pvVar11 = (void *)puVar6[1];
  }
  else {
    pZVar3 = *(Zone **)(this + 0x10);
    uVar1 = uVar2 << 1 | 1;
    uVar9 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar11 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar11) < uVar9) {
      pvVar11 = (void *)Zone::NewExpand(pZVar3,uVar9);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar11 + uVar9;
    }
    uVar10 = *(uint *)((long)puVar6 + 0x14);
    if (0 < (int)uVar10) {
      MemCopy(pvVar11,(void *)puVar6[1],(ulong)uVar10 << 3);
      uVar10 = *(uint *)((long)puVar6 + 0x14);
    }
    puVar6[1] = pvVar11;
    *(uint *)(puVar6 + 2) = uVar1;
  }
  *(uint *)((long)puVar6 + 0x14) = uVar10 + 1;
  *(undefined8 **)((long)pvVar11 + (long)(int)uVar10 * 8) = puVar8;
  uVar2 = *(uint *)(puVar6 + 2);
  uVar10 = *(uint *)((long)puVar6 + 0x14);
  if ((int)uVar10 < (int)uVar2) {
    pvVar11 = (void *)puVar6[1];
  }
  else {
    pZVar3 = *(Zone **)(this + 0x10);
    uVar1 = uVar2 << 1 | 1;
    uVar9 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar11 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar11) < uVar9) {
      pvVar11 = (void *)Zone::NewExpand(pZVar3,uVar9);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar11 + uVar9;
    }
    uVar10 = *(uint *)((long)puVar6 + 0x14);
    if (0 < (int)uVar10) {
      MemCopy(pvVar11,(void *)puVar6[1],(ulong)uVar10 << 3);
      uVar10 = *(uint *)((long)puVar6 + 0x14);
    }
    puVar6[1] = pvVar11;
    *(uint *)(puVar6 + 2) = uVar1;
  }
  *(uint *)((long)puVar6 + 0x14) = uVar10 + 1;
  *(Statement **)((long)pvVar11 + (long)(int)uVar10 * 8) = param_1;
  return puVar6;
}

