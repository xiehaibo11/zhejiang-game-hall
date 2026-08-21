
undefined8 FUN_011c6810(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x10e);
  }
  if (DAT_01d3fa18 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fa18 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d3fa18;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d3fa18 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_LiveEditPatchScript",0,0,0,0,0,0,0,
                       &local_70,0);
    plVar4 = local_68;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_70;
    local_70 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_LiveEditPatchScript";
    local_b8 = pbVar3;
    local_a8 = uVar5;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if ((uVar9 & 1) == 0) {
LAB_011c6b78:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  uVar8 = uVar9 & 0xffffffff00000000;
  if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x439) goto LAB_011c6b78;
  uVar10 = param_2[-1];
  if (((uVar10 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar9 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar9 + 0xb)) + 0xf);
  if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x5b) {
    uVar9 = uVar8 | *(uint *)(uVar9 + 0xb);
  }
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = puVar1;
    if (puVar2 == puVar1) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar9;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
  }
  local_70 = (long *)((ulong)local_70 & 0xffffff0000000000);
  local_68 = (long *)0x0;
  uStack_60 = 0;
  local_58 = 0xffffffffffffffff;
  v8::internal::LiveEdit::PatchScript(param_3,puVar6,param_2 + -1,0,&local_70);
  switch((ulong)local_70 & 0xffffffff) {
  default:
    uVar5 = *(undefined8 *)(param_3 + 0xa0);
    goto LAB_011c6ac8;
  case 1:
    pcVar11 = "LiveEdit failed: COMPILE_ERROR";
    uVar5 = 0x1f;
    break;
  case 2:
    pcVar11 = "LiveEdit failed: BLOCKED_BY_RUNNING_GENERATOR";
    uVar5 = 0x2e;
    break;
  case 3:
    pcVar11 = "LiveEdit failed: BLOCKED_BY_FUNCTION_ABOVE_BREAK_FRAME";
    uVar5 = 0x37;
    break;
  case 4:
    pcVar11 = "LiveEdit failed: BLOCKED_BY_FUNCTION_BELOW_NON_DROPPABLE_FRAME";
    uVar5 = 0x3f;
    break;
  case 5:
    pcVar11 = "LiveEdit failed: BLOCKED_BY_ACTIVE_FUNCTION";
    uVar5 = 0x2c;
    break;
  case 6:
    pcVar11 = "LiveEdit failed: BLOCKED_BY_NEW_TARGET_IN_RESTART_FRAME";
    uVar5 = 0x38;
    break;
  case 7:
    pcVar11 = "LiveEdit failed: FRAME_RESTART_IS_NOT_SUPPORTED";
    uVar5 = 0x30;
  }
  uStack_48 = __strlen_chk(pcVar11,uVar5);
  local_50 = pcVar11;
  puVar7 = (undefined8 *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
  if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  uVar5 = v8::internal::Isolate::Throw(param_3,*puVar7,0);
LAB_011c6ac8:
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar5;
}

