
FILE * FUN_01040764(undefined8 param_1,char *param_2,uint param_3)

{
  char *__modes;
  FILE *pFVar1;
  
  if ((param_3 & 3) == 1) {
    __modes = "rb";
  }
  else if ((param_3 >> 2 & 1) == 0) {
    __modes = (char *)0x0;
    if ((param_3 & 8) != 0) {
      __modes = "wb";
    }
  }
  else {
    __modes = "r+b";
  }
  if ((param_2 != (char *)0x0) && (__modes != (char *)0x0)) {
    pFVar1 = fopen(param_2,__modes);
    return pFVar1;
  }
  return (FILE *)0x0;
}

