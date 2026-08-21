
/* std::__ndk1::__split_buffer<std::__ndk1::function<void ()>*,
   std::__ndk1::allocator<std::__ndk1::function<void ()>*>&>::push_front(std::__ndk1::function<void
   ()>* const&) */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
::push_front(__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
             *this,function **param_1)

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
                    /* try { // try from 00a008d4 to 00b00aa7 has its CatchHandler @ 00a0040c */
  puVar14 = __src;
  if (__src != *(undefined8 **)this) goto LAB_00a00a50;
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
    goto LAB_00a00a50;
  }
  lVar1 = (long)puVar14 - (long)*(undefined8 **)this;
  uVar6 = lVar1 >> 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
                    /* catch() { ... } // from try @ 00a00618 with catch @ 00a0094c */
  if (uVar6 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00a00514 with catch @ 00a00950 */
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar6 << 3);
                    /* catch() { ... } // from try @ 00a00634 with catch @ 00a00960
                       catch() { ... } // from try @ 00a007e0 with catch @ 00a00960 */
  }
  uVar11 = uVar6 + 3 >> 2;
  puVar14 = (undefined8 *)((long)pvVar4 + uVar11 * 8);
  puVar8 = puVar14;
  if (__src != puVar7) {
    uVar9 = (ulong)((long)puVar7 + (-8 - (long)__src)) >> 3;
    uVar2 = uVar9 + 1;
                    /* catch() { ... } // from try @ 00a00540 with catch @ 00a009a8
                       catch() { ... } // from try @ 00a00754 with catch @ 00a009a8 */
    if ((uVar2 < 4) ||
       ((puVar14 < __src + uVar9 + 1 &&
        (__src < (undefined8 *)((long)pvVar4 + (uVar9 + uVar11) * 8 + 8))))) {
LAB_00a00a20:
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
                    /* catch() { ... } // from try @ 00a004e8 with catch @ 00a009f0
                       catch() { ... } // from try @ 00a00690 with catch @ 00a009f0 */
      __src = __src + uVar10;
      puVar12 = (undefined8 *)((long)pvVar4 + uVar11 * 8 + 0x10);
      uVar13 = uVar10;
      do {
        puVar3 = puVar8 + -1;
                    /* catch() { ... } // from try @ 00a005dc with catch @ 00a00a00
                       catch() { ... } // from try @ 00a006f0 with catch @ 00a00a00 */
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
      if (uVar2 != uVar10) goto LAB_00a00a20;
    }
    __src = *(undefined8 **)this;
    puVar8 = (undefined8 *)((long)pvVar4 + (uVar9 + uVar11 + 1) * 8);
  }
                    /* catch() { ... } // from try @ 00a00490 with catch @ 00a00a38 */
  *(void **)this = pvVar4;
  *(undefined8 **)(this + 8) = puVar14;
                    /* catch() { ... } // from try @ 00a00484 with catch @ 00a00a3c */
  *(undefined8 **)(this + 0x10) = puVar8;
  *(void **)(this + 0x18) = (void *)((long)pvVar4 + uVar6 * 8);
                    /* catch() { ... } // from try @ 00a00464 with catch @ 00a00a40 */
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    puVar14 = *(undefined8 **)(this + 8);
  }
LAB_00a00a50:
                    /* catch() { ... } // from try @ 00a0049c with catch @ 00a00a50
                       catch() { ... } // from try @ 00a00578 with catch @ 00a00a50
                       catch() { ... } // from try @ 00a00670 with catch @ 00a00a50
                       catch() { ... } // from try @ 00a00898 with catch @ 00a00a50 */
  puVar14[-1] = *param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return;
}

