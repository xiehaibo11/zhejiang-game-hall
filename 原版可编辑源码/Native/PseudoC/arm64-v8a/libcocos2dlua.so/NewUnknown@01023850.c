
/* tinyxml2::XMLDocument::NewUnknown(char const*) */

Block * __thiscall tinyxml2::XMLDocument::NewUnknown(XMLDocument *this,char *param_1)

{
  int iVar1;
  int iVar2;
  Block *__s;
  
  __s = *(Block **)(this + 0x268);
  if (__s == (Block *)0x0) {
    __s = operator_new(0x3c8);
    memset(__s,0,0x3c8);
    DynArray<tinyxml2::MemPoolT<88>::Block*,10>::Push
              ((DynArray<tinyxml2::MemPoolT<88>::Block*,10> *)(this + 0x208),__s);
    *(Block **)__s = __s + 0x58;
    *(Block **)(__s + 0x58) = __s + 0xb0;
    *(Block **)(__s + 0xb0) = __s + 0x108;
    *(Block **)(__s + 0x108) = __s + 0x160;
    *(Block **)(__s + 0x160) = __s + 0x1b8;
    *(Block **)(__s + 0x1b8) = __s + 0x210;
    *(Block **)(__s + 0x210) = __s + 0x268;
    *(Block **)(__s + 0x268) = __s + 0x2c0;
    *(Block **)(__s + 0x2c0) = __s + 0x318;
    *(Block **)(__s + 0x318) = __s + 0x370;
    *(undefined8 *)(__s + 0x370) = 0;
    *(Block **)(this + 0x268) = __s;
  }
  iVar2 = *(int *)(this + 0x270);
  *(undefined8 *)(this + 0x268) = *(undefined8 *)__s;
  iVar1 = iVar2 + 1;
  *(int *)(this + 0x270) = iVar1;
  if (*(int *)(this + 0x278) <= iVar2) {
    *(int *)(this + 0x278) = iVar1;
  }
  *(int *)(this + 0x274) = *(int *)(this + 0x274) + 1;
  *(int *)(this + 0x27c) = *(int *)(this + 0x27c) + 1;
  *(XMLDocument **)(__s + 8) = this;
  *(undefined8 *)(__s + 0x10) = 0;
  *(undefined4 *)(__s + 0x18) = 0;
  *(undefined8 *)(__s + 0x28) = 0;
  *(undefined8 *)(__s + 0x20) = 0;
  *(undefined8 *)(__s + 0x38) = 0;
  *(undefined8 *)(__s + 0x30) = 0;
  *(undefined8 *)(__s + 0x48) = 0;
  *(undefined8 *)(__s + 0x40) = 0;
  *(undefined ***)__s = &PTR_ToElement_01727560;
  *(XMLDocument **)(__s + 0x50) = this + 0x200;
  StrPair::SetStr((StrPair *)(__s + 0x18),param_1,0);
  return __s;
}

