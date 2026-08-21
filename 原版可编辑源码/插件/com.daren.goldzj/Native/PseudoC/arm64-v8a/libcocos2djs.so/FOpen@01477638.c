
/* v8::base::OS::FOpen(char const*, char const*) */

FILE * v8::base::OS::FOpen(char *param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  char local_8f;
  
  __stream = fopen(param_1,param_2);
  if (__stream != (FILE *)0x0) {
    iVar1 = fileno(__stream);
    iVar1 = fstat(iVar1,(stat *)&stack0xffffffffffffff60);
    if ((iVar1 != 0) || (-1 < local_8f)) {
      fclose(__stream);
      __stream = (FILE *)0x0;
    }
  }
  return __stream;
}

