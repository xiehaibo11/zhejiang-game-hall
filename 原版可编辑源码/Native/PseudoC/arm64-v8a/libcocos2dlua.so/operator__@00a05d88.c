
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(float) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,float param_1)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 4) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&LAB_012f87ac,4,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(float *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 4;
  }
  return this;
}

