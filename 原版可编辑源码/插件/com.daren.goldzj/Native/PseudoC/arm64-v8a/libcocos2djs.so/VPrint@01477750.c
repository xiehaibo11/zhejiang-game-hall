
/* v8::base::OS::VPrint(char const*, std::__va_list) */

void v8::base::OS::VPrint(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2[1];
  local_30 = *param_2;
  uStack_18 = param_2[3];
  uStack_20 = param_2[2];
  __android_log_vprint(4,&DAT_019c38f7,param_1,&local_30);
  return;
}

