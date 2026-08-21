
/* v8::internal::Runtime_PromiseMarkAsHandled(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_PromiseMarkAsHandled(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar1 = FUN_01578ba0(param_1);
    return uVar1;
  }
  uVar2 = *param_2;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x42d)) {
    *(uint *)(uVar2 + 0xf) = *(uint *)(uVar2 + 0xf) & 0xfffffffe | 8;
    return *(undefined8 *)(param_3 + 0xa0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSPromise()");
}

