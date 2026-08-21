
/* v8::platform::tracing::TracingController::AddTraceEvent(char, unsigned char const*, char const*,
   char const*, unsigned long, unsigned long, int, char const**, unsigned char const*, unsigned long
   const*, std::__ndk1::unique_ptr<v8::ConvertableToTraceFormat,
   std::__ndk1::default_delete<v8::ConvertableToTraceFormat> >*, unsigned int) */

void __thiscall
v8::platform::tracing::TracingController::AddTraceEvent
          (TracingController *this,char param_1,uchar *param_2,char *param_3,char *param_4,
          ulong param_5,ulong param_6,int param_7,char **param_8,uchar *param_9,ulong *param_10,
          unique_ptr *param_11,uint param_12)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x40))();
  (**(code **)(*(long *)this + 0x20))
            (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,uVar1);
  return;
}

