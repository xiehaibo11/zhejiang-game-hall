
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(unsigned char) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,uchar param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00a05770 to 00b057a3 has its CatchHandler @ 00a057f4 */
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    pcVar1 = (char *)Translated::getInstance();
                    /* try { // try from 00a057a4 to 00b0583f has its CatchHandler @ 00a05624 */
    Translated::log(pcVar1,&LAB_012f87ac,1,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(uchar *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return this;
}

