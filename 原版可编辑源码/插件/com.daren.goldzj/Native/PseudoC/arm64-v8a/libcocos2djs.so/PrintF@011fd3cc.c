
/* v8::internal::PrintF(__sFILE*, char const*, ...) */

void v8::internal::PrintF(__sFILE *param_1,char *param_2,...)

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
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &local_80;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffd0;
  local_80 = in_x2;
  uStack_78 = in_x3;
  local_70 = in_x4;
  uStack_68 = in_x5;
  local_60 = in_x6;
  uStack_58 = in_x7;
  local_50 = (undefined1 *)register0x00000008;
  base::OS::VFPrint(param_1,param_2,&local_50);
  return;
}

