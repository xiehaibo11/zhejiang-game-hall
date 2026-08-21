
/* tinyxml2::DynArray<char, 20>::Push(char) */

void __thiscall tinyxml2::DynArray<char,20>::Push(DynArray<char,20> *this,char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__dest;
  DynArray<char,20> *__src;
  
                    /* try { // try from 01026208 to 0112628b has its CatchHandler @ 010261b4 */
  iVar2 = *(int *)(this + 0x20);
  iVar3 = iVar2 + 1;
  if (iVar2 < *(int *)(this + 0x1c)) {
    __dest = *(void **)this;
  }
  else {
    iVar1 = iVar3 * 2;
    if (iVar3 < 0) {
      iVar1 = -1;
    }
    __dest = operator_new__((long)iVar1);
                    /* catch() { ... } // from try @ 010261fc with catch @ 01026254 */
    __src = *(DynArray<char,20> **)this;
    memcpy(__dest,__src,(long)iVar2);
    if ((__src != this + 8) && (__src != (DynArray<char,20> *)0x0)) {
      operator_delete__(__src);
    }
    iVar2 = *(int *)(this + 0x20);
    *(void **)this = __dest;
    *(int *)(this + 0x1c) = iVar3 * 2;
                    /* catch() { ... } // from try @ 010262e0 with catch @ 0102628c */
    iVar3 = iVar2 + 1;
  }
  *(int *)(this + 0x20) = iVar3;
  *(char *)((long)__dest + (long)iVar2) = param_1;
  return;
}

