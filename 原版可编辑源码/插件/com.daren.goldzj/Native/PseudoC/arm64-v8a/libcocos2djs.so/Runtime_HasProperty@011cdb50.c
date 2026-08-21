
/* v8::internal::Runtime_HasProperty(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_HasProperty(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  LookupIterator aLStack_98 [88];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_011cdccc(param_1,param_2,param_3);
    return uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar4 = param_2 + -1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)) {
    puVar5 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,0x40,puVar4,param_2,0);
    uVar8 = Isolate::Throw(param_3,*puVar5,0);
  }
  else {
    uVar7 = *puVar4;
    if (((uVar7 & 1) == 0) ||
       (0x40 < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
      puVar4 = (ulong *)Object::ConvertToName(param_3,puVar4);
    }
    if (puVar4 != (ulong *)0x0) {
      LookupIterator::PropertyOrElement
                (aLStack_98,(ulong)*(uint *)((long)param_2 + 4) << 0x20,param_2,puVar4,param_2,3);
      uVar3 = JSReceiver::HasProperty(aLStack_98);
      if ((uVar3 & 0xff) != 0) {
        lVar1 = 0xb8;
        if (uVar3 < 0x100) {
          lVar1 = 0xc0;
        }
        uVar8 = *(undefined8 *)(param_3 + lVar1);
        goto LAB_011cdc60;
      }
    }
    uVar8 = *(undefined8 *)(param_3 + 0x180);
  }
LAB_011cdc60:
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar8;
}

