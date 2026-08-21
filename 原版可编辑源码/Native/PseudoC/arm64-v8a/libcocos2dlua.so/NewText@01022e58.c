
/* tinyxml2::XMLDocument::NewText(char const*) */

Block * __thiscall tinyxml2::XMLDocument::NewText(XMLDocument *this,char *param_1)

{
  int iVar1;
  int iVar2;
  Block *__s;
  
  __s = *(Block **)(this + 0x1e8);
  if (__s == (Block *)0x0) {
    __s = operator_new(0x3c0);
                    /* try { // try from 01022e8c to 01122f93 has its CatchHandler @ 01022d80 */
    memset(__s,0,0x3c0);
    DynArray<tinyxml2::MemPoolT<96>::Block*,10>::Push
              ((DynArray<tinyxml2::MemPoolT<96>::Block*,10> *)(this + 0x188),__s);
    *(Block **)__s = __s + 0x60;
    *(Block **)(__s + 0x60) = __s + 0xc0;
    *(Block **)(__s + 0xc0) = __s + 0x120;
    *(Block **)(__s + 0x120) = __s + 0x180;
    *(Block **)(__s + 0x180) = __s + 0x1e0;
    *(Block **)(__s + 0x1e0) = __s + 0x240;
    *(Block **)(__s + 0x240) = __s + 0x2a0;
    *(Block **)(__s + 0x2a0) = __s + 0x300;
    *(Block **)(__s + 0x300) = __s + 0x360;
    *(undefined8 *)(__s + 0x360) = 0;
    *(Block **)(this + 0x1e8) = __s;
  }
  iVar2 = *(int *)(this + 0x1f0);
  *(undefined8 *)(this + 0x1e8) = *(undefined8 *)__s;
  iVar1 = iVar2 + 1;
  *(int *)(this + 0x1f0) = iVar1;
  if (*(int *)(this + 0x1f8) <= iVar2) {
    *(int *)(this + 0x1f8) = iVar1;
  }
  *(int *)(this + 500) = *(int *)(this + 500) + 1;
  *(int *)(this + 0x1fc) = *(int *)(this + 0x1fc) + 1;
  *(XMLDocument **)(__s + 8) = this;
  *(undefined8 *)(__s + 0x10) = 0;
  *(undefined4 *)(__s + 0x18) = 0;
  *(undefined8 *)(__s + 0x28) = 0;
  *(undefined8 *)(__s + 0x20) = 0;
  *(undefined8 *)(__s + 0x38) = 0;
  *(undefined8 *)(__s + 0x30) = 0;
  *(undefined8 *)(__s + 0x48) = 0;
  *(undefined8 *)(__s + 0x40) = 0;
  *(undefined ***)__s = &PTR_ToElement_017277a0;
  __s[0x58] = (Block)0x0;
  *(XMLDocument **)(__s + 0x50) = this + 0x180;
  StrPair::SetStr((StrPair *)(__s + 0x18),param_1,0);
  return __s;
}

