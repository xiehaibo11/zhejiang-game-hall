
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,uint param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00a05928 to 00b059d7 has its CatchHandler @ 00a05928
                       catch() { ... } // from try @ 00a05928 with catch @ 00a05928
                       catch() { ... } // from try @ 00a05a0c with catch @ 00a05928 */
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 4) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&LAB_012f87ac,4,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(uint *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 4;
  }
  return this;
}

