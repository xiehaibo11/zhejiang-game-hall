
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(char&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,char *param_1)

{
  char *pcVar1;
  
                    /* try { // try from 00a0657c to 00b0658f has its CatchHandler @ 00a065ec */
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,1,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(char *)(*(long *)this + *(long *)(this + 0x10));
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
                    /* try { // try from 00a065cc to 00b065d3 has its CatchHandler @ 00a065e8 */
  return this;
}

