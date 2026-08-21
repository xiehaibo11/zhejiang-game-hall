
undefined8 jni_getNativeLog(long param_1)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    __s = calloc(0x7801,1);
    cVar1 = getNativeLog(__s,0x7800);
    if (cVar1 != '\0') {
      sVar2 = strlen(__s);
      uVar3 = toJavaString(param_1,__s,sVar2);
      free(__s);
      return uVar3;
    }
  }
  return 0;
}

