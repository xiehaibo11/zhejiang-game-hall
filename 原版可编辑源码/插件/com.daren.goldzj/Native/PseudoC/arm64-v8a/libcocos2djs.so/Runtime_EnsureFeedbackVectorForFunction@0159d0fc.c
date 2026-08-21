
/* v8::internal::Runtime_EnsureFeedbackVectorForFunction(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_EnsureFeedbackVectorForFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0159d1f4(param_1,param_2,param_3);
    return uVar4;
  }
  pIVar1 = param_3 + 0x95a0;
  iVar3 = *(int *)(param_3 + 0x95b0);
  uVar4 = *(undefined8 *)pIVar1;
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar3 + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (uVar6 = uVar5 & 0xffffffff00000000 | 7, *(short *)(uVar6 + *(uint *)(uVar5 - 1)) != 0x439)) {
    uVar7 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)pIVar1 = uVar4;
    *(int *)(param_3 + 0x95b0) = iVar3;
  }
  else {
    if (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) != 0x439) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
    }
    FUN_015af7a8(param_2);
    uVar7 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)pIVar1 = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  return uVar7;
}

