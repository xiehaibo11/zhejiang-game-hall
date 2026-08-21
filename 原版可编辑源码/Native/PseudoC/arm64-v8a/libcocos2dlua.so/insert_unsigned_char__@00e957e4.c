
/* std::__ndk1::enable_if<__is_forward_iterator<unsigned char*>::value&&is_constructible<char,
   std::__ndk1::iterator_traits<unsigned char*>::reference>::value, std::__ndk1::__wrap_iter<char*>
   >::type std::__ndk1::vector<char, std::__ndk1::allocator<char> >::insert<unsigned
   char*>(std::__ndk1::__wrap_iter<char const*>, unsigned char*, unsigned char*) */

undefined1 * __thiscall
std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<unsigned_char*>
          (vector<char,std::__ndk1::allocator<char>> *this,undefined1 *param_2,undefined1 *param_3,
          undefined1 *param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t sVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  size_t __n;
  void *pvVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *local_68;
  
  uVar17 = (long)param_4 - (long)param_3;
  if ((long)uVar17 < 1) {
    return param_2;
  }
  local_68 = *(undefined1 **)(this + 8);
  if ((long)uVar17 <= *(long *)(this + 0x10) - (long)local_68) {
    lVar18 = (long)local_68 - (long)param_2;
    puVar4 = local_68;
    puVar6 = param_4;
    if (lVar18 < (long)uVar17) {
      puVar6 = param_3 + lVar18;
      if (puVar6 != param_4) {
        puVar10 = param_4 + (long)(param_2 + (-(long)local_68 - (long)param_3));
        puVar11 = local_68;
        puVar8 = puVar6;
        if (((undefined1 *)0x1f < puVar10) &&
           ((param_4 <= local_68 || (local_68 + (long)puVar10 <= puVar6)))) {
          puVar12 = (undefined8 *)(local_68 + 0x10);
          puVar14 = (undefined1 *)((ulong)puVar10 & 0xffffffffffffffe0);
          puVar13 = (undefined8 *)(param_3 + ((long)puVar12 - (long)param_2));
          puVar4 = puVar14;
          do {
            puVar1 = puVar13 + -1;
            uVar19 = puVar13[-2];
            uVar21 = puVar13[1];
            uVar20 = *puVar13;
            puVar13 = puVar13 + 4;
            puVar4 = puVar4 + -0x20;
            puVar12[-1] = *puVar1;
            puVar12[-2] = uVar19;
            puVar12[1] = uVar21;
            *puVar12 = uVar20;
            puVar12 = puVar12 + 4;
          } while (puVar4 != (undefined1 *)0x0);
          puVar4 = local_68 + (long)puVar14;
          puVar11 = local_68 + (long)puVar14;
          puVar8 = puVar6 + (long)puVar14;
          if (puVar14 == puVar10) goto LAB_00e95a28;
        }
        do {
          puVar10 = puVar8 + 1;
          *puVar11 = *puVar8;
          puVar4 = puVar11 + 1;
          puVar11 = puVar11 + 1;
          puVar8 = puVar10;
        } while (param_4 != puVar10);
      }
LAB_00e95a28:
      *(undefined1 **)(this + 8) = puVar4;
      if (lVar18 < 1) {
        return param_2;
      }
    }
    puVar10 = param_2 + uVar17;
    puVar11 = puVar4 + -uVar17;
    sVar3 = (long)puVar4 - (long)puVar10;
    puVar8 = puVar4;
    if (puVar11 < local_68) {
      puVar14 = local_68 + (long)(puVar10 + (-(long)param_2 - (long)puVar4));
      puVar7 = puVar4;
      if (((undefined1 *)0x1f < puVar14) &&
         ((local_68 <= puVar4 || (puVar4 + (long)puVar14 <= puVar4 + (long)param_2 + -(long)puVar10)
          ))) {
        puVar15 = (undefined1 *)((ulong)puVar14 & 0xffffffffffffffe0);
        puVar12 = (undefined8 *)(puVar4 + 0x10);
        puVar11 = puVar11 + (long)puVar15;
        puVar8 = puVar4 + (long)puVar15;
        puVar13 = (undefined8 *)(puVar4 + (long)param_2 + -(long)puVar10 + 0x10);
        puVar10 = puVar15;
        do {
          puVar1 = puVar13 + -1;
          uVar19 = puVar13[-2];
          uVar21 = puVar13[1];
          uVar20 = *puVar13;
          puVar10 = puVar10 + -0x20;
          puVar13 = puVar13 + 4;
          puVar12[-1] = *puVar1;
          puVar12[-2] = uVar19;
          puVar12[1] = uVar21;
          *puVar12 = uVar20;
          puVar12 = puVar12 + 4;
        } while (puVar10 != (undefined1 *)0x0);
        puVar7 = puVar8;
        if (puVar15 == puVar14) goto LAB_00e95ad0;
      }
      do {
        puVar10 = puVar11 + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar11;
        puVar7 = puVar8;
        puVar11 = puVar10;
      } while (local_68 != puVar10);
    }
LAB_00e95ad0:
    *(undefined1 **)(this + 8) = puVar8;
    if (sVar3 != 0) {
      memmove(puVar4 + -sVar3,param_2,sVar3);
    }
    uVar17 = (long)puVar6 - (long)param_3;
    if (uVar17 == 0) {
      return param_2;
    }
    puVar4 = param_2;
    if ((0x1f < uVar17) &&
       ((puVar6 <= param_2 || (puVar6 + ((long)param_2 - (long)param_3) <= param_3)))) {
      uVar9 = uVar17 & 0xffffffffffffffe0;
      puVar12 = (undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + uVar9;
      puVar13 = (undefined8 *)(param_2 + 0x10);
      uVar5 = uVar9;
      do {
        puVar1 = puVar12 + -1;
        uVar19 = puVar12[-2];
        uVar21 = puVar12[1];
        uVar20 = *puVar12;
        puVar12 = puVar12 + 4;
        uVar5 = uVar5 - 0x20;
        puVar13[-1] = *puVar1;
        puVar13[-2] = uVar19;
        puVar13[1] = uVar21;
        *puVar13 = uVar20;
        puVar13 = puVar13 + 4;
      } while (uVar5 != 0);
      puVar4 = param_2 + uVar9;
      if (uVar9 == uVar17) {
        return param_2;
      }
    }
    do {
      puVar10 = param_3 + 1;
      *puVar4 = *param_3;
      puVar4 = puVar4 + 1;
      param_3 = puVar10;
    } while (puVar6 != puVar10);
    return param_2;
  }
  lVar18 = *(long *)this;
  local_68 = local_68 + (uVar17 - lVar18);
  if ((long)local_68 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = *(long *)(this + 0x10) - lVar18;
  if (uVar5 < 0x3fffffffffffffff) {
    puVar6 = (undefined1 *)(uVar5 * 2);
    if (local_68 <= puVar6) {
      local_68 = puVar6;
    }
    if (local_68 != (undefined1 *)0x0) goto LAB_00e958bc;
    pvVar16 = (void *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    local_68 = (undefined1 *)0x7fffffffffffffff;
LAB_00e958bc:
    pvVar16 = operator_new((ulong)local_68);
  }
  puVar6 = (undefined1 *)((long)pvVar16 + ((long)param_2 - lVar18));
  puVar4 = puVar6 + uVar17;
  puVar10 = puVar6;
  puVar11 = param_3;
  if ((0x1f < uVar17) && ((param_4 <= puVar6 || (puVar4 <= param_3)))) {
    uVar9 = uVar17 & 0xffffffffffffffe0;
    puVar12 = (undefined8 *)(param_3 + 0x10);
    puVar10 = puVar6 + uVar9;
    puVar11 = param_3 + uVar9;
    puVar13 = (undefined8 *)((long)pvVar16 + ((long)param_2 - lVar18) + 0x10);
    uVar5 = uVar9;
    do {
      puVar1 = puVar12 + -1;
      uVar19 = puVar12[-2];
      uVar21 = puVar12[1];
      uVar20 = *puVar12;
      puVar12 = puVar12 + 4;
      uVar5 = uVar5 - 0x20;
      puVar13[-1] = *puVar1;
      puVar13[-2] = uVar19;
      puVar13[1] = uVar21;
      *puVar13 = uVar20;
      puVar13 = puVar13 + 4;
    } while (uVar5 != 0);
    if (uVar17 == uVar9) goto LAB_00e95958;
  }
  puVar8 = (undefined1 *)
           ((long)pvVar16 +
           (long)(param_4 + (long)param_2 + ((-(long)param_3 - (long)puVar10) - lVar18)));
  do {
    puVar8 = puVar8 + -1;
    *puVar10 = *puVar11;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  } while (puVar8 != (undefined1 *)0x0);
LAB_00e95958:
  sVar3 = (long)param_2 - (long)*(void **)this;
  if (0 < (long)sVar3) {
    memcpy(puVar6 + -sVar3,*(void **)this,sVar3);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar4,param_2,__n);
    puVar4 = puVar4 + __n;
  }
  pvVar2 = *(void **)this;
  *(undefined1 **)this = puVar6 + -sVar3;
  *(undefined1 **)(this + 8) = puVar4;
  *(undefined1 **)(this + 0x10) = (undefined1 *)((long)pvVar16 + (long)local_68);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return puVar6;
}

