
char * CRYPTO_strdup(char *str,char *file,int line)

{
  size_t sVar1;
  char *__dest;
  
  if (str == (char *)0x0) {
    __dest = (char *)0x0;
  }
  else {
    sVar1 = strlen(str);
    __dest = CRYPTO_malloc((int)(sVar1 + 1),file,line);
    if (__dest != (char *)0x0) {
      memcpy(__dest,str,sVar1 + 1);
    }
  }
  return __dest;
}

