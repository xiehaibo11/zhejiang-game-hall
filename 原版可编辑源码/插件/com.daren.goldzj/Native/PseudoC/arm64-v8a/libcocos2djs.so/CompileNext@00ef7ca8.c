
/* v8::internal::OptimizingCompileDispatcher::CompileNext(v8::internal::OptimizedCompilationJob*,
   v8::internal::RuntimeCallStats*) */

void __thiscall
v8::internal::OptimizingCompileDispatcher::CompileNext
          (OptimizingCompileDispatcher *this,OptimizedCompilationJob *param_1,
          RuntimeCallStats *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 != (OptimizedCompilationJob *)0x0) {
    OptimizedCompilationJob::ExecuteJob(param_1,param_2);
    base::Mutex::Lock((Mutex *)(this + 0x78));
    lVar2 = *(long *)(this + 0x50);
    uVar1 = 0;
    if (*(long *)(this + 0x58) - lVar2 != 0) {
      uVar1 = (*(long *)(this + 0x58) - lVar2) * 0x40 - 1;
    }
    uVar3 = *(long *)(this + 0x70) + *(long *)(this + 0x68);
    if (uVar1 == uVar3) {
      std::__ndk1::
      deque<v8::internal::OptimizedCompilationJob*,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob*>>
      ::__add_back_capacity
                ((deque<v8::internal::OptimizedCompilationJob*,std::__ndk1::allocator<v8::internal::OptimizedCompilationJob*>>
                  *)(this + 0x48));
      lVar2 = *(long *)(this + 0x50);
      uVar3 = *(long *)(this + 0x68) + *(long *)(this + 0x70);
    }
    *(OptimizedCompilationJob **)
     (*(long *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8)) + (uVar3 & 0x1ff) * 8) = param_1;
    *(long *)(this + 0x70) = *(long *)(this + 0x70) + 1;
    base::Mutex::Unlock((Mutex *)(this + 0x78));
    StackGuard::RequestInterrupt((StackGuard *)(*(long *)this + 0x48),4);
    return;
  }
  return;
}

