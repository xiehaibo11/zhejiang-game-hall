
/* std::__ndk1::__split_buffer<std::__ndk1::pair<void (*)(v8::Isolate*, void*), void*>*,
   std::__ndk1::allocator<std::__ndk1::pair<void (*)(v8::Isolate*, void*), void*>*>
   >::push_back(std::__ndk1::pair<void (*)(v8::Isolate*, void*), void*>*&&) */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>>
::push_back(__split_buffer<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>*>>
            *this,pair **param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t __n;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar4 = *(undefined8 **)(this + 0x10);
  puVar12 = puVar4;
  if (puVar4 != *(undefined8 **)(this + 0x18)) goto LAB_00f58e1c;
  puVar11 = *(undefined8 **)this;
  __src = *(undefined8 **)(this + 8);
  if (puVar11 <= __src && (long)__src - (long)puVar11 != 0) {
    lVar7 = (long)__src - (long)puVar11 >> 3;
    lVar1 = lVar7 + 2;
    if (-1 < lVar7 + 1) {
      lVar1 = lVar7 + 1;
    }
    __n = (long)puVar4 - (long)__src;
    puVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(puVar12,__src,__n);
      __src = *(undefined8 **)(this + 8);
    }
    puVar12 = puVar12 + ((long)__n >> 3);
    *(undefined8 **)(this + 8) = __src + -(lVar1 >> 1);
    *(undefined8 **)(this + 0x10) = puVar12;
    goto LAB_00f58e1c;
  }
  lVar1 = (long)*(undefined8 **)(this + 0x18) - (long)puVar11;
  uVar8 = lVar1 >> 2;
  if (lVar1 == 0) {
    uVar8 = 1;
  }
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar13 = uVar8 >> 2;
  pvVar6 = operator_new(uVar8 * 8);
  puVar3 = (undefined8 *)((long)pvVar6 + uVar13 * 8);
  puVar12 = puVar3;
  if (__src != puVar4) {
    uVar9 = (long)puVar4 + (-8 - (long)__src);
    uVar2 = (uVar9 >> 3) + 1;
    puVar11 = puVar3;
    if (uVar2 < 4) {
LAB_00f58de8:
      do {
        puVar10 = __src + 1;
        puVar12 = puVar11 + 1;
        *puVar11 = *__src;
        puVar11 = puVar12;
        __src = puVar10;
      } while (puVar4 != puVar10);
    }
    else {
      uVar9 = uVar9 & 0xfffffffffffffff8;
      if (((void *)((long)pvVar6 + uVar13 * 8) < (void *)((long)__src + uVar9 + 8)) &&
         (__src < (undefined8 *)((long)pvVar6 + uVar13 * 8 + uVar9 + 8))) goto LAB_00f58de8;
      uVar9 = uVar2 & 0x3ffffffffffffffc;
      puVar11 = __src + 2;
      puVar12 = puVar3 + uVar9;
      __src = __src + uVar9;
      puVar10 = (undefined8 *)((long)pvVar6 + uVar13 * 8 + 0x10);
      uVar13 = uVar9;
      do {
        puVar5 = puVar11 + -1;
        uVar14 = puVar11[-2];
        uVar16 = puVar11[1];
        uVar15 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar13 = uVar13 - 4;
        puVar10[-1] = *puVar5;
        puVar10[-2] = uVar14;
        puVar10[1] = uVar16;
        *puVar10 = uVar15;
        puVar10 = puVar10 + 4;
      } while (uVar13 != 0);
      puVar11 = puVar12;
      if (uVar2 != uVar9) goto LAB_00f58de8;
    }
    puVar11 = *(undefined8 **)this;
  }
  *(void **)this = pvVar6;
  *(undefined8 **)(this + 8) = puVar3;
  *(undefined8 **)(this + 0x10) = puVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar6 + uVar8 * 8);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
    puVar12 = *(undefined8 **)(this + 0x10);
  }
LAB_00f58e1c:
  *puVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}

