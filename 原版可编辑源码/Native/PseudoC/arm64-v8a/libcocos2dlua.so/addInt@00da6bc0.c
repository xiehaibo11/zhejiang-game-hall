
/* dragonBones::UserData::addInt(int) */

void __thiscall dragonBones::UserData::addInt(UserData *this,int param_1)

{
  int *piVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  
  piVar1 = *(int **)(this + 0x18);
  if (piVar1 != *(int **)(this + 0x20)) {
    *piVar1 = param_1;
    *(int **)(this + 0x18) = piVar1 + 1;
    return;
  }
  __src = *(void **)(this + 0x10);
  __n = (long)piVar1 - (long)__src;
  uVar4 = ((long)__n >> 2) + 1;
  if (uVar4 >> 0x3e != 0) {
LAB_00da6c4c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = (long)*(int **)(this + 0x20) - (long)__src;
  if ((ulong)(lVar2 >> 2) < 0x1fffffffffffffff) {
    uVar3 = lVar2 >> 1;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      __dest = (void *)0x0;
      goto LAB_00da6c60;
    }
    if (uVar4 >> 0x3e != 0) goto LAB_00da6c4c;
  }
  else {
    uVar4 = 0x3fffffffffffffff;
  }
  __dest = operator_new(uVar4 << 2);
LAB_00da6c60:
  piVar1 = (int *)((long)__dest + ((long)__n >> 2) * 4);
  *piVar1 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(this + 0x10) = __dest;
  *(int **)(this + 0x18) = piVar1 + 1;
  *(void **)(this + 0x20) = (void *)((long)__dest + uVar4 * 4);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

