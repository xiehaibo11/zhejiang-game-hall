
/* tinyxml2::MemPoolT<104>::Alloc() */

Block * __thiscall tinyxml2::MemPoolT<104>::Alloc(MemPoolT<104> *this)

{
  int iVar1;
  int iVar2;
  Block *__s;
  
  __s = *(Block **)(this + 0x68);
  if (__s == (Block *)0x0) {
    __s = operator_new(0x3a8);
    memset(__s,0,0x3a8);
    DynArray<tinyxml2::MemPoolT<104>::Block*,10>::Push
              ((DynArray<tinyxml2::MemPoolT<104>::Block*,10> *)(this + 8),__s);
    *(Block **)__s = __s + 0x68;
    *(Block **)(__s + 0x68) = __s + 0xd0;
    *(Block **)(__s + 0xd0) = __s + 0x138;
    *(Block **)(__s + 0x138) = __s + 0x1a0;
    *(Block **)(__s + 0x1a0) = __s + 0x208;
    *(Block **)(__s + 0x208) = __s + 0x270;
    *(Block **)(__s + 0x270) = __s + 0x2d8;
    *(Block **)(__s + 0x2d8) = __s + 0x340;
    *(undefined8 *)(__s + 0x340) = 0;
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

