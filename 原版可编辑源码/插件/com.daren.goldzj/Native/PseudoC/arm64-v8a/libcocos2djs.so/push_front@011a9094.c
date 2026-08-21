
/* std::__ndk1::__split_buffer<v8::internal::HeapGraphEdge*,
   std::__ndk1::allocator<v8::internal::HeapGraphEdge*>&>::push_front(v8::internal::HeapGraphEdge*
   const&) */

void __thiscall
std::__ndk1::
__split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>&>::
push_front(__split_buffer<v8::internal::HeapGraphEdge*,std::__ndk1::allocator<v8::internal::HeapGraphEdge*>&>
           *this,HeapGraphEdge **param_1)

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
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *__src;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  __src = *(undefined8 **)(this + 8);
  if (__src != *(undefined8 **)this) goto LAB_011a9220;
  puVar12 = *(undefined8 **)(this + 0x10);
  puVar11 = *(undefined8 **)(this + 0x18);
  if (puVar12 < puVar11) {
    lVar5 = (long)puVar11 - (long)puVar12 >> 3;
    lVar1 = lVar5 + 2;
    if (-1 < lVar5 + 1) {
      lVar1 = lVar5 + 1;
    }
    __n = (long)puVar12 - (long)__src;
    puVar11 = puVar12 + (lVar1 >> 1);
    if (__n != 0) {
      puVar11 = (undefined8 *)((long)puVar11 - __n);
      memmove(puVar11,__src,__n);
      puVar12 = *(undefined8 **)(this + 0x10);
    }
    *(undefined8 **)(this + 8) = puVar11;
    *(undefined8 **)(this + 0x10) = puVar12 + (lVar1 >> 1);
    __src = puVar11;
    goto LAB_011a9220;
  }
  lVar1 = (long)puVar11 - (long)*(undefined8 **)this;
  uVar6 = lVar1 >> 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar13 = uVar6 + 3 >> 2;
  pvVar4 = operator_new(uVar6 * 8);
  puVar11 = (undefined8 *)((long)pvVar4 + uVar13 * 8);
  puVar8 = puVar11;
  puVar7 = __src;
  if (__src != puVar12) {
    uVar9 = (long)puVar12 + (-8 - (long)__src);
    uVar2 = (uVar9 >> 3) + 1;
    puVar7 = puVar11;
    if (uVar2 < 4) {
LAB_011a91f4:
      do {
        puVar10 = __src + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = *__src;
        puVar7 = puVar8;
        __src = puVar10;
      } while (puVar12 != puVar10);
    }
    else {
      uVar9 = uVar9 & 0xfffffffffffffff8;
      if (((void *)((long)pvVar4 + uVar13 * 8) < (void *)((long)__src + uVar9 + 8)) &&
         (__src < (undefined8 *)((long)pvVar4 + uVar9 + uVar13 * 8 + 8))) goto LAB_011a91f4;
      uVar9 = uVar2 & 0x3ffffffffffffffc;
      puVar7 = __src + 2;
      puVar8 = puVar11 + uVar9;
      __src = __src + uVar9;
      puVar10 = (undefined8 *)((long)pvVar4 + uVar13 * 8 + 0x10);
      uVar13 = uVar9;
      do {
        puVar3 = puVar7 + -1;
        uVar14 = puVar7[-2];
        uVar16 = puVar7[1];
        uVar15 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar13 = uVar13 - 4;
        puVar10[-1] = *puVar3;
        puVar10[-2] = uVar14;
        puVar10[1] = uVar16;
        *puVar10 = uVar15;
        puVar10 = puVar10 + 4;
      } while (uVar13 != 0);
      puVar7 = puVar8;
      if (uVar2 != uVar9) goto LAB_011a91f4;
    }
    puVar7 = *(undefined8 **)this;
  }
  *(void **)this = pvVar4;
  *(undefined8 **)(this + 8) = puVar11;
  *(undefined8 **)(this + 0x10) = puVar8;
  *(void **)(this + 0x18) = (void *)((long)pvVar4 + uVar6 * 8);
  __src = puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    operator_delete(puVar7);
    __src = *(undefined8 **)(this + 8);
  }
LAB_011a9220:
  __src[-1] = *param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return;
}

