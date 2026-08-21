
void uv__strdup(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (void *)uv__malloc(sVar1 + 1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,sVar1 + 1);
    return;
  }
  return;
}

