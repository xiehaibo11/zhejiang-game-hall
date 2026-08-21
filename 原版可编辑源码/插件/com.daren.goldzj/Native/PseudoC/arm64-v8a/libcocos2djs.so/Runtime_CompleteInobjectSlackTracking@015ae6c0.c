
/* v8::internal::Runtime_CompleteInobjectSlackTracking(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_CompleteInobjectSlackTracking(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_28;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015ae7a8(param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar3 = *param_2;
  if (((uVar3 & 1) != 0) &&
     (0xa9 < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)))) {
    local_28 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1);
    Map::CompleteInobjectSlackTracking((Map *)&local_28,param_3);
    uVar4 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
}

