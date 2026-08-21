
/* v8::internal::PrintIsolate(void*, char const*, ...) */

void v8::internal::PrintIsolate(void *param_1,char *param_2,...)

{
  ulong uVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  local_a0 = in_x2;
  uStack_98 = in_x3;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  uVar1 = base::OS::GetCurrentProcessId();
  base::OS::Print("[%d:%p] ",uVar1 & 0xffffffff,param_1);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_70 = (undefined1 *)register0x00000008;
  base::OS::VPrint(param_2,&local_70);
  return;
}

