
/* v8::base::OS::VSNPrintF(char*, int, char const*, std::__va_list) */

int v8::base::OS::VSNPrintF(char *param_1,int param_2,char *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_4[1];
  local_40 = *param_4;
  uStack_28 = param_4[3];
  uStack_30 = param_4[2];
  iVar1 = vsnprintf(param_1,(long)param_2,param_3,&local_40);
  if ((iVar1 < 0) || (param_2 <= iVar1)) {
    if (0 < param_2) {
      param_1[(long)param_2 + -1] = '\0';
    }
    iVar1 = -1;
  }
  return iVar1;
}

