
/* tinyxml2::MemPoolT<88>::Alloc() */

Block * __thiscall tinyxml2::MemPoolT<88>::Alloc(MemPoolT<88> *this)

{
  int iVar1;
  int iVar2;
  Block *__s;
  
  __s = *(Block **)(this + 0x68);
  if (__s == (Block *)0x0) {
    __s = operator_new(0x3c8);
    memset(__s,0,0x3c8);
    DynArray<tinyxml2::MemPoolT<88>::Block*,10>::Push
              ((DynArray<tinyxml2::MemPoolT<88>::Block*,10> *)(this + 8),__s);
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
    *(Block **)(this + 0x68) = __s;
  }
  iVar2 = *(int *)(this + 0x70);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)__s;
  iVar1 = iVar2 + 1;
  *(int *)(this + 0x70) = iVar1;
  if (*(int *)(this + 0x78) <= iVar2) {
    *(int *)(this + 0x78) = iVar1;
  }
  *(int *)(this + 0x74) = *(int *)(this + 0x74) + 1;
  *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + 1;
  return __s;
}

