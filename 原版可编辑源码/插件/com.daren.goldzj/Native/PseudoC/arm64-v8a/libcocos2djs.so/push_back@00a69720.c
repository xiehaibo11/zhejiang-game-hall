
/* std::__ndk1::__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>
   >::push_back(cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*&&) */

void __thiscall
std::__ndk1::
__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
::push_back(__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
            *this,AsyncTaskCallBack **param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  size_t __n;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *__src;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar14 = *(undefined8 **)(this + 0x10);
  if (puVar14 != *(undefined8 **)(this + 0x18)) goto LAB_00a698a8;
  puVar13 = *(undefined8 **)this;
  __src = *(undefined8 **)(this + 8);
  if (puVar13 <= __src && (long)__src - (long)puVar13 != 0) {
    lVar6 = (long)__src - (long)puVar13 >> 3;
                    /* try { // try from 00a6975c to 00b69763 has its CatchHandler @ 00a69ab4 */
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
                    /* try { // try from 00a69768 to 00b6977f has its CatchHandler @ 00a69a98 */
    __n = (long)puVar14 - (long)__src;
    puVar14 = __src + -(lVar1 >> 1);
    puVar13 = puVar14;
    if (__n != 0) {
                    /* try { // try from 00a69784 to 00b6978b has its CatchHandler @ 00a69a90 */
      memmove(puVar14,__src,__n);
                    /* try { // try from 00a6978c to 00b697ab has its CatchHandler @ 00a69a9c */
      puVar13 = (undefined8 *)(*(long *)(this + 8) + (lVar1 >> 1) * -8);
    }
                    /* try { // try from 00a697c0 to 00b697cb has its CatchHandler @ 00a69a84 */
    puVar14 = puVar14 + ((long)__n >> 3);
    *(undefined8 **)(this + 8) = puVar13;
    *(undefined8 **)(this + 0x10) = puVar14;
    goto LAB_00a698a8;
  }
  lVar1 = (long)*(undefined8 **)(this + 0x18) - (long)puVar13;
  uVar7 = lVar1 >> 2;
  if (lVar1 == 0) {
    uVar7 = 1;
  }
  if (uVar7 == 0) {
                    /* try { // try from 00a697cc to 00b697db has its CatchHandler @ 00a69a6c */
    pvVar5 = (void *)0x0;
  }
  else {
                    /* try { // try from 00a697ac to 00b697bb has its CatchHandler @ 00a69a8c */
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar7 << 3);
  }
  uVar8 = uVar7 >> 2;
  puVar3 = (undefined8 *)((long)pvVar5 + uVar8 * 8);
  puVar9 = puVar3;
                    /* try { // try from 00a697e0 to 00b697eb has its CatchHandler @ 00a69a5c */
  if (__src != puVar14) {
    uVar10 = (ulong)((long)puVar14 + (-8 - (long)__src)) >> 3;
                    /* try { // try from 00a697f0 to 00b697f7 has its CatchHandler @ 00a69a4c */
    uVar2 = uVar10 + 1;
    puVar13 = puVar3;
                    /* try { // try from 00a6981c to 00b69823 has its CatchHandler @ 00a69a2c */
    if ((uVar2 < 4) ||
       ((puVar3 < __src + uVar10 + 1 &&
        (__src < (undefined8 *)((long)pvVar5 + (uVar8 + uVar10) * 8 + 8))))) {
LAB_00a69878:
      do {
        puVar9 = __src + 1;
        *puVar13 = *__src;
        puVar13 = puVar13 + 1;
        __src = puVar9;
      } while (puVar14 != puVar9);
    }
    else {
      uVar11 = uVar2 & 0x3ffffffffffffffc;
      puVar13 = __src + 2;
      __src = __src + uVar11;
      puVar9 = (undefined8 *)((long)pvVar5 + uVar8 * 8 + 0x10);
                    /* try { // try from 00a69854 to 00b698f7 has its CatchHandler @ 00a69b04 */
      uVar12 = uVar11;
      do {
        puVar4 = puVar13 + -1;
        uVar15 = puVar13[-2];
        uVar17 = puVar13[1];
        uVar16 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar12 = uVar12 - 4;
        puVar9[-1] = *puVar4;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar17;
        *puVar9 = uVar16;
        puVar9 = puVar9 + 4;
      } while (uVar12 != 0);
      puVar13 = puVar3 + uVar11;
      if (uVar2 != uVar11) goto LAB_00a69878;
    }
    puVar13 = *(undefined8 **)this;
    puVar9 = (undefined8 *)((long)pvVar5 + (uVar8 + uVar10 + 1) * 8);
  }
  puVar14 = puVar9;
  *(void **)this = pvVar5;
  *(undefined8 **)(this + 8) = puVar3;
  *(undefined8 **)(this + 0x10) = puVar14;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
    puVar14 = *(undefined8 **)(this + 0x10);
  }
LAB_00a698a8:
  *puVar14 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}

