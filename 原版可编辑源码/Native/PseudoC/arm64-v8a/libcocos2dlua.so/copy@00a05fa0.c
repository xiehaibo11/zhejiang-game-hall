
/* universe::network::OStream::copy(char const*, unsigned long) */

void __thiscall universe::network::OStream::copy(OStream *this,char *param_1,ulong param_2)

{
  void *__dest;
  
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_2 != 0) {
    *(ulong *)(this + 8) = param_2;
    *(undefined8 *)(this + 0x10) = 0;
    __dest = malloc(param_2);
    *(void **)this = __dest;
    memcpy(__dest,param_1,param_2);
    return;
  }
  return;
}

