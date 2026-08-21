
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(unsigned int&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,uint *param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00a0650c to 00b06523 has its CatchHandler @ 00a065ec */
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 4) {
    pcVar1 = (char *)Translated::getInstance();
                    /* try { // try from 00a06528 to 00b06553 has its CatchHandler @ 00a065e8 */
    Translated::log(pcVar1,&DAT_012f87ed,4,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(uint *)(*(long *)this + *(long *)(this + 0x10));
                    /* try { // try from 00a06554 to 00b0657b has its CatchHandler @ 00a064bc */
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 4;
  }
  return this;
}

