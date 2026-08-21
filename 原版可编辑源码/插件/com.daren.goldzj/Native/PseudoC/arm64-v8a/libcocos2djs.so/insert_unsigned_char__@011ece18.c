
/* std::__ndk1::enable_if<__is_forward_iterator<unsigned char*>::value&&is_constructible<unsigned
   char, std::__ndk1::iterator_traits<unsigned char*>::reference>::value,
   std::__ndk1::__wrap_iter<unsigned char*> >::type std::__ndk1::vector<unsigned char,
   std::__ndk1::allocator<unsigned char> >::insert<unsigned char*>(std::__ndk1::__wrap_iter<unsigned
   char const*>, unsigned char*, unsigned char*) */

undefined1 * __thiscall
std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert<unsigned_char*>
          (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this,undefined1 *param_2,
          undefined1 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  size_t __n;
  long lVar13;
  undefined1 *puVar14;
  void *pvVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar16 = (long)param_4 - (long)param_3;
  if ((long)uVar16 < 1) {
    return param_2;
  }
  puVar7 = *(undefined1 **)(this + 8);
  if ((long)uVar16 <= *(long *)(this + 0x10) - (long)puVar7) {
    lVar13 = (long)puVar7 - (long)param_2;
    puVar11 = puVar7;
    if (lVar13 < (long)uVar16) {
      puVar14 = param_3 + lVar13;
      sVar3 = (long)param_4 - (long)puVar14;
      if (0 < (long)sVar3) {
        memcpy(puVar7,puVar14,sVar3);
        lVar5 = *(long *)(this + 8);
        *(undefined1 **)(this + 8) = (undefined1 *)(lVar5 + sVar3);
        puVar11 = (undefined1 *)(lVar5 + sVar3);
      }
      param_4 = puVar14;
      if (lVar13 < 1) {
        return param_2;
      }
    }
    puVar14 = param_2 + uVar16;
    sVar3 = (long)puVar11 - (long)puVar14;
    if (puVar11 + -uVar16 < puVar7) {
      puVar7 = puVar7 + (long)(puVar14 + (-(long)param_2 - (long)puVar11));
      puVar9 = puVar11 + (long)param_2 + -(long)puVar14;
      puVar14 = puVar11;
      do {
        puVar7 = puVar7 + -1;
        *puVar14 = *puVar9;
        puVar14 = (undefined1 *)(*(long *)(this + 8) + 1);
        *(undefined1 **)(this + 8) = puVar14;
        puVar9 = puVar9 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
    if (sVar3 != 0) {
      memmove(puVar11 + -sVar3,param_2,sVar3);
    }
    if ((long)param_4 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)param_4 - (long)param_3);
    return param_2;
  }
  pvVar15 = *(void **)this;
  puVar7 = puVar7 + (uVar16 - (long)pvVar15);
  if ((long)puVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = *(long *)(this + 0x10) - (long)pvVar15;
  puVar11 = (undefined1 *)(uVar4 * 2);
  if (puVar7 <= puVar11) {
    puVar7 = puVar11;
  }
  if (0x3ffffffffffffffe < uVar4) {
    puVar7 = (undefined1 *)0x7fffffffffffffff;
  }
  if (puVar7 == (undefined1 *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new((ulong)puVar7);
  }
  puVar11 = (undefined1 *)((long)pvVar2 + ((long)param_2 - (long)pvVar15));
  puVar14 = puVar11;
  if (param_3 == param_4) goto LAB_011ed014;
  puVar9 = puVar11;
  if ((uVar16 < 0x20) ||
     ((puVar11 < param_4 &&
      (param_3 < (undefined1 *)
                 ((long)pvVar2 +
                 (long)(param_4 + (long)(param_2 + (-(long)pvVar15 - (long)param_3)))))))) {
LAB_011ed000:
    do {
      puVar12 = param_3 + 1;
      puVar14 = puVar9 + 1;
      *puVar9 = *param_3;
      param_3 = puVar12;
      puVar9 = puVar14;
    } while (param_4 != puVar12);
  }
  else {
    uVar6 = uVar16 & 0xffffffffffffffe0;
    puVar8 = (undefined8 *)(param_3 + 0x10);
    puVar14 = puVar11 + uVar6;
    param_3 = param_3 + uVar6;
    puVar10 = (undefined8 *)((long)pvVar2 + ((long)param_2 - (long)pvVar15) + 0x10);
    uVar4 = uVar6;
    do {
      puVar1 = puVar8 + -1;
      uVar17 = puVar8[-2];
      uVar19 = puVar8[1];
      uVar18 = *puVar8;
      puVar8 = puVar8 + 4;
      uVar4 = uVar4 - 0x20;
      puVar10[-1] = *puVar1;
      puVar10[-2] = uVar17;
      puVar10[1] = uVar19;
      *puVar10 = uVar18;
      puVar10 = puVar10 + 4;
    } while (uVar4 != 0);
    puVar9 = puVar14;
    if (uVar16 != uVar6) goto LAB_011ed000;
  }
  pvVar15 = *(void **)this;
LAB_011ed014:
  sVar3 = (long)param_2 - (long)pvVar15;
  if (0 < (long)sVar3) {
    memcpy(puVar11 + -sVar3,pvVar15,sVar3);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar14,param_2,__n);
    puVar14 = puVar14 + __n;
  }
  pvVar15 = *(void **)this;
  *(undefined1 **)this = puVar11 + -sVar3;
  *(undefined1 **)(this + 8) = puVar14;
  *(undefined1 **)(this + 0x10) = (undefined1 *)((long)pvVar2 + (long)puVar7);
  if (pvVar15 != (void *)0x0) {
    operator_delete(pvVar15);
  }
  return puVar11;
}

