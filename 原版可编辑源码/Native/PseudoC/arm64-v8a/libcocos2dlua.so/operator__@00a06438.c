
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(unsigned char&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,uchar *param_1)

{
  char *pcVar1;
  
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,1,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(uchar *)(*(long *)this + *(long *)(this + 0x10));
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return this;
}

