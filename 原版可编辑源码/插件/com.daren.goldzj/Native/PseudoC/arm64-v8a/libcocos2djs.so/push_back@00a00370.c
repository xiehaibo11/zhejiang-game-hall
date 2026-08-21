
/* std::__ndk1::__split_buffer<std::__ndk1::function<void ()>*,
   std::__ndk1::allocator<std::__ndk1::function<void ()>*> >::push_back(std::__ndk1::function<void
   ()>*&&) */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
::push_back(__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
            *this,function **param_1)

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
  if (puVar14 != *(undefined8 **)(this + 0x18)) goto LAB_00a004f8;
  puVar13 = *(undefined8 **)this;
  __src = *(undefined8 **)(this + 8);
  if (puVar13 <= __src && (long)__src - (long)puVar13 != 0) {
    lVar6 = (long)__src - (long)puVar13 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)puVar14 - (long)__src;
    puVar14 = __src + -(lVar1 >> 1);
    puVar13 = puVar14;
    if (__n != 0) {
      memmove(puVar14,__src,__n);
      puVar13 = (undefined8 *)(*(long *)(this + 8) + (lVar1 >> 1) * -8);
    }
    puVar14 = puVar14 + ((long)__n >> 3);
    *(undefined8 **)(this + 8) = puVar13;
    *(undefined8 **)(this + 0x10) = puVar14;
    goto LAB_00a004f8;
  }
  lVar1 = (long)*(undefined8 **)(this + 0x18) - (long)puVar13;
  uVar7 = lVar1 >> 2;
  if (lVar1 == 0) {
    uVar7 = 1;
  }
  if (uVar7 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar7 << 3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a002a0 with catch @ 00a00408
                        */
  }
  uVar8 = uVar7 >> 2;
  puVar3 = (undefined8 *)((long)pvVar5 + uVar8 * 8);
  puVar9 = puVar3;
  if (__src != puVar14) {
    uVar10 = (ulong)((long)puVar14 + (-8 - (long)__src)) >> 3;
    uVar2 = uVar10 + 1;
    puVar13 = puVar3;
                    /* try { // try from 00a00464 to 00b0047b has its CatchHandler @ 00a00a40 */
                    /* try { // try from 00a00484 to 00b0048f has its CatchHandler @ 00a00a3c */
    if ((uVar2 < 4) ||
       ((puVar3 < __src + uVar10 + 1 &&
        (__src < (undefined8 *)((long)pvVar5 + (uVar8 + uVar10) * 8 + 8))))) {
LAB_00a004c8:
      do {
        puVar9 = __src + 1;
        *puVar13 = *__src;
        puVar13 = puVar13 + 1;
        __src = puVar9;
      } while (puVar14 != puVar9);
    }
    else {
      uVar11 = uVar2 & 0x3ffffffffffffffc;
                    /* try { // try from 00a00490 to 00b0049b has its CatchHandler @ 00a00a38 */
      puVar13 = __src + 2;
                    /* try { // try from 00a0049c to 00b004b3 has its CatchHandler @ 00a00a50 */
      __src = __src + uVar11;
      puVar9 = (undefined8 *)((long)pvVar5 + uVar8 * 8 + 0x10);
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
      if (uVar2 != uVar11) goto LAB_00a004c8;
    }
    puVar13 = *(undefined8 **)this;
    puVar9 = (undefined8 *)((long)pvVar5 + (uVar8 + uVar10 + 1) * 8);
  }
  puVar14 = puVar9;
  *(void **)this = pvVar5;
  *(undefined8 **)(this + 8) = puVar3;
  *(undefined8 **)(this + 0x10) = puVar14;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
                    /* try { // try from 00a004e8 to 00b00503 has its CatchHandler @ 00a009f0 */
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
    puVar14 = *(undefined8 **)(this + 0x10);
  }
LAB_00a004f8:
  *puVar14 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
                    /* try { // try from 00a00514 to 00b0052b has its CatchHandler @ 00a00950 */
  return;
}

