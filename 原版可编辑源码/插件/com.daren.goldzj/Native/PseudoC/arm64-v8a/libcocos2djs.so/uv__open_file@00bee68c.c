
FILE * uv__open_file(undefined8 param_1)

{
  int __fd;
  FILE *pFVar1;
  
  __fd = uv__open_cloexec(param_1,0);
  if (__fd < 0) {
    pFVar1 = (FILE *)0x0;
  }
  else {
    pFVar1 = fdopen(__fd,"r");
    if (pFVar1 == (FILE *)0x0) {
      uv__close(__fd);
    }
  }
  return pFVar1;
}

