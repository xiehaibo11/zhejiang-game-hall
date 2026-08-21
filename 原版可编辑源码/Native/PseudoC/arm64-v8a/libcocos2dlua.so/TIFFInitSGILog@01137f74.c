
undefined8 TIFFInitSGILog(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 *__s;
  
  iVar1 = _TIFFMergeFields(param_1,&DAT_0172d050,2);
  if (iVar1 == 0) {
    TIFFErrorExt(param_1[0x77],"TIFFInitSGILog","Merging SGILog codec-specific tags failed");
  }
  else {
    __s = _TIFFmalloc(0x38);
    param_1[0x6a] = __s;
    if (__s != (undefined4 *)0x0) {
      _TIFFmemset(__s,0,0x38);
      *__s = 0xffffffff;
      __s[1] = (uint)(param_2 == 0x8775);
      *(code **)(__s + 8) = FUN_011380e8;
      param_1[0x59] = FUN_011380f4;
      param_1[0x58] = FUN_011380ec;
      param_1[0x5b] = FUN_0113833c;
      param_1[0x62] = FUN_011384a8;
      param_1[0x61] = FUN_01138254;
      param_1[100] = FUN_01138528;
      param_1[99] = FUN_011382c8;
      param_1[0x65] = FUN_011385a8;
      param_1[0x67] = FUN_011385d0;
      *(undefined8 *)(__s + 10) = param_1[0x82];
      *(undefined8 *)(__s + 0xc) = param_1[0x81];
      param_1[0x82] = FUN_0113861c;
      param_1[0x81] = FUN_011386a8;
      return 1;
    }
    TIFFErrorExt(param_1[0x77],"TIFFInitSGILog","%s: No space for LogLuv state block",*param_1);
  }
  return 0;
}

