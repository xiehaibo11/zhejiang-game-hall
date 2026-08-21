
/* v8::base::OS::FPrint(__sFILE*, char const*, ...) */

void v8::base::OS::FPrint(__sFILE *param_1,char *param_2,...)

{
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &local_80;
  puStack_28 = &stack0xffffffffffffffb0;
  uStack_18 = 0xffffff80ffffffd0;
  local_80 = in_x2;
  uStack_78 = in_x3;
  local_70 = in_x4;
  uStack_68 = in_x5;
  local_60 = in_x6;
  uStack_58 = in_x7;
  local_30 = (undefined1 *)register0x00000008;
  __android_log_vprint(4,&DAT_019c38f7,param_2,&local_30);
  return;
}

