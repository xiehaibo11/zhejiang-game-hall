
/* v8::base::OS::VFPrint(__sFILE*, char const*, std::__va_list) */

void v8::base::OS::VFPrint(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_3[1];
  local_30 = *param_3;
  uStack_18 = param_3[3];
  uStack_20 = param_3[2];
  __android_log_vprint(4,&DAT_019c38f7,param_2,&local_30);
  return;
}

