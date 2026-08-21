
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(short) */

AUpdates * __thiscall universe::network::AUpdates::operator<<(AUpdates *this,short param_1)

{
  char *pcVar1;
  
                    /* catch() { ... } // from try @ 00a05758 with catch @ 00a057f0 */
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 2) {
                    /* catch() { ... } // from try @ 00a05770 with catch @ 00a057f4 */
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&LAB_012f87ac,2,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *(short *)(*(long *)this + *(long *)(this + 0x10)) = param_1;
                    /* catch() { ... } // from try @ 00a05724 with catch @ 00a05824 */
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 2;
  }
  return this;
}

