
/* std::__ndk1::vector<int, std::__ndk1::allocator<int> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
          (vector<int,std::__ndk1::allocator<int>> *this,ulong param_1)

{
  void *__s;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  
                    /* try { // try from 00d9d9f4 to 00e9da0b has its CatchHandler @ 00d9f3b4 */
  pvVar1 = *(void **)(this + 8);
                    /* try { // try from 00d9da0c to 00e9da23 has its CatchHandler @ 00d9f394 */
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pvVar1 >> 2)) {
    pvVar4 = pvVar1;
    if (param_1 != 0) {
      pvVar4 = (void *)((long)pvVar1 + param_1 * 4);
      memset(pvVar1,0,param_1 * 4);
    }
    *(void **)(this + 8) = pvVar4;
    return;
  }
  pvVar4 = *(void **)this;
  __n = (long)pvVar1 - (long)pvVar4;
  uVar5 = ((long)__n >> 2) + param_1;
  if (uVar5 >> 0x3e != 0) {
LAB_00d9da54:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = *(long *)(this + 0x10) - (long)pvVar4;
  if ((ulong)(lVar2 >> 2) < 0x1fffffffffffffff) {
    uVar3 = lVar2 >> 1;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_00d9da88;
    }
    if (uVar5 >> 0x3e != 0) goto LAB_00d9da54;
  }
  else {
    uVar5 = 0x3fffffffffffffff;
  }
  pvVar1 = operator_new(uVar5 << 2);
LAB_00d9da88:
  __s = (void *)((long)pvVar1 + ((long)__n >> 2) * 4);
  memset(__s,0,param_1 * 4);
  if (0 < (long)__n) {
    memcpy(pvVar1,pvVar4,__n);
  }
  *(void **)this = pvVar1;
  *(void **)(this + 8) = (void *)((long)__s + param_1 * 4);
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar5 * 4);
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar4);
  return;
}

