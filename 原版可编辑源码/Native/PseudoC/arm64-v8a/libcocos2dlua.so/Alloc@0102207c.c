
/* tinyxml2::MemPoolT<96>::Alloc() */

Block * __thiscall tinyxml2::MemPoolT<96>::Alloc(MemPoolT<96> *this)

{
  int iVar1;
  int iVar2;
  Block *__s;
  
  __s = *(Block **)(this + 0x68);
  if (__s == (Block *)0x0) {
    __s = operator_new(0x3c0);
    memset(__s,0,0x3c0);
    DynArray<tinyxml2::MemPoolT<96>::Block*,10>::Push
              ((DynArray<tinyxml2::MemPoolT<96>::Block*,10> *)(this + 8),__s);
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

