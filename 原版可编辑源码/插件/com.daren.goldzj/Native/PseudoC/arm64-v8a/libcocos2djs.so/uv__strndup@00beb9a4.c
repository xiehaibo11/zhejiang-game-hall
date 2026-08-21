
void uv__strndup(char *param_1,ulong param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_1);
  if (param_2 < __n) {
    __n = param_2;
  }
  __dest = (void *)uv__malloc(__n + 1);
  if (__dest != (void *)0x0) {
    *(undefined1 *)((long)__dest + __n) = 0;
    memcpy(__dest,param_1,__n);
    return;
  }
  return;
}

