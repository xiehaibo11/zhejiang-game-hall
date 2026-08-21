
undefined8 FT_Stream_Open(undefined8 *param_1,char *param_2)

{
  FILE *__stream;
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 0x28;
  }
  else {
    param_1[4] = param_2;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    __stream = fopen(param_2,"rb");
    if (__stream == (FILE *)0x0) {
      uVar2 = 1;
    }
    else {
      fseek(__stream,0,2);
      lVar1 = ftell(__stream);
      param_1[1] = lVar1;
      if (lVar1 == 0) {
        fclose(__stream);
        uVar2 = 0x51;
      }
      else {
                    /* try { // try from 010bb584 to 011bb58b has its CatchHandler @ 010bb6b0 */
        fseek(__stream,0,0);
        uVar2 = 0;
        param_1[3] = __stream;
        param_1[5] = FUN_010bb5d4;
        param_1[6] = FUN_010bb648;
                    /* try { // try from 010bb5a8 to 011bb5e7 has its CatchHandler @ 010bb6c0 */
      }
    }
  }
  return uVar2;
}

