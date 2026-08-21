
/* v8::internal::Runtime_ObjectKeys(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ObjectKeys(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar4 = *param_2;
    if (((uVar4 & 1) == 0) ||
       (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)) {
      param_2 = (ulong *)Object::ToObjectImpl(param_3,param_2,0);
    }
    if ((param_2 == (ulong *)0x0) ||
       (pIVar2 = (Isolate *)KeyAccumulator::GetKeys(param_2,0,0x12,0,0,0), pIVar2 == (Isolate *)0x0)
       ) {
      pIVar2 = param_3 + 0x180;
    }
    uVar5 = *(undefined8 *)pIVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
  uVar3 = FUN_011c77d8(param_1,param_2,param_3);
  return uVar3;
}

