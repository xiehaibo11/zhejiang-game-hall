
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(long long) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,longlong param_1)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 8) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&LAB_012f87ac,8,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(longlong *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  return this;
}

