
/* v8::base::OS::Print(char const*, ...) */

void v8::base::OS::Print(char *param_1,...)

{
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = auStack_a0;
  puStack_38 = &stack0xffffffffffffffa0;
  uStack_28 = 0xffffff80ffffffc8;
  local_98 = in_x1;
  uStack_90 = in_x2;
  local_88 = in_x3;
  uStack_80 = in_x4;
  local_78 = in_x5;
  uStack_70 = in_x6;
  local_68 = in_x7;
  local_40 = (undefined1 *)register0x00000008;
  __android_log_vprint(4,&DAT_019c38f7,param_1,&local_40);
  return;
}

