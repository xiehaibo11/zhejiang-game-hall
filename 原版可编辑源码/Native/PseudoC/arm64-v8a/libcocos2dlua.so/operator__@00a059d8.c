
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(unsigned long long) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,ulonglong param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00a059d8 to 00b05a0b has its CatchHandler @ 00a05a84 */
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 8) {
    pcVar1 = (char *)Translated::getInstance();
                    /* try { // try from 00a05a0c to 00b05a9f has its CatchHandler @ 00a05928 */
    Translated::log(pcVar1,&LAB_012f87ac,8,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(ulonglong *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  return this;
}

