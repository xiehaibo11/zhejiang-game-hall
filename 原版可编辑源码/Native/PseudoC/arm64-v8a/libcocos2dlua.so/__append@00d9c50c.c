
/* std::__ndk1::vector<short, std::__ndk1::allocator<short> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
          (vector<short,std::__ndk1::allocator<short>> *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  size_t __n;
  
                    /* try { // try from 00d9c528 to 00e9c537 has its CatchHandler @ 00d9c918 */
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)pvVar2 >> 1) < param_1) {
    pvVar4 = *(void **)this;
    __n = (long)pvVar2 - (long)pvVar4;
    uVar1 = ((long)__n >> 1) + param_1;
    if ((long)uVar1 < 0) {
LAB_00d9c61c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = *(long *)(this + 0x10) - (long)pvVar4;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0x3ffffffffffffffe < (ulong)((long)uVar3 >> 1)) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
                    /* try { // try from 00d9c574 to 00e9c583 has its CatchHandler @ 00d9c9d8 */
      if ((long)uVar1 < 0) goto LAB_00d9c61c;
      pvVar2 = operator_new(uVar1 << 1);
    }
    __s = (void *)((long)pvVar2 + ((long)__n >> 1) * 2);
    memset(__s,0,param_1 * 2);
    if (0 < (long)__n) {
                    /* try { // try from 00d9c5d0 to 00e9c5eb has its CatchHandler @ 00d9c9f4 */
      memcpy(pvVar2,pvVar4,__n);
    }
    *(void **)this = pvVar2;
    *(void **)(this + 8) = (void *)((long)__s + param_1 * 2);
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 2);
    if (pvVar4 != (void *)0x0) {
                    /* try { // try from 00d9c5f0 to 00e9c5ff has its CatchHandler @ 00d9c9f0 */
      operator_delete(pvVar4);
      return;
    }
  }
  else {
    pvVar4 = pvVar2;
    if (param_1 != 0) {
      pvVar4 = (void *)((long)pvVar2 + param_1 * 2);
      memset(pvVar2,0,param_1 * 2);
    }
    *(void **)(this + 8) = pvVar4;
  }
  return;
}

