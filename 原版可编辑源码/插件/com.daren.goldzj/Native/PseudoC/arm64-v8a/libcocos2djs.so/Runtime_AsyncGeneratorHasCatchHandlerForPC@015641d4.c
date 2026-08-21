
/* v8::internal::Runtime_AsyncGeneratorHasCatchHandlerForPC(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_AsyncGeneratorHasCatchHandlerForPC
          (int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int local_34;
  HandlerTable aHStack_30 [16];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_0156432c(param_1,param_2,param_3);
    return uVar2;
  }
  uVar8 = *param_2;
  if ((uVar8 & 1) != 0) {
    uVar3 = uVar8 & 0xffffffff00000000;
    uVar5 = uVar3 | 7;
    if (*(short *)(uVar5 + *(uint *)(uVar8 - 1)) == 0x419) {
      if (*(int *)(uVar8 + 0x1f) < 2) {
        uVar2 = *(undefined8 *)(param_3 + 0xc0);
      }
      else {
        uVar6 = uVar3 | *(uint *)((uVar3 | *(uint *)(uVar8 + 0xb)) + 0xb);
        uVar7 = uVar3 | *(uint *)(uVar6 + 0xf);
        if ((*(short *)(uVar5 + *(uint *)(uVar7 - 1)) == 0x5b) &&
           (*(short *)(uVar5 + *(uint *)((uVar3 | *(uint *)(uVar7 + 0x13)) - 1)) == 0x86)) {
          uVar4 = *(uint *)(uVar7 + 0xf);
        }
        else {
          uVar4 = *(uint *)(uVar6 + 3);
          if (((uVar4 & 1) == 0) || (*(short *)(uVar5 + *(uint *)((uVar3 | uVar4) - 1)) != 0x86)) {
            uVar4 = *(uint *)((uVar3 | *(uint *)(uVar6 + 3)) + 3);
          }
          else {
            uVar4 = *(uint *)(uVar6 + 3);
          }
        }
        HandlerTable::HandlerTable(aHStack_30,uVar3 | uVar4);
        local_34 = 4;
        HandlerTable::LookupRange
                  (aHStack_30,*(int *)(uVar8 + 0x17) >> 1,(int *)0x0,(CatchPrediction *)&local_34);
        lVar1 = 0xb8;
        if (local_34 != 1) {
          lVar1 = 0xc0;
        }
        uVar2 = *(undefined8 *)(param_3 + lVar1);
      }
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSAsyncGeneratorObject()");
}

