
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(char) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,char param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00a05724 to 00b05757 has its CatchHandler @ 00a05824 */
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&LAB_012f87ac,1,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(char *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
                    /* try { // try from 00a05758 to 00b0576b has its CatchHandler @ 00a057f0 */
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return this;
}

