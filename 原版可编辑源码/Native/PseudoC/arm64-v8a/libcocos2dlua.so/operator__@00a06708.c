
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(unsigned long long&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,ulonglong *param_1)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 8) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,8,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(ulonglong *)(*(long *)this + *(long *)(this + 0x10));
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  return this;
}

