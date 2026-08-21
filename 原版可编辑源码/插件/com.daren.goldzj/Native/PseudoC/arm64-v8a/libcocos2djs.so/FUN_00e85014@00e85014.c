
undefined8 FUN_00e85014(undefined8 *param_1,char *param_2)

{
  FILE *__stream;
  long lVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x28;
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = param_2;
  __stream = fopen(param_2,"rb");
  if (__stream != (FILE *)0x0) {
    fseek(__stream,0,2);
    lVar1 = ftell(__stream);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      fseek(__stream,0,0);
      param_1[3] = __stream;
      param_1[5] = FUN_00e850e0;
      param_1[6] = FUN_00e85154;
      return 0;
    }
    fclose(__stream);
    return 0x51;
  }
  return 1;
}

