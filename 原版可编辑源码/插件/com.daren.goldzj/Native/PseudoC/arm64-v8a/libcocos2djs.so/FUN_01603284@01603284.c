
long FUN_01603284(undefined1 param_1,undefined8 *param_2)

{
  Zone *pZVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  puVar5 = (undefined1 *)param_2[2];
  if ((undefined1 *)param_2[3] < puVar5 + 1) {
    pZVar1 = (Zone *)*param_2;
    pvVar2 = *(void **)(pZVar1 + 0x10);
    uVar4 = ((long)param_2[3] - param_2[1]) * 2 | 1;
    uVar3 = uVar4 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pvVar2) < uVar3) {
      pvVar2 = (void *)v8::internal::Zone::NewExpand(pZVar1,uVar3);
    }
    else {
      *(ulong *)(pZVar1 + 0x10) = uVar3 + (long)pvVar2;
    }
    memcpy(pvVar2,(void *)param_2[1],param_2[2] - (long)param_2[1]);
    param_2[3] = (long)pvVar2 + uVar4;
    puVar5 = (undefined1 *)((long)pvVar2 + (param_2[2] - param_2[1]));
    param_2[1] = pvVar2;
    param_2[2] = puVar5;
  }
  param_2[2] = puVar5 + 1;
  *puVar5 = param_1;
  lVar6 = param_2[2];
  lVar7 = lVar6 - param_2[1];
  if ((ulong)param_2[3] < lVar6 + 5U) {
    pZVar1 = (Zone *)*param_2;
    lVar6 = (param_2[3] - param_2[1]) * 2;
    pvVar2 = *(void **)(pZVar1 + 0x10);
    uVar4 = lVar6 + 0xcU & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pvVar2) < uVar4) {
      pvVar2 = (void *)v8::internal::Zone::NewExpand(pZVar1,uVar4);
    }
    else {
      *(ulong *)(pZVar1 + 0x10) = (long)pvVar2 + uVar4;
    }
    memcpy(pvVar2,(void *)param_2[1],param_2[2] - (long)param_2[1]);
    param_2[3] = (long)pvVar2 + lVar6 + 5;
    lVar6 = (long)pvVar2 + (param_2[2] - param_2[1]);
    param_2[1] = pvVar2;
    param_2[2] = lVar6;
  }
  param_2[2] = lVar6 + 5;
  return lVar7;
}

