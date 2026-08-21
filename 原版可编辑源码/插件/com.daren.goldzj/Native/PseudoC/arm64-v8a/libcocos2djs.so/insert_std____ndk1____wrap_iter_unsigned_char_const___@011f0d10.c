
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__wrap_iter<unsigned char const*>
   >::value&&is_constructible<unsigned char,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<unsigned char const*> >::reference>::value,
   std::__ndk1::__wrap_iter<unsigned char*> >::type std::__ndk1::vector<unsigned char,
   std::__ndk1::allocator<unsigned char> >::insert<std::__ndk1::__wrap_iter<unsigned char const*>
   >(std::__ndk1::__wrap_iter<unsigned char const*>, std::__ndk1::__wrap_iter<unsigned char const*>,
   std::__ndk1::__wrap_iter<unsigned char const*>) */

undefined1 * __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
insert<std::__ndk1::__wrap_iter<unsigned_char_const*>>
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,undefined1 *param_2,
          undefined1 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  size_t __n;
  undefined1 *puVar13;
  void *pvVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar15 = (long)param_4 - (long)param_3;
  if ((long)uVar15 < 1) {
    return param_2;
  }
  puVar5 = *(undefined1 **)(this + 8);
  if ((long)uVar15 <= *(long *)(this + 0x10) - (long)puVar5) {
    lVar8 = (long)puVar5 - (long)param_2;
    puVar11 = puVar5;
    if (lVar8 < (long)uVar15) {
      for (puVar13 = param_3 + lVar8; puVar13 != param_4; puVar13 = puVar13 + 1) {
        *puVar11 = *puVar13;
        puVar11 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar11;
      }
      param_4 = param_3 + lVar8;
      if (lVar8 < 1) {
        return param_2;
      }
    }
    puVar13 = param_2 + uVar15;
    sVar3 = (long)puVar11 - (long)puVar13;
    if (puVar11 + -uVar15 < puVar5) {
      puVar5 = puVar5 + (long)(puVar13 + (-(long)param_2 - (long)puVar11));
      puVar9 = puVar11 + (long)param_2 + -(long)puVar13;
      puVar13 = puVar11;
      do {
        puVar5 = puVar5 + -1;
        *puVar13 = *puVar9;
        puVar13 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar13;
        puVar9 = puVar9 + 1;
      } while (puVar5 != (undefined1 *)0x0);
    }
    if (sVar3 != 0) {
      memmove(puVar11 + -sVar3,param_2,sVar3);
    }
    uVar15 = (long)param_4 - (long)param_3;
    if (uVar15 == 0) {
      return param_2;
    }
    puVar5 = param_2;
    if ((0x1f < uVar15) &&
       ((param_4 <= param_2 || (param_4 + ((long)param_2 - (long)param_3) <= param_3)))) {
      uVar7 = uVar15 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(param_3 + 0x10);
      puVar12 = (undefined8 *)(param_2 + 0x10);
      uVar4 = uVar7;
      do {
        puVar1 = puVar10 + -1;
        uVar16 = puVar10[-2];
        uVar18 = puVar10[1];
        uVar17 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar4 = uVar4 - 0x20;
        puVar12[-1] = *puVar1;
        puVar12[-2] = uVar16;
        puVar12[1] = uVar18;
        *puVar12 = uVar17;
        puVar12 = puVar12 + 4;
      } while (uVar4 != 0);
      puVar5 = param_2 + uVar7;
      param_3 = param_3 + uVar7;
      if (uVar7 == uVar15) {
        return param_2;
      }
    }
    do {
      puVar11 = param_3 + 1;
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
      param_3 = puVar11;
    } while (param_4 != puVar11);
    return param_2;
  }
  pvVar14 = *(void **)this;
  puVar5 = puVar5 + (uVar15 - (long)pvVar14);
  if ((long)puVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = *(long *)(this + 0x10) - (long)pvVar14;
  puVar11 = (undefined1 *)(uVar4 * 2);
  if (puVar5 <= puVar11) {
    puVar5 = puVar11;
  }
  if (0x3ffffffffffffffe < uVar4) {
    puVar5 = (undefined1 *)0x7fffffffffffffff;
  }
  if (puVar5 == (undefined1 *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new((ulong)puVar5);
  }
  puVar11 = (undefined1 *)((long)pvVar2 + ((long)param_2 - (long)pvVar14));
  puVar13 = puVar11;
  if (param_3 == param_4) goto LAB_011f0f74;
  puVar9 = puVar11;
  if ((uVar15 < 0x20) ||
     ((puVar11 < param_4 &&
      (param_3 < (undefined1 *)
                 ((long)pvVar2 +
                 (long)(param_4 + (long)(param_2 + (-(long)pvVar14 - (long)param_3)))))))) {
LAB_011f0f58:
    do {
      puVar6 = param_3 + 1;
      puVar13 = puVar9 + 1;
      *puVar9 = *param_3;
      param_3 = puVar6;
      puVar9 = puVar13;
    } while (param_4 != puVar6);
  }
  else {
    uVar7 = uVar15 & 0xffffffffffffffe0;
    puVar10 = (undefined8 *)(param_3 + 0x10);
    puVar13 = puVar11 + uVar7;
    puVar12 = (undefined8 *)((long)pvVar2 + ((long)param_2 - (long)pvVar14) + 0x10);
    uVar4 = uVar7;
    do {
      puVar1 = puVar10 + -1;
      uVar16 = puVar10[-2];
      uVar18 = puVar10[1];
      uVar17 = *puVar10;
      puVar10 = puVar10 + 4;
      uVar4 = uVar4 - 0x20;
      puVar12[-1] = *puVar1;
      puVar12[-2] = uVar16;
      puVar12[1] = uVar18;
      *puVar12 = uVar17;
      puVar12 = puVar12 + 4;
    } while (uVar4 != 0);
    param_3 = param_3 + uVar7;
    puVar9 = puVar13;
    if (uVar7 != uVar15) goto LAB_011f0f58;
  }
  pvVar14 = *(void **)this;
LAB_011f0f74:
  sVar3 = (long)param_2 - (long)pvVar14;
  if (0 < (long)sVar3) {
    memcpy(puVar11 + -sVar3,pvVar14,sVar3);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar13,param_2,__n);
    puVar13 = puVar13 + __n;
  }
  pvVar14 = *(void **)this;
  *(undefined1 **)this = puVar11 + -sVar3;
  *(undefined1 **)(this + 8) = puVar13;
  *(undefined1 **)(this + 0x10) = (undefined1 *)((long)pvVar2 + (long)puVar5);
  if (pvVar14 != (void *)0x0) {
    operator_delete(pvVar14);
  }
  return puVar11;
}

