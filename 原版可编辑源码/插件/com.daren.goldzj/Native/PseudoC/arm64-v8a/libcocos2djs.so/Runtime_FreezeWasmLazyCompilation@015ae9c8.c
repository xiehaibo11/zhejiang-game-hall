
/* v8::internal::Runtime_FreezeWasmLazyCompilation(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_FreezeWasmLazyCompilation(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar1 = FUN_015aea4c(param_1);
    return uVar1;
  }
  uVar2 = *param_2;
  if (((uVar2 & 1) != 0) &&
     (uVar3 = uVar2 & 0xffffffff00000000,
     *(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x434)) {
    *(undefined1 *)
     (**(long **)(*(long *)((uVar3 | *(uint *)((uVar3 | *(uint *)(uVar2 + 0x6f)) + 0xb)) + 3) + 0x18
                 ) + 0x185) = 1;
    return *(undefined8 *)(param_3 + 0xa0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
}

