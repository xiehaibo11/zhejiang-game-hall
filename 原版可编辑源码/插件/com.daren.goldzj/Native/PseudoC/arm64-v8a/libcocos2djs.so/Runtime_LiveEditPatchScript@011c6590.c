
/* v8::internal::Runtime_LiveEditPatchScript(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_LiveEditPatchScript(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_011c6810(param_1,param_2,param_3);
    return uVar9;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if ((uVar7 & 1) == 0) {
LAB_011c67d4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  uVar6 = uVar7 & 0xffffffff00000000;
  if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x439) goto LAB_011c67d4;
  uVar8 = param_2[-1];
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar7 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar7 + 0xb)) + 0xf);
  if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x5b) {
    uVar7 = uVar6 | *(uint *)(uVar7 + 0xb);
  }
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = puVar2;
    if (puVar3 == puVar2) {
      puVar4 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffffffffffff;
  LiveEdit::PatchScript(param_3,puVar4,param_2 + -1,0,&local_70);
  switch(local_70) {
  default:
    uVar9 = *(undefined8 *)(param_3 + 0xa0);
    goto LAB_011c6770;
  case 1:
    pcVar10 = "LiveEdit failed: COMPILE_ERROR";
    uVar9 = 0x1f;
    break;
  case 2:
    pcVar10 = "LiveEdit failed: BLOCKED_BY_RUNNING_GENERATOR";
    uVar9 = 0x2e;
    break;
  case 3:
    pcVar10 = "LiveEdit failed: BLOCKED_BY_FUNCTION_ABOVE_BREAK_FRAME";
    uVar9 = 0x37;
    break;
  case 4:
    pcVar10 = "LiveEdit failed: BLOCKED_BY_FUNCTION_BELOW_NON_DROPPABLE_FRAME";
    uVar9 = 0x3f;
    break;
  case 5:
    pcVar10 = "LiveEdit failed: BLOCKED_BY_ACTIVE_FUNCTION";
    uVar9 = 0x2c;
    break;
  case 6:
    pcVar10 = "LiveEdit failed: BLOCKED_BY_NEW_TARGET_IN_RESTART_FRAME";
    uVar9 = 0x38;
    break;
  case 7:
    pcVar10 = "LiveEdit failed: FRAME_RESTART_IS_NOT_SUPPORTED";
    uVar9 = 0x30;
  }
  uStack_48 = __strlen_chk(pcVar10,uVar9);
  local_50 = pcVar10;
  puVar5 = (undefined8 *)Factory::NewStringFromOneByte(param_3,&local_50,0);
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  uVar9 = Isolate::Throw(param_3,*puVar5,0);
LAB_011c6770:
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

