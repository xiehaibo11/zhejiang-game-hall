
/* universe::network::AUpdates::write(char const*, unsigned long) */

AUpdates * __thiscall universe::network::AUpdates::write(AUpdates *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < param_2) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&LAB_012f87ac,param_2,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    memcpy((void *)(*(long *)this + *(long *)(this + 0x10)),param_1,param_2);
    *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_2;
  }
  return this;
}

