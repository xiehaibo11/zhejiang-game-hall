
/* v8::internal::GCTracer::AddBackgroundScopeSample(v8::internal::GCTracer::BackgroundScope::ScopeId,
   double) */

void __thiscall
v8::internal::GCTracer::AddBackgroundScopeSample(double param_1,GCTracer *this,uint param_3)

{
  base::Mutex::Lock((Mutex *)(this + 0x1130));
  *(double *)(this + (ulong)param_3 * 8 + 0x1158) =
       *(double *)(this + (ulong)param_3 * 8 + 0x1158) + param_1;
  base::Mutex::Unlock((Mutex *)(this + 0x1130));
  return;
}

