
/* v8::internal::Runtime_UnblockConcurrentRecompilation(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_UnblockConcurrentRecompilation(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    if ((FLAG_block_concurrent_recompilation != '\0') &&
       (*(OptimizingCompileDispatcher **)(param_3 + 0xc610) != (OptimizingCompileDispatcher *)0x0))
    {
      OptimizingCompileDispatcher::Unblock(*(OptimizingCompileDispatcher **)(param_3 + 0xc610));
    }
    return *(undefined8 *)(param_3 + 0xa0);
  }
  uVar1 = FUN_0159f074(param_1,param_2,param_3);
  return uVar1;
}

