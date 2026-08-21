
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(bool) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,bool param_1)

{
  char *pcVar1;
  
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&LAB_012f87ac,1,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(bool *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return this;
}

