
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(double&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,double *param_1)

{
  char *pcVar1;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 8) {
                    /* try { // try from 00a06960 to 00b0698f has its CatchHandler @ 00a068d8 */
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,&DAT_012f87ed,8,*(long *)(this + 8) - *(long *)(this + 0x10));
  }
  else {
    *param_1 = *(double *)(*(long *)this + *(long *)(this + 0x10));
                    /* try { // try from 00a06990 to 00b069a3 has its CatchHandler @ 00a069e4 */
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
                    /* try { // try from 00a069a4 to 00b069ff has its CatchHandler @ 00a068d8 */
  return this;
}

