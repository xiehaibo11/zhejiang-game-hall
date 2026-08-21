
/* v8::internal::Runtime_ObjectCreate(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ObjectCreate(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_011c93b4(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (((int)uVar5 != *(int *)(param_3 + 0xb0) &&
      (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)))) {
    puVar2 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,0x73,param_2,0,0);
    uVar3 = Isolate::Throw(param_3,*puVar2,0);
    goto LAB_011c9358;
  }
  puVar2 = (undefined8 *)JSObject::ObjectCreate(param_3,param_2);
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = param_2[-1];
    if (((uVar5 & 1) != 0) && ((int)uVar5 == *(int *)(param_3 + 0xa0))) {
      uVar3 = *puVar2;
      goto LAB_011c9358;
    }
    puVar2 = (undefined8 *)JSReceiver::DefineProperties(param_3,puVar2,param_2 + -1);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *puVar2;
      goto LAB_011c9358;
    }
  }
  uVar3 = *(undefined8 *)(param_3 + 0x180);
LAB_011c9358:
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar3;
}

