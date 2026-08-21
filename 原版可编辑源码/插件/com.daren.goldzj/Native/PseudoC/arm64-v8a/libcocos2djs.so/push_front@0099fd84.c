
/* std::__ndk1::__split_buffer<cocos2d::ThreadPool::Task*,
   std::__ndk1::allocator<cocos2d::ThreadPool::Task*>&>::push_front(cocos2d::ThreadPool::Task*
   const&) */

void __thiscall
std::__ndk1::
__split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>&>::
push_front(__split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>&>
           *this,Task **param_1)

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
  
                    /* try { // try from 0099fd8c to 00a9fde7 has its CatchHandler @ 0099fd8c
                       catch() { ... } // from try @ 0099fd8c with catch @ 0099fd8c
                       catch() { ... } // from try @ 0099ffdc with catch @ 0099fd8c */
  __src = *(undefined8 **)(this + 8);
  puVar14 = __src;
  if (__src != *(undefined8 **)this) goto LAB_0099ff1c;
  puVar7 = *(undefined8 **)(this + 0x10);
  puVar14 = *(undefined8 **)(this + 0x18);
  if (puVar7 < puVar14) {
    lVar5 = (long)puVar14 - (long)puVar7 >> 3;
    lVar1 = lVar5 + 2;
    if (-1 < lVar5 + 1) {
      lVar1 = lVar5 + 1;
    }
    __n = (long)puVar7 - (long)__src;
                    /* try { // try from 0099fde8 to 00a9fdff has its CatchHandler @ 009a0060 */
    puVar7 = puVar7 + (lVar1 >> 1);
    puVar14 = puVar7;
    if (__n != 0) {
      puVar14 = (undefined8 *)((long)puVar7 - __n);
      memmove(puVar14,__src,__n);
      puVar7 = (undefined8 *)(*(long *)(this + 0x10) + (lVar1 >> 1) * 8);
                    /* try { // try from 0099fe08 to 00a9fe13 has its CatchHandler @ 009a005c */
    }
    *(undefined8 **)(this + 8) = puVar14;
    *(undefined8 **)(this + 0x10) = puVar7;
    goto LAB_0099ff1c;
  }
  lVar1 = (long)puVar14 - (long)*(undefined8 **)this;
  uVar6 = lVar1 >> 2;
                    /* try { // try from 0099fe14 to 00a9fe1f has its CatchHandler @ 009a0058 */
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
                    /* try { // try from 0099fe20 to 00a9fe53 has its CatchHandler @ 009a0080 */
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
                    /* try { // try from 0099fe5c to 00a9fedb has its CatchHandler @ 009a0070 */
    uVar9 = (ulong)((long)puVar7 + (-8 - (long)__src)) >> 3;
    uVar2 = uVar9 + 1;
    if ((uVar2 < 4) ||
       ((puVar14 < __src + uVar9 + 1 &&
        (__src < (undefined8 *)((long)pvVar4 + (uVar9 + uVar11) * 8 + 8))))) {
LAB_0099feec:
      do {
        puVar12 = __src + 1;
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
        uVar13 = uVar13 - 4;
        puVar12[-1] = *puVar3;
        puVar12[-2] = uVar15;
        puVar12[1] = uVar17;
        *puVar12 = uVar16;
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
      puVar8 = puVar14 + uVar10;
                    /* try { // try from 0099fee8 to 00a9ff4f has its CatchHandler @ 009a0080 */
      if (uVar2 != uVar10) goto LAB_0099feec;
    }
    __src = *(undefined8 **)this;
    puVar8 = (undefined8 *)((long)pvVar4 + (uVar9 + uVar11 + 1) * 8);
  }
  *(void **)this = pvVar4;
  *(undefined8 **)(this + 8) = puVar14;
  *(undefined8 **)(this + 0x10) = puVar8;
  *(void **)(this + 0x18) = (void *)((long)pvVar4 + uVar6 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    puVar14 = *(undefined8 **)(this + 8);
  }
LAB_0099ff1c:
  puVar14[-1] = *param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return;
}

