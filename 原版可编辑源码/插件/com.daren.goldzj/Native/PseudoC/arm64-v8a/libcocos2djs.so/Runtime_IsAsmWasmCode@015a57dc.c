
/* v8::internal::Runtime_IsAsmWasmCode(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_IsAsmWasmCode(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015a58a0(param_1);
    return uVar2;
  }
  uVar3 = *param_2;
  if ((uVar3 & 1) != 0) {
    uVar5 = uVar3 & 0xffffffff00000000;
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439) {
      uVar1 = *(uint *)((uVar5 | *(uint *)(uVar3 + 0xb)) + 3);
      if ((((uVar1 & 1) == 0) ||
          (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar1) - 1)) != 0x57)) ||
         (((*(uint *)((uVar5 | *(uint *)(uVar3 + 0xb)) + 3) & 1) == 0 &&
          ((*(uint *)((uVar5 | *(uint *)(uVar3 + 0xb)) + 3) & 0xfffffffe) == 0x88)))) {
        pIVar4 = param_3 + 0xc0;
      }
      else {
        pIVar4 = param_3 + 0xb8;
      }
      return *(undefined8 *)pIVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

