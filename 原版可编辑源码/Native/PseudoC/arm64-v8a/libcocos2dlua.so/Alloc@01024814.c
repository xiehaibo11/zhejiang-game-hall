
/* tinyxml2::MemPoolT<72>::Alloc() */

Block * __thiscall tinyxml2::MemPoolT<72>::Alloc(MemPoolT<72> *this)

{
  int iVar1;
  int iVar2;
  Block *__s;
  
                    /* try { // try from 01024814 to 01124873 has its CatchHandler @ 01024814
                       catch() { ... } // from try @ 01024814 with catch @ 01024814
                       catch() { ... } // from try @ 010248b4 with catch @ 01024814
                       catch() { ... } // from try @ 01024970 with catch @ 01024814 */
  __s = *(Block **)(this + 0x68);
  if (__s == (Block *)0x0) {
    __s = operator_new(0x3f0);
    memset(__s,0,0x3f0);
    DynArray<tinyxml2::MemPoolT<72>::Block*,10>::Push
              ((DynArray<tinyxml2::MemPoolT<72>::Block*,10> *)(this + 8),__s);
    *(Block **)(__s + 0x48) = __s + 0x90;
    *(Block **)__s = __s + 0x48;
    *(Block **)(__s + 0x90) = __s + 0xd8;
    *(Block **)(__s + 0xd8) = __s + 0x120;
                    /* try { // try from 01024874 to 0112489f has its CatchHandler @ 010249f8 */
    *(Block **)(__s + 0x120) = __s + 0x168;
    *(Block **)(__s + 0x168) = __s + 0x1b0;
    *(Block **)(__s + 0x1b0) = __s + 0x1f8;
    *(Block **)(__s + 0x1f8) = __s + 0x240;
    *(Block **)(__s + 0x240) = __s + 0x288;
                    /* try { // try from 010248a0 to 011248b3 has its CatchHandler @ 01024a08 */
    *(Block **)(__s + 0x288) = __s + 0x2d0;
    *(Block **)(__s + 0x2d0) = __s + 0x318;
    *(Block **)(__s + 0x318) = __s + 0x360;
                    /* try { // try from 010248b4 to 0112495b has its CatchHandler @ 01024814 */
    *(Block **)(__s + 0x360) = __s + 0x3a8;
    *(undefined8 *)(__s + 0x3a8) = 0;
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

