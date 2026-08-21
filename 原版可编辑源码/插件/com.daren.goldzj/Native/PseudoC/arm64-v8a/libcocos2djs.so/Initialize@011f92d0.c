
/* v8::internal::tracing::CallStatsScopedTracer::Initialize(v8::internal::Isolate*, unsigned char
   const*, char const*) */

void __thiscall
v8::internal::tracing::CallStatsScopedTracer::Initialize
          (CallStatsScopedTracer *this,Isolate *param_1,uchar *param_2,char *param_3)

{
  CallStatsScopedTracer CVar1;
  long *plVar2;
  long lVar3;
  long *local_30;
  long *local_28;
  
  *(char **)(this + 0x18) = param_3;
  *(Isolate **)(this + 0x20) = param_1;
  *(uchar **)(this + 0x10) = param_2;
  *(CallStatsScopedTracer **)(this + 8) = this + 0x10;
  lVar3 = *(long *)(param_1 + 0x9520);
  CVar1 = *(CallStatsScopedTracer *)(lVar3 + 0x58b0);
  *this = CVar1;
  if (CVar1 == (CallStatsScopedTracer)0x0) {
    RuntimeCallStats::Reset((RuntimeCallStats *)(lVar3 + 0x58a0));
  }
  local_30 = (long *)0x0;
  local_28 = (long *)0x0;
  plVar2 = (long *)V8::GetCurrentPlatform();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x18))(plVar2,0x42,param_2,param_3,0,0,0,0,0,0,0,&local_30,0);
  plVar2 = local_28;
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = local_30;
  local_30 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}

