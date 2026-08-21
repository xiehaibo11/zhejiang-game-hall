
/* std::__ndk1::vector<dragonBones::IAnimatable*, std::__ndk1::allocator<dragonBones::IAnimatable*>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>>::
__append(vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>> *this,
        ulong param_1)

{
  void *__s;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  
                    /* catch() { ... } // from try @ 00d7bc48 with catch @ 00d7bc88 */
                    /* catch() { ... } // from try @ 00d7bcdc with catch @ 00d7bca4 */
  pvVar1 = *(void **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pvVar1 >> 3)) {
    pvVar4 = pvVar1;
    if (param_1 != 0) {
      pvVar4 = (void *)((long)pvVar1 + param_1 * 8);
      memset(pvVar1,0,param_1 * 8);
                    /* catch() { ... } // from try @ 00d7bcd4 with catch @ 00d7bd14 */
    }
    *(void **)(this + 8) = pvVar4;
    return;
  }
  pvVar4 = *(void **)this;
  __n = (long)pvVar1 - (long)pvVar4;
  uVar5 = ((long)__n >> 3) + param_1;
  if (uVar5 >> 0x3d != 0) {
LAB_00d7bcfc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 00d7bcd4 to 00e7bcdb has its CatchHandler @ 00d7bd14 */
  lVar2 = *(long *)(this + 0x10) - (long)pvVar4;
                    /* try { // try from 00d7bcdc to 00e7bd2f has its CatchHandler @ 00d7bca4 */
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_00d7bd30;
    }
    if (uVar5 >> 0x3d != 0) goto LAB_00d7bcfc;
  }
  else {
    uVar5 = 0x1fffffffffffffff;
  }
  pvVar1 = operator_new(uVar5 << 3);
LAB_00d7bd30:
  __s = (void *)((long)pvVar1 + ((long)__n >> 3) * 8);
  memset(__s,0,param_1 * 8);
  if (0 < (long)__n) {
    memcpy(pvVar1,pvVar4,__n);
  }
  *(void **)this = pvVar1;
  *(void **)(this + 8) = (void *)((long)__s + param_1 * 8);
  *(void **)(this + 0x10) = (void *)((long)pvVar1 + uVar5 * 8);
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar4);
  return;
}

