
/* v8::internal::Runtime_CompleteInobjectSlackTrackingForMap(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_CompleteInobjectSlackTrackingForMap
          (int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong local_28;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_011cf098(param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_28 = *param_2;
  if (((local_28 & 1) != 0) &&
     (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0xa2)) {
    Map::CompleteInobjectSlackTracking((Map *)&local_28,param_3);
    uVar3 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsMap()");
}

