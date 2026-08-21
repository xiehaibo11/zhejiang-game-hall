
/* tinyxml2::XMLDocument::NewElement(char const*) */

Block * __thiscall tinyxml2::XMLDocument::NewElement(XMLDocument *this,char *param_1)

{
  int iVar1;
  int iVar2;
  Block *__s;
  
                    /* try { // try from 01024f90 to 01124fbf has its CatchHandler @ 01025048 */
  __s = *(Block **)(this + 0xe8);
  if (__s == (Block *)0x0) {
    __s = operator_new(0x3a8);
    memset(__s,0,0x3a8);
                    /* try { // try from 01024fc0 to 01125087 has its CatchHandler @ 01024f08 */
    DynArray<tinyxml2::MemPoolT<104>::Block*,10>::Push
              ((DynArray<tinyxml2::MemPoolT<104>::Block*,10> *)(this + 0x88),__s);
    *(Block **)__s = __s + 0x68;
    *(Block **)(__s + 0x68) = __s + 0xd0;
    *(Block **)(__s + 0xd0) = __s + 0x138;
    *(Block **)(__s + 0x138) = __s + 0x1a0;
    *(Block **)(__s + 0x1a0) = __s + 0x208;
    *(Block **)(__s + 0x208) = __s + 0x270;
    *(Block **)(__s + 0x270) = __s + 0x2d8;
    *(Block **)(__s + 0x2d8) = __s + 0x340;
    *(undefined8 *)(__s + 0x340) = 0;
    *(Block **)(this + 0xe8) = __s;
  }
  iVar2 = *(int *)(this + 0xf0);
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)__s;
  iVar1 = iVar2 + 1;
  *(int *)(this + 0xf0) = iVar1;
  if (*(int *)(this + 0xf8) <= iVar2) {
    *(int *)(this + 0xf8) = iVar1;
  }
  *(int *)(this + 0xf4) = *(int *)(this + 0xf4) + 1;
                    /* catch() { ... } // from try @ 01024f90 with catch @ 01025048 */
  *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + 1;
  *(XMLDocument **)(__s + 8) = this;
  *(undefined8 *)(__s + 0x10) = 0;
  *(undefined4 *)(__s + 0x18) = 0;
  *(undefined8 *)(__s + 0x28) = 0;
  *(undefined8 *)(__s + 0x20) = 0;
  *(undefined8 *)(__s + 0x38) = 0;
  *(undefined8 *)(__s + 0x30) = 0;
  *(undefined8 *)(__s + 0x48) = 0;
  *(undefined8 *)(__s + 0x40) = 0;
  *(undefined ***)__s = &PTR_ToElement_01727600;
  *(undefined4 *)(__s + 0x58) = 0;
  *(undefined8 *)(__s + 0x60) = 0;
  *(XMLDocument **)(__s + 0x50) = this + 0x80;
                    /* catch() { ... } // from try @ 01025114 with catch @ 01025088 */
  StrPair::SetStr((StrPair *)(__s + 0x18),param_1,0);
  return __s;
}

