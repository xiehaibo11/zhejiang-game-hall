
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(long double&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,longdouble *param_1)

{
  longdouble *plVar1;
  char *pcVar2;
  longdouble lVar3;
  
  if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < 0x10) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,&DAT_012f87ed,0x10,*(long *)(this + 8) - *(long *)(this + 0x10));
                    /* catch() { ... } // from try @ 00a06928 with catch @ 00a069e4
                       catch() { ... } // from try @ 00a06990 with catch @ 00a069e4 */
  }
  else {
    plVar1 = (longdouble *)(*(long *)this + *(long *)(this + 0x10));
    lVar3 = *plVar1;
    param_1[1] = plVar1[1];
    *param_1 = lVar3;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x10;
  }
  return this;
}

