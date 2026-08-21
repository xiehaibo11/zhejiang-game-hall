
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(float&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,float *param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00a068d8 to 00b06927 has its CatchHandler @ 00a068d8
                       catch() { ... } // from try @ 00a068d8 with catch @ 00a068d8
                       catch() { ... } // from try @ 00a06960 with catch @ 00a068d8
                       catch() { ... } // from try @ 00a069a4 with catch @ 00a068d8 */
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 4) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,4,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(float *)(*(long *)this + *(long *)(this + 0x10));
                    /* try { // try from 00a06928 to 00b0695f has its CatchHandler @ 00a069e4 */
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 4;
  }
  return this;
}

