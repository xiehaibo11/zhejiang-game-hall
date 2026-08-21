
/* v8::internal::Runtime_FunctionIsAPIFunction(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_FunctionIsAPIFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_0156145c(param_1);
    return uVar2;
  }
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    uVar4 = uVar5 & 0xffffffff00000000;
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439) {
      uVar1 = *(uint *)((uVar4 | *(uint *)(uVar5 + 0xb)) + 3);
      if ((uVar1 & 1) == 0) {
        pIVar3 = param_3 + 0xc0;
      }
      else {
        pIVar3 = param_3 + 0xb8;
        if (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) != 0x4e) {
          pIVar3 = param_3 + 0xc0;
        }
      }
      return *(undefined8 *)pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

