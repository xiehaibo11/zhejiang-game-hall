
/* v8::internal::Runtime_PrepareFunctionForOptimization(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_PrepareFunctionForOptimization(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0159d5f8(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (uVar6 = uVar5 & 0xffffffff00000000 | 7, *(short *)(uVar6 + *(uint *)(uVar5 - 1)) == 0x439)) {
    if (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) != 0x439) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
    }
    if (param_1 == 2) {
      uVar5 = param_2[-1];
      if (((uVar5 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1))))
      goto LAB_0159d57c;
      local_48 = uVar5;
      uVar3 = String::IsOneByteEqualTo(&local_48,"allow heuristic optimization",0x1c);
    }
    else {
      uVar3 = 0;
    }
    uVar5 = FUN_015af7a8(param_2);
    if ((uVar5 & 1) != 0) {
      uVar6 = *param_2;
      uVar5 = uVar6 & 0xffffffff00000000;
      if (((((*(uint *)((uVar5 | *(uint *)(uVar6 + 0xb)) + 0x1b) & 0xf00000) == 0) ||
           ((*(uint *)((uVar5 | *(uint *)(uVar6 + 0xb)) + 0x1b) & 0xf00000) != 0xb00000)) &&
          ((uVar1 = *(uint *)((uVar5 | *(uint *)(uVar6 + 0xb)) + 3), (uVar1 & 1) == 0 ||
           (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar1) - 1)) != 0x57)))) &&
         (FLAG_testing_d8_test_runner != '\0')) {
        PendingOptimizationTable::PreparedForOptimization(param_3,param_2,uVar3 & 1);
      }
    }
  }
LAB_0159d57c:
  uVar7 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

