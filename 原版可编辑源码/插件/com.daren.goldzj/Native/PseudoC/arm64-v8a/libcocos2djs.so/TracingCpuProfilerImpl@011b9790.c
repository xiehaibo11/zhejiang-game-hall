
/* v8::internal::TracingCpuProfilerImpl::TracingCpuProfilerImpl(v8::internal::Isolate*) */

void __thiscall
v8::internal::TracingCpuProfilerImpl::TracingCpuProfilerImpl
          (TracingCpuProfilerImpl *this,Isolate *param_1)

{
  long *plVar1;
  
  *(Isolate **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (TracingCpuProfilerImpl)0x0;
  *(undefined ***)this = &PTR__TracingCpuProfilerImpl_01cb78d8;
  base::Mutex::Mutex((Mutex *)(this + 0x1c));
  plVar1 = (long *)V8::GetCurrentPlatform();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x011b97e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,this);
  return;
}

