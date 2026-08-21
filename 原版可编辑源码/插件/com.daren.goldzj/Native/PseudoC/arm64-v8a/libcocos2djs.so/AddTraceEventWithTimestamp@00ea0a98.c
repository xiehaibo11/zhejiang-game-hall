
/* v8::platform::tracing::TracingController::AddTraceEventWithTimestamp(char, unsigned char const*,
   char const*, char const*, unsigned long, unsigned long, int, char const**, unsigned char const*,
   unsigned long const*, std::__ndk1::unique_ptr<v8::ConvertableToTraceFormat,
   std::__ndk1::default_delete<v8::ConvertableToTraceFormat> >*, unsigned int, long) */

undefined8 __thiscall
v8::platform::tracing::TracingController::AddTraceEventWithTimestamp
          (TracingController *this,char param_1,uchar *param_2,char *param_3,char *param_4,
          ulong param_5,ulong param_6,int param_7,char **param_8,uchar *param_9,ulong *param_10,
          unique_ptr *param_11,uint param_12,long param_13)

{
  long lVar1;
  TraceObject *this_00;
  Mutex *this_01;
  undefined8 local_68;
  
  lVar1 = (**(code **)(*(long *)this + 0x48))();
  local_68 = 0;
  if ((((byte)this[0x48] & 1) != 0) &&
     (this_00 = (TraceObject *)
                (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),&local_68),
     this_00 != (TraceObject *)0x0)) {
    this_01 = *(Mutex **)(this + 0x18);
    base::Mutex::Lock(this_01);
    TraceObject::Initialize
              (this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,param_11,param_12,param_13,lVar1);
    base::Mutex::Unlock(this_01);
  }
  return local_68;
}

