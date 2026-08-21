
/* tinyxml2::DynArray<char, 20>::PushArr(int) */

long __thiscall tinyxml2::DynArray<char,20>::PushArr(DynArray<char,20> *this,int param_1)

{
  int iVar1;
  void *__dest;
  int iVar2;
  int iVar3;
  DynArray<char,20> *__src;
  
  iVar3 = *(int *)(this + 0x20);
  iVar2 = iVar3 + param_1;
                    /* try { // try from 010263ec to 011263fb has its CatchHandler @ 0102644c */
  if (*(int *)(this + 0x1c) < iVar2) {
    iVar1 = iVar2 * 2;
                    /* try { // try from 010263fc to 01126483 has its CatchHandler @ 01026364 */
    if (iVar2 < 0) {
      iVar1 = -1;
    }
    __dest = operator_new__((long)iVar1);
    __src = *(DynArray<char,20> **)this;
    memcpy(__dest,__src,(long)iVar3);
    if ((__src != this + 8) && (__src != (DynArray<char,20> *)0x0)) {
      operator_delete__(__src);
    }
    iVar3 = *(int *)(this + 0x20);
    *(void **)this = __dest;
    *(int *)(this + 0x1c) = iVar2 * 2;
    iVar2 = iVar3 + param_1;
                    /* catch() { ... } // from try @ 010263ec with catch @ 0102644c */
  }
  else {
    __dest = *(void **)this;
  }
  *(int *)(this + 0x20) = iVar2;
  return (long)__dest + (long)iVar3;
}

