
/* v8::internal::Runtime_GetHoleNaNLower(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_GetHoleNaNLower(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    puVar2 = (undefined8 *)Factory::NewNumberFromUint((Factory *)param_3,0xfff7ffff);
    uVar4 = *puVar2;
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar4;
  }
  uVar3 = FUN_015756a4(param_1,param_2,param_3);
  return uVar3;
}

