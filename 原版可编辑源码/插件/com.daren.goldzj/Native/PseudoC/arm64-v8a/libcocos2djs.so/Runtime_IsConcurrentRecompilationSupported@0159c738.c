
/* v8::internal::Runtime_IsConcurrentRecompilationSupported(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_IsConcurrentRecompilationSupported
          (int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (TracingFlags::runtime_stats == 0) {
    lVar1 = 0xc0;
    if (*(long *)(param_3 + 0xc610) != 0) {
      lVar1 = 0xb8;
    }
    return *(undefined8 *)(param_3 + lVar1);
  }
  uVar2 = FUN_0159c76c(param_1);
  return uVar2;
}

