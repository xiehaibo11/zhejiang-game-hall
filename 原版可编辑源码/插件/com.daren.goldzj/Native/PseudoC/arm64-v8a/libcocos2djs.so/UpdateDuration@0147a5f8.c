
/* v8::platform::tracing::TraceObject::UpdateDuration(long, long) */

void __thiscall
v8::platform::tracing::TraceObject::UpdateDuration(TraceObject *this,long param_1,long param_2)

{
  *(long *)(this + 0x98) = param_1 - *(long *)(this + 0x88);
  *(long *)(this + 0xa0) = param_2 - *(long *)(this + 0x90);
  return;
}

