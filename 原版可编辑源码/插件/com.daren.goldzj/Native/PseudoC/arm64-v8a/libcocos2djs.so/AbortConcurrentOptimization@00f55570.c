
/* v8::internal::Isolate::AbortConcurrentOptimization(v8::internal::BlockingBehavior) */

void v8::internal::Isolate::AbortConcurrentOptimization(long param_1)

{
  if (*(long *)(param_1 + 0xc610) != 0) {
    OptimizingCompileDispatcher::Flush();
    return;
  }
  return;
}

