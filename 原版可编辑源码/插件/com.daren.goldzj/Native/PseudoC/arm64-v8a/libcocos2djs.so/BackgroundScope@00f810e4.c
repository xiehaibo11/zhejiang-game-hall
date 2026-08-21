
/* v8::internal::GCTracer::BackgroundScope::BackgroundScope(v8::internal::GCTracer*,
   v8::internal::GCTracer::BackgroundScope::ScopeId, v8::internal::RuntimeCallStats*) */

void __thiscall
v8::internal::GCTracer::BackgroundScope::BackgroundScope
          (BackgroundScope *this,undefined8 param_1,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = param_1;
  *(int *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = param_4;
  uVar1 = Heap::MonotonicallyIncreasingTimeInMs();
  *(undefined8 *)(this + 0x10) = uVar1;
  if (TracingFlags::runtime_stats == 0) {
    return;
  }
  RuntimeCallStats::Enter(*(RuntimeCallStats **)(this + 0x38),this + 0x18,param_3 + 99);
  return;
}

