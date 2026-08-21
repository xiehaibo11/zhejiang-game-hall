
/* v8::internal::UnoptimizedCompilationJob::RecordFunctionCompilation(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, v8::internal::Isolate*) const */

void __thiscall
v8::internal::UnoptimizedCompilationJob::RecordFunctionCompilation
          (UnoptimizedCompilationJob *this,undefined4 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = *(long *)(*(long *)(this + 0x28) + 0x28);
  if (lVar1 == 0) {
    lVar1 = Builtins::builtin_handle((Builtins *)(param_4 + 0x9e00),0x44);
  }
  dVar2 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)(this + 0x30));
  dVar3 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)(this + 0x38));
  FUN_00edf34c(dVar2 + dVar3,param_2,param_3,*(undefined8 *)(*(long *)(this + 0x20) + 0x50),lVar1,0,
               param_4);
  return;
}

