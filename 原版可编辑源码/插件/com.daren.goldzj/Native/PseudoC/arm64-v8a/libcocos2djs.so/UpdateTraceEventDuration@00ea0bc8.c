
/* v8::platform::tracing::TracingController::UpdateTraceEventDuration(unsigned char const*, char
   const*, unsigned long) */

void __thiscall
v8::platform::tracing::TracingController::UpdateTraceEventDuration
          (TracingController *this,uchar *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  TraceObject *this_00;
  
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  lVar2 = (**(code **)(*(long *)this + 0x48))(this);
  this_00 = (TraceObject *)(**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),param_3)
  ;
  if (this_00 != (TraceObject *)0x0) {
    TraceObject::UpdateDuration(this_00,lVar1,lVar2);
    return;
  }
  return;
}

