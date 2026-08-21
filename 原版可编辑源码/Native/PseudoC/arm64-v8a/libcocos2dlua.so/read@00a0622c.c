
/* universe::network::OStream::read(char*, unsigned long) */

OStream * __thiscall universe::network::OStream::read(OStream *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < param_2) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,param_2,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    memcpy(param_1,(void *)(*(long *)this + *(long *)(this + 0x10)),param_2);
    *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_2;
  }
  return this;
}

