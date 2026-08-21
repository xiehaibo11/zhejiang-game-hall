
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(unsigned short&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,ushort *param_1)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 2) {
                    /* try { // try from 00a064bc to 00b0650b has its CatchHandler @ 00a064bc
                       catch() { ... } // from try @ 00a064bc with catch @ 00a064bc
                       catch() { ... } // from try @ 00a06554 with catch @ 00a064bc
                       catch() { ... } // from try @ 00a065d4 with catch @ 00a064bc */
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,2,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(ushort *)(*(long *)this + *(long *)(this + 0x10));
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 2;
  }
  return this;
}

