
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(double) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,double param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00a05dfc to 00b05e1b has its CatchHandler @ 00a05eb4 */
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 8) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&LAB_012f87ac,8,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(double *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
                    /* try { // try from 00a05e54 to 00b05e67 has its CatchHandler @ 00a05eb0 */
  return this;
}

