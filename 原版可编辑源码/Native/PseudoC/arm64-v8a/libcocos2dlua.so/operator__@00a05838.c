
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(unsigned short) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,ushort param_1)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 2) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&LAB_012f87ac,2,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(ushort *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 2;
  }
  return this;
}

