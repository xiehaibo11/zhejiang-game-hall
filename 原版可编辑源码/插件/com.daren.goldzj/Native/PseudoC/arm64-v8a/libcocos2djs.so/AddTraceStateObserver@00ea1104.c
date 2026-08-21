
/* v8::platform::tracing::TracingController::AddTraceStateObserver(v8::TracingController::TraceStateObserver*)
    */

void __thiscall
v8::platform::tracing::TracingController::AddTraceStateObserver
          (TracingController *this,TraceStateObserver *param_1)

{
  TracingController TVar1;
  Mutex *this_00;
  TraceStateObserver *local_28;
  
  this_00 = *(Mutex **)(this + 0x18);
  local_28 = param_1;
  base::Mutex::Lock(this_00);
  std::__ndk1::
  __hash_table<v8::TracingController::TraceStateObserver*,std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>>
  ::
  __emplace_unique_key_args<v8::TracingController::TraceStateObserver*,v8::TracingController::TraceStateObserver*const&>
            ((__hash_table<v8::TracingController::TraceStateObserver*,std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>>
              *)(this + 0x20),&local_28,&local_28);
  TVar1 = this[0x48];
  base::Mutex::Unlock(this_00);
  if (((byte)TVar1 & 1) != 0) {
    (**(code **)(*(long *)local_28 + 0x10))();
  }
  return;
}

