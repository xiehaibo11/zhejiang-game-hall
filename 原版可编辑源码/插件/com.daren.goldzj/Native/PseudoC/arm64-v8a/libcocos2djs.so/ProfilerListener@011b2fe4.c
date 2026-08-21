
/* v8::internal::ProfilerListener::ProfilerListener(v8::internal::Isolate*,
   v8::internal::CodeEventObserver*, v8::CpuProfilingNamingMode) */

void __thiscall
v8::internal::ProfilerListener::ProfilerListener
          (ProfilerListener *this,undefined8 param_1,undefined8 param_2,undefined4 param_4)

{
  *(undefined8 *)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__ProfilerListener_01cb7758;
  StringsStorage::StringsStorage((StringsStorage *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = param_4;
  return;
}

