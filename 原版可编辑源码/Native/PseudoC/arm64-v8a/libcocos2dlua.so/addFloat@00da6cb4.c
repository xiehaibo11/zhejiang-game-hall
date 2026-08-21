
/* dragonBones::UserData::addFloat(float) */

void __thiscall dragonBones::UserData::addFloat(UserData *this,float param_1)

{
  float *pfVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  
  pfVar1 = *(float **)(this + 0x30);
  if (pfVar1 != *(float **)(this + 0x38)) {
    *pfVar1 = param_1;
    *(float **)(this + 0x30) = pfVar1 + 1;
    return;
  }
  __src = *(void **)(this + 0x28);
  __n = (long)pfVar1 - (long)__src;
  uVar4 = ((long)__n >> 2) + 1;
  if (uVar4 >> 0x3e != 0) {
LAB_00da6d48:
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 00da6d20 to 00ea6d23 has its CatchHandler @ 00da6d88 */
  lVar2 = (long)*(float **)(this + 0x38) - (long)__src;
                    /* try { // try from 00da6d24 to 00ea6da3 has its CatchHandler @ 00da6cfc */
  if ((ulong)(lVar2 >> 2) < 0x1fffffffffffffff) {
    uVar3 = lVar2 >> 1;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      __dest = (void *)0x0;
      goto LAB_00da6d5c;
    }
    if (uVar4 >> 0x3e != 0) goto LAB_00da6d48;
  }
  else {
    uVar4 = 0x3fffffffffffffff;
  }
  __dest = operator_new(uVar4 << 2);
LAB_00da6d5c:
  pfVar1 = (float *)((long)__dest + ((long)__n >> 2) * 4);
  *pfVar1 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(this + 0x28) = __dest;
  *(float **)(this + 0x30) = pfVar1 + 1;
  *(void **)(this + 0x38) = (void *)((long)__dest + uVar4 * 4);
                    /* catch() { ... } // from try @ 00da6d20 with catch @ 00da6d88 */
  if (__src == (void *)0x0) {
                    /* catch() { ... } // from try @ 00da6d24 with catch @ 00da6cfc */
    return;
  }
                    /* catch() { ... } // from try @ 00da6dd0 with catch @ 00da6da4 */
  operator_delete(__src);
  return;
}

