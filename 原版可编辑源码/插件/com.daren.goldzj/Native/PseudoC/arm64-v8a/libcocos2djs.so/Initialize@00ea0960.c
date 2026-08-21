
/* v8::platform::tracing::TracingController::Initialize(v8::platform::tracing::TraceBuffer*) */

void __thiscall
v8::platform::tracing::TracingController::Initialize(TracingController *this,TraceBuffer *param_1)

{
  long *plVar1;
  Mutex *this_00;
  Mutex *this_01;
  
  plVar1 = *(long **)(this + 8);
  *(TraceBuffer **)(this + 8) = param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  this_00 = operator_new(0x28);
  base::Mutex::Mutex(this_00);
  this_01 = *(Mutex **)(this + 0x18);
  *(Mutex **)(this + 0x18) = this_00;
  if (this_01 != (Mutex *)0x0) {
    base::Mutex::~Mutex(this_01);
    operator_delete(this_01);
    return;
  }
  return;
}

