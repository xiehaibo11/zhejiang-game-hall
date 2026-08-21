
undefined8 FUN_015a2230(int param_1,byte *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  undefined8 local_38;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x225);
  }
  if (DAT_01d47558 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47558 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d47558;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47558 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_DebugTrackRetainingPath",0,0,0,0,0,0,0
                       ,&local_60,0);
    plVar3 = local_58;
    local_58 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_60;
    local_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_DebugTrackRetainingPath";
    local_a8 = pbVar2;
    local_98 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (v8::internal::FLAG_track_retaining_path == '\0') {
    v8::internal::PrintF("DebugTrackRetainingPath requires --track-retaining-path flag.\n");
    goto LAB_015a2440;
  }
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsHeapObject()");
  }
  if (param_1 == 2) {
    plVar3 = *(long **)(param_2 + -8);
    if ((((ulong)plVar3 & 1) == 0) ||
       (0x3f < *(ushort *)
                (((ulong)plVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar3 - 1)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsString()");
    }
    local_60 = plVar3;
    uVar5 = v8::internal::String::IsOneByteEqualTo(&local_60,"track-ephemeron-path",0x14);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)(param_2 + -8) + 7) != 0) {
        v8::internal::PrintF("Unexpected second argument of DebugTrackRetainingPath.\n");
        local_38 = *(undefined8 *)(param_2 + -8);
        v8::internal::String::ToCString(&local_60,&local_38,1,1,0);
        v8::internal::PrintF
                  ("Expected an empty string or \'%s\', got \'%s\'.\n","track-ephemeron-path",
                   local_60);
        plVar3 = local_60;
        local_60 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          operator_delete__(plVar3);
        }
      }
      goto LAB_015a242c;
    }
    uVar6 = 1;
  }
  else {
LAB_015a242c:
    uVar6 = 0;
  }
  v8::internal::Heap::AddRetainingPathTarget((Heap *)(param_3 + 0x8850),param_2,uVar6);
LAB_015a2440:
  uVar6 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar6;
}

