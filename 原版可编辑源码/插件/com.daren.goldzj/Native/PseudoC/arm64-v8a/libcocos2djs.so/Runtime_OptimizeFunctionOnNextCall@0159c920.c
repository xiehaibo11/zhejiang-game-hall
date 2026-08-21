
/* v8::internal::Runtime_OptimizeFunctionOnNextCall(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_OptimizeFunctionOnNextCall(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  IsCompiledScope local_60 [8];
  ulong uStack_58;
  ulong local_38;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_0159cc7c(param_1,param_2,param_3);
    return uVar8;
  }
  pIVar1 = param_3 + 0x95a0;
  iVar5 = *(int *)(param_3 + 0x95b0);
  uVar8 = *(undefined8 *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar5 + 1;
  if ((((1 < param_1 - 1U) || (uVar10 = *param_2, (uVar10 & 1) == 0)) ||
      (uVar9 = uVar10 & 0xffffffff00000000,
      *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x439)) ||
     ((*(uint *)((uVar9 | *(uint *)(uVar10 + 0xb)) + 0x1b) >> 0xc & 1) == 0)) {
    *(undefined8 *)pIVar1 = uVar8;
    *(int *)(param_3 + 0x95b0) = iVar5;
    return *(undefined8 *)(param_3 + 0xa0);
  }
  IsCompiledScope::IsCompiledScope(local_60,uVar9 | *(uint *)(uVar10 + 0xb));
  if ((((uStack_58 & 0xff) == 0) &&
      (uVar10 = Compiler::Compile(param_2,1,local_60), (uVar10 & 1) == 0)) || (FLAG_opt == '\0'))
  goto LAB_0159cc24;
  uVar9 = *param_2;
  uVar10 = uVar9 & 0xffffffff00000000;
  if ((((*(uint *)((uVar10 | *(uint *)(uVar9 + 0xb)) + 0x1b) & 0xf00000) != 0) &&
      ((*(uint *)((uVar10 | *(uint *)(uVar9 + 0xb)) + 0x1b) & 0xf00000) == 0xb00000)) ||
     ((uVar3 = *(uint *)((uVar10 | *(uint *)(uVar9 + 0xb)) + 3), (uVar3 & 1) != 0 &&
      (*(short *)((uVar10 | 7) + (ulong)*(uint *)((uVar10 | uVar3) - 1)) == 0x57))))
  goto LAB_0159cc24;
  if (FLAG_testing_d8_test_runner != '\0') {
    PendingOptimizationTable::MarkedForOptimization(param_3,param_2);
  }
  local_38 = *param_2;
  uVar10 = JSFunction::HasOptimizedCode((JSFunction *)&local_38);
  if ((uVar10 & 1) != 0) {
    if (FLAG_testing_d8_test_runner != '\0') {
      PendingOptimizationTable::FunctionWasOptimized(param_3,param_2);
    }
    goto LAB_0159cc24;
  }
  if (param_1 == 2) {
    uVar10 = param_2[-1];
    if (((uVar10 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1))))
    goto LAB_0159cc24;
    local_38 = uVar10;
    uVar10 = String::IsOneByteEqualTo(&local_38,"concurrent",10);
    if ((uVar10 & 1) == 0) goto LAB_0159cb18;
    bVar6 = *(long *)(param_3 + 0xc610) != 0;
  }
  else {
LAB_0159cb18:
    bVar6 = false;
  }
  if (FLAG_trace_opt != '\0') {
    PrintF("[manually marking ");
    local_38 = *param_2;
    Object::ShortPrint((Object *)&local_38,(__sFILE *)waitpid);
    pcVar2 = "concurrent";
    if (bVar6 == false) {
      pcVar2 = "non-concurrent";
    }
    PrintF(" for %s optimization]\n",pcVar2);
  }
  uVar9 = *param_2;
  uVar10 = uVar9 & 0xffffffff00000000;
  if (*(int *)((uVar10 | *(uint *)(uVar9 + 0x17)) + 0x27) == 0x42) {
LAB_0159cbac:
    uVar9 = *param_2;
    puVar7 = (ulong *)Builtins::builtin_handle((Builtins *)(param_3 + 0x9e00),0x38);
    uVar10 = *puVar7;
    *(int *)(uVar9 + 0x17) = (int)uVar10;
    if (((uVar10 & 1) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x17);
    }
  }
  else {
    uVar3 = *(uint *)((uVar10 | *(uint *)(uVar9 + 0xb)) + 3);
    if ((uVar3 == 0x84) ||
       (((uVar3 & 1) != 0 &&
        (*(ushort *)((uVar10 | 7) + (ulong)*(uint *)((uVar10 | uVar3) - 1)) - 0x95 < 2))))
    goto LAB_0159cbac;
  }
  JSFunction::EnsureFeedbackVector(param_2);
  local_38 = *param_2;
  JSFunction::MarkForOptimization((JSFunction *)&local_38,bVar6);
LAB_0159cc24:
  uVar11 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)pIVar1 = uVar8;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

