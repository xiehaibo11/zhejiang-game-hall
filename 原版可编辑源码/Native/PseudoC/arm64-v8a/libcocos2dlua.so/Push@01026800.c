
/* tinyxml2::DynArray<char const*, 10>::Push(char const*) */

void __thiscall
tinyxml2::DynArray<char_const*,10>::Push(DynArray<char_const*,10> *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  void *__dest;
  DynArray<char_const*,10> *__src;
  
                    /* try { // try from 01026808 to 01126813 has its CatchHandler @ 01026874 */
  iVar2 = *(int *)(this + 0x5c);
  if (iVar2 < *(int *)(this + 0x58)) {
    __dest = *(void **)this;
  }
  else {
                    /* try { // try from 0102683c to 01126847 has its CatchHandler @ 01026884 */
    uVar1 = iVar2 * 2 + 2;
    uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
                    /* try { // try from 01026848 to 0112689b has its CatchHandler @ 01026798 */
    if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar3);
    __src = *(DynArray<char_const*,10> **)this;
    memcpy(__dest,__src,(long)iVar2 << 3);
                    /* catch() { ... } // from try @ 01026808 with catch @ 01026874 */
    if ((__src != this + 8) && (__src != (DynArray<char_const*,10> *)0x0)) {
      operator_delete__(__src);
    }
    iVar2 = *(int *)(this + 0x5c);
                    /* catch() { ... } // from try @ 0102683c with catch @ 01026884 */
    *(void **)this = __dest;
                    /* catch() { ... } // from try @ 010267f4 with catch @ 01026888 */
    *(uint *)(this + 0x58) = uVar1;
  }
  *(int *)(this + 0x5c) = iVar2 + 1;
  *(char **)((long)__dest + (long)iVar2 * 8) = param_1;
  return;
}

