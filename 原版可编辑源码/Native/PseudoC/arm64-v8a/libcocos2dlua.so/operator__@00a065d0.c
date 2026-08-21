
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(short&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,short *param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00a065d4 to 00b06607 has its CatchHandler @ 00a064bc */
                    /* catch() { ... } // from try @ 00a06528 with catch @ 00a065e8
                       catch() { ... } // from try @ 00a065cc with catch @ 00a065e8 */
                    /* catch() { ... } // from try @ 00a0650c with catch @ 00a065ec
                       catch() { ... } // from try @ 00a0657c with catch @ 00a065ec */
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 2) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,2,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(short *)(*(long *)this + *(long *)(this + 0x10));
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 2;
  }
  return this;
}

