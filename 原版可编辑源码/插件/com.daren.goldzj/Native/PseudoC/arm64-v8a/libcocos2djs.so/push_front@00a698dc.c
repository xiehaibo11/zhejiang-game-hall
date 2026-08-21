
/* std::__ndk1::__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>
   >::push_front(cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*&&) */

void __thiscall
std::__ndk1::
__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
::push_front(__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
             *this,AsyncTaskCallBack **param_1)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *__src;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  __src = *(undefined8 **)(this + 8);
                    /* try { // try from 00a698f8 to 00b699e7 has its CatchHandler @ 00a69688 */
  puVar14 = __src;
  if (__src != *(undefined8 **)this) goto LAB_00a69a74;
  puVar7 = *(undefined8 **)(this + 0x10);
  puVar14 = *(undefined8 **)(this + 0x18);
  if (puVar7 < puVar14) {
    lVar5 = (long)puVar14 - (long)puVar7 >> 3;
    lVar1 = lVar5 + 2;
    if (-1 < lVar5 + 1) {
      lVar1 = lVar5 + 1;
    }
    __n = (long)puVar7 - (long)__src;
    puVar7 = puVar7 + (lVar1 >> 1);
    puVar14 = puVar7;
    if (__n != 0) {
      puVar14 = (undefined8 *)((long)puVar7 - __n);
      memmove(puVar14,__src,__n);
      puVar7 = (undefined8 *)(*(long *)(this + 0x10) + (lVar1 >> 1) * 8);
    }
    *(undefined8 **)(this + 8) = puVar14;
    *(undefined8 **)(this + 0x10) = puVar7;
    goto LAB_00a69a74;
  }
  lVar1 = (long)puVar14 - (long)*(undefined8 **)this;
  uVar6 = lVar1 >> 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar6 << 3);
  }
  uVar11 = uVar6 + 3 >> 2;
  puVar14 = (undefined8 *)((long)pvVar4 + uVar11 * 8);
  puVar8 = puVar14;
  if (__src != puVar7) {
    uVar9 = (ulong)((long)puVar7 + (-8 - (long)__src)) >> 3;
    uVar2 = uVar9 + 1;
                    /* try { // try from 00a699e8 to 00b699f7 has its CatchHandler @ 00a69ab4 */
                    /* try { // try from 00a699f8 to 00b69b5b has its CatchHandler @ 00a69688 */
    if ((uVar2 < 4) ||
       ((puVar14 < __src + uVar9 + 1 &&
        (__src < (undefined8 *)((long)pvVar4 + (uVar9 + uVar11) * 8 + 8))))) {
LAB_00a69a44:
      do {
        puVar12 = __src + 1;
                    /* catch() { ... } // from try @ 00a697f0 with catch @ 00a69a4c */
        *puVar8 = *__src;
        puVar8 = puVar8 + 1;
        __src = puVar12;
      } while (puVar7 != puVar12);
    }
    else {
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      puVar8 = __src + 2;
      __src = __src + uVar10;
      puVar12 = (undefined8 *)((long)pvVar4 + uVar11 * 8 + 0x10);
      uVar13 = uVar10;
      do {
        puVar3 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        puVar8 = puVar8 + 4;
                    /* catch() { ... } // from try @ 00a6981c with catch @ 00a69a2c */
        uVar13 = uVar13 - 4;
        puVar12[-1] = *puVar3;
        puVar12[-2] = uVar15;
        puVar12[1] = uVar17;
        *puVar12 = uVar16;
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
                    /* catch() { ... } // from try @ 00a6980c with catch @ 00a69a3c */
      puVar8 = puVar14 + uVar10;
      if (uVar2 != uVar10) goto LAB_00a69a44;
    }
    __src = *(undefined8 **)this;
    puVar8 = (undefined8 *)((long)pvVar4 + (uVar9 + uVar11 + 1) * 8);
  }
                    /* catch() { ... } // from try @ 00a697e0 with catch @ 00a69a5c */
  *(void **)this = pvVar4;
  *(undefined8 **)(this + 8) = puVar14;
  *(undefined8 **)(this + 0x10) = puVar8;
  *(void **)(this + 0x18) = (void *)((long)pvVar4 + uVar6 * 8);
  if (__src != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00a697cc with catch @ 00a69a6c */
    operator_delete(__src);
    puVar14 = *(undefined8 **)(this + 8);
  }
LAB_00a69a74:
  puVar14[-1] = *param_1;
                    /* catch() { ... } // from try @ 00a697c0 with catch @ 00a69a84 */
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
                    /* catch() { ... } // from try @ 00a697ac with catch @ 00a69a8c */
                    /* catch() { ... } // from try @ 00a69784 with catch @ 00a69a90 */
                    /* catch() { ... } // from try @ 00a69768 with catch @ 00a69a98 */
                    /* catch() { ... } // from try @ 00a6978c with catch @ 00a69a9c */
  return;
}

