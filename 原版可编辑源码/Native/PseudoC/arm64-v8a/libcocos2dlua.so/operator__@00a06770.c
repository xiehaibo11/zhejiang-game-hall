
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(char*) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,char *param_1)

{
  ulong __n;
  char *pcVar1;
  
  __n = readStrLen(this);
  if (__n != 0) {
    if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < __n) {
      pcVar1 = (char *)Translated::getInstance();
      Translated::log(pcVar1,&DAT_012f87ed,__n,*(long *)(this + 8) - *(long *)(this + 0x10));
    }
    else {
      memcpy(param_1,(void *)(*(long *)this + *(long *)(this + 0x10)),__n);
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + __n;
    }
  }
  return this;
}

