
/* v8::internal::Debug::DeoptimizeFunction(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

void __thiscall v8::internal::Debug::DeoptimizeFunction(Debug *this,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  OptimizedCodeIterator aOStack_48 [24];
  ulong local_18;
  
  Isolate::AbortConcurrentOptimization(*(undefined8 *)(this + 0x88),0);
  Code::OptimizedCodeIterator::OptimizedCodeIterator(aOStack_48,*(Isolate **)(this + 0x88));
  local_18 = Code::OptimizedCodeIterator::Next(aOStack_48);
  if ((int)local_18 != 0) {
    bVar1 = false;
    do {
      uVar2 = Code::Inlines((Code *)&local_18,*param_2);
      if ((uVar2 & 1) != 0) {
        bVar1 = true;
        *(uint *)((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 + 0xf)) + 7) =
             *(uint *)((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 + 0xf)) + 7) | 1;
      }
      local_18 = Code::OptimizedCodeIterator::Next(aOStack_48);
    } while ((int)local_18 != 0);
    if (bVar1) {
      Deoptimizer::DeoptimizeMarkedCode(*(Isolate **)(this + 0x88));
    }
  }
  return;
}

