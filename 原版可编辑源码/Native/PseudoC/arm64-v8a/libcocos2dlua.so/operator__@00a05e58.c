
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(long double) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,longdouble param_1)

{
  longdouble *plVar1;
  char *pcVar2;
  longdouble in_register_00005008;
  
                    /* try { // try from 00a05e68 to 00b05ecf has its CatchHandler @ 00a05d74 */
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 0x10) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,&LAB_012f87ac,0x10,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    plVar1 = (longdouble *)(*(long *)this + *(long *)(this + 0x10));
    plVar1[1] = in_register_00005008;
    *plVar1 = param_1;
                    /* catch() { ... } // from try @ 00a05e54 with catch @ 00a05eb0 */
                    /* catch() { ... } // from try @ 00a05dfc with catch @ 00a05eb4 */
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x10;
  }
  return this;
}

