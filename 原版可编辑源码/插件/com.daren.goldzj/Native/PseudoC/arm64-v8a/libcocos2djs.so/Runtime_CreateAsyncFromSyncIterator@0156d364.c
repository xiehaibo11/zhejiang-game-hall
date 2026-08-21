
/* v8::internal::Runtime_CreateAsyncFromSyncIterator(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_CreateAsyncFromSyncIterator(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_9c;
  Isolate *local_90;
  Isolate *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0156d560(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
    puVar3 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,0xa8,0,0,0);
    uVar6 = Isolate::Throw(param_3,*puVar3,0);
  }
  else {
    pIVar2 = param_3 + 0x848;
    local_68 = param_2;
    if (*(ushort *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9) {
      local_68 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                    (param_3,param_2,0xffffffffffffffff);
    }
    uVar5 = *(ulong *)pIVar2;
    local_a8 = 3;
    if ((*(short *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x40) &&
       (local_a8 = 3, (*(byte *)(uVar5 + 7) & 1) != 0)) {
      local_a8 = 0;
    }
    local_9c = 0xc000000000;
    local_90 = param_3;
    if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) & 0xffe0) ==
        0x20) {
      pIVar2 = (Isolate *)StringTable::LookupString(param_3,pIVar2);
    }
    uStack_80 = 0;
    uStack_70 = 0;
    local_58 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_88 = pIVar2;
    local_78 = param_2;
    LookupIterator::Start<false>((LookupIterator *)&local_a8);
    if (local_a4 == 4) {
      pIVar2 = local_90 + 0xa0;
    }
    else {
      pIVar2 = (Isolate *)Object::GetProperty((LookupIterator *)&local_a8,false);
      if (pIVar2 == (Isolate *)0x0) {
        uVar6 = *(undefined8 *)(param_3 + 0x180);
        goto LAB_0156d4ec;
      }
    }
    puVar3 = (undefined8 *)Factory::NewJSAsyncFromSyncIterator((Factory *)param_3,param_2,pIVar2);
    uVar6 = *puVar3;
  }
LAB_0156d4ec:
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

