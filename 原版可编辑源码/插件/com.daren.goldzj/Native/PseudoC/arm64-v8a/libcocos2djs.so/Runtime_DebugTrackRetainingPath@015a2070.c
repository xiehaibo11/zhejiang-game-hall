
/* v8::internal::Runtime_DebugTrackRetainingPath(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_DebugTrackRetainingPath(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_48;
  void *local_28;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_015a2230(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (FLAG_track_retaining_path == '\0') {
    PrintF("DebugTrackRetainingPath requires --track-retaining-path flag.\n");
    goto LAB_015a21a0;
  }
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsHeapObject()");
  }
  if (param_1 == 2) {
    local_28 = (void *)param_2[-1];
    if ((((ulong)local_28 & 1) == 0) ||
       (0x3f < *(ushort *)
                (((ulong)local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)local_28 - 1)))
       ) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsString()");
    }
    uVar3 = String::IsOneByteEqualTo(&local_28,"track-ephemeron-path",0x14);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(param_2[-1] + 7) != 0) {
        PrintF("Unexpected second argument of DebugTrackRetainingPath.\n");
        local_48 = param_2[-1];
        String::ToCString(&local_28,&local_48,1,1,0);
        PrintF("Expected an empty string or \'%s\', got \'%s\'.\n","track-ephemeron-path",local_28);
        pvVar2 = local_28;
        local_28 = (void *)0x0;
        if (pvVar2 != (void *)0x0) {
          operator_delete__(pvVar2);
        }
      }
      goto LAB_015a218c;
    }
    uVar5 = 1;
  }
  else {
LAB_015a218c:
    uVar5 = 0;
  }
  Heap::AddRetainingPathTarget((Heap *)(param_3 + 0x8850),param_2,uVar5);
LAB_015a21a0:
  uVar5 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

