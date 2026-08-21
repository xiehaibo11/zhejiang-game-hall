
/* v8::internal::Runtime_DebugOnFunctionCall(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DebugOnFunctionCall(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ulong uVar2;
  Debug *pDVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_011c3a24(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar2 = *param_2;
  if (((uVar2 & 1) == 0) ||
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  if (*(char *)(*(long *)(param_3 + 0xb6c8) + 9) != '\0') {
    Deoptimizer::DeoptimizeFunction(uVar2,0);
    pDVar3 = *(Debug **)(param_3 + 0xb6c8);
    if (('\x01' < (char)pDVar3[0x4c]) || (pDVar3[0x84] != (Debug)0x0)) {
      Debug::PrepareStepIn(pDVar3,param_2);
    }
    if ((*(int *)(param_3 + 0xb80c) == 0x20) &&
       (uVar2 = Debug::PerformSideEffectCheck(*(Debug **)(param_3 + 0xb6c8),param_2,param_2 + -1),
       (uVar2 & 1) == 0)) {
      pIVar5 = param_3 + 0x180;
      goto LAB_011c39a8;
    }
  }
  pIVar5 = param_3 + 0xa0;
LAB_011c39a8:
  uVar6 = *(undefined8 *)pIVar5;
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

