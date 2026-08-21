
undefined8 TIFFInitSGILog(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 *__s;
  
  iVar1 = _TIFFMergeFields(param_1,&DAT_01c926b0,2);
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
      *(code **)(__s + 8) = FUN_00ddbc40;
      param_1[0x59] = FUN_00ddbc4c;
      param_1[0x58] = FUN_00ddbc44;
      param_1[0x5b] = FUN_00ddbe94;
      param_1[0x62] = FUN_00ddc000;
      param_1[0x61] = FUN_00ddbdac;
      param_1[100] = FUN_00ddc080;
      param_1[99] = FUN_00ddbe20;
      param_1[0x65] = FUN_00ddc100;
      param_1[0x67] = FUN_00ddc128;
      *(undefined8 *)(__s + 10) = param_1[0x82];
      *(undefined8 *)(__s + 0xc) = param_1[0x81];
      param_1[0x82] = FUN_00ddc174;
      param_1[0x81] = FUN_00ddc200;
      return 1;
    }
    TIFFErrorExt(param_1[0x77],"TIFFInitSGILog","%s: No space for LogLuv state block",*param_1);
  }
  return 0;
}

