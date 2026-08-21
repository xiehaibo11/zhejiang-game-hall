
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(int&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,int *param_1)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 4) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,4,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(int *)(*(long *)this + *(long *)(this + 0x10));
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 4;
  }
  return this;
}

