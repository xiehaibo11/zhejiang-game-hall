
/* v8::base::OS::SNPrintF(char*, int, char const*, ...) */

int v8::base::OS::SNPrintF(char *param_1,int param_2,char *param_3,...)

{
  int iVar1;
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
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = auStack_a0;
  puStack_48 = &stack0xffffffffffffff90;
  uStack_38 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_50 = (undefined1 *)register0x00000008;
  iVar1 = vsnprintf(param_1,(long)param_2,param_3,&local_50);
  if ((iVar1 < 0) || (param_2 <= iVar1)) {
    if (0 < param_2) {
      param_1[(long)param_2 + -1] = '\0';
    }
    iVar1 = -1;
  }
  return iVar1;
}

