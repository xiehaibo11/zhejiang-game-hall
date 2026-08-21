
char * RAND_file_name(char *file,size_t num)

{
  bool bVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  ulong uVar4;
  
  iVar2 = OPENSSL_issetugid();
  if (iVar2 == 0) {
    __s = getenv("RANDFILE");
    if ((__s == (char *)0x0) || (*__s == '\0')) {
      __s = getenv("HOME");
      if ((__s == (char *)0x0) || (*__s == '\0')) goto LAB_00b54af8;
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    sVar3 = strlen(__s);
    if ((bVar1) && (sVar3 + 1 < num)) {
      uVar4 = OPENSSL_strlcpy(file,__s,num);
      if (num <= uVar4) {
        return (char *)0x0;
      }
    }
    else if (sVar3 + 6 < num) {
      OPENSSL_strlcpy(file,__s,num);
      OPENSSL_strlcat(file,&DAT_0144b7ba,num);
      OPENSSL_strlcat(file,&DAT_013ed40c,num);
    }
  }
  else {
LAB_00b54af8:
    *file = '\0';
  }
  if (*file == '\0') {
    file = (char *)0x0;
  }
  return file;
}

