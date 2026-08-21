
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(long long&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,longlong *param_1)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 8) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,8,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(longlong *)(*(long *)this + *(long *)(this + 0x10));
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  return this;
}

