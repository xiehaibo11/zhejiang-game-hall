
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
  undefined1 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  size_t sVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
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
    puVar7 = local_68;
    puVar6 = param_4;
    if (lVar18 < (long)uVar17) {
      puVar6 = param_3 + lVar18;
      sVar4 = (long)param_4 - (long)puVar6;
      if (0 < (long)sVar4) {
        memcpy(local_68,puVar6,sVar4);
        puVar7 = local_68 + sVar4;
      }
      *(undefined1 **)(this + 8) = puVar7;
      if (lVar18 < 1) {
        return param_2;
      }
    }
    puVar12 = param_2 + uVar17;
    puVar11 = puVar7 + -uVar17;
    sVar4 = (long)puVar7 - (long)puVar12;
    puVar9 = puVar7;
    if (puVar11 < local_68) {
      puVar1 = local_68 + (long)(puVar12 + (-(long)param_2 - (long)puVar7));
      puVar8 = puVar7;
      if (((undefined1 *)0x1f < puVar1) &&
         ((local_68 <= puVar7 || (puVar7 + (long)puVar1 <= puVar7 + (long)param_2 + -(long)puVar12))
         )) {
        puVar15 = (undefined1 *)((ulong)puVar1 & 0xffffffffffffffe0);
        puVar13 = (undefined8 *)(puVar7 + 0x10);
        puVar11 = puVar11 + (long)puVar15;
        puVar9 = puVar7 + (long)puVar15;
        puVar14 = (undefined8 *)(puVar7 + (long)param_2 + -(long)puVar12 + 0x10);
        puVar12 = puVar15;
        do {
          puVar2 = puVar14 + -1;
          uVar19 = puVar14[-2];
          uVar21 = puVar14[1];
          uVar20 = *puVar14;
          puVar12 = puVar12 + -0x20;
          puVar14 = puVar14 + 4;
          puVar13[-1] = *puVar2;
          puVar13[-2] = uVar19;
          puVar13[1] = uVar21;
          *puVar13 = uVar20;
          puVar13 = puVar13 + 4;
        } while (puVar12 != (undefined1 *)0x0);
        puVar8 = puVar9;
        if (puVar15 == puVar1) goto LAB_00ea0680;
      }
      do {
        puVar12 = puVar11 + 1;
        puVar9 = puVar8 + 1;
        *puVar8 = *puVar11;
        puVar8 = puVar9;
        puVar11 = puVar12;
      } while (local_68 != puVar12);
    }
LAB_00ea0680:
    *(undefined1 **)(this + 8) = puVar9;
    if (sVar4 != 0) {
      memmove(puVar7 + -sVar4,param_2,sVar4);
    }
    if ((long)puVar6 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)puVar6 - (long)param_3);
    return param_2;
  }
  lVar18 = *(long *)this;
  local_68 = local_68 + (uVar17 - lVar18);
  if ((long)local_68 < 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  uVar5 = *(long *)(this + 0x10) - lVar18;
  if (uVar5 < 0x3fffffffffffffff) {
    puVar6 = (undefined1 *)(uVar5 * 2);
    if (local_68 <= puVar6) {
      local_68 = puVar6;
    }
    if (local_68 != (undefined1 *)0x0) goto LAB_00ea04d4;
    pvVar16 = (void *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    local_68 = (undefined1 *)0x7fffffffffffffff;
LAB_00ea04d4:
    pvVar16 = operator_new((ulong)local_68);
  }
  puVar6 = (undefined1 *)((long)pvVar16 + ((long)param_2 - lVar18));
  puVar7 = puVar6 + uVar17;
  puVar12 = puVar6;
  puVar11 = param_3;
  if ((0x1f < uVar17) && ((param_4 <= puVar6 || (puVar7 <= param_3)))) {
    uVar10 = uVar17 & 0xffffffffffffffe0;
    puVar13 = (undefined8 *)(param_3 + 0x10);
    puVar12 = puVar6 + uVar10;
    puVar11 = param_3 + uVar10;
    puVar14 = (undefined8 *)((long)pvVar16 + ((long)param_2 - lVar18) + 0x10);
    uVar5 = uVar10;
    do {
      puVar2 = puVar13 + -1;
      uVar19 = puVar13[-2];
      uVar21 = puVar13[1];
      uVar20 = *puVar13;
      puVar13 = puVar13 + 4;
      uVar5 = uVar5 - 0x20;
      puVar14[-1] = *puVar2;
      puVar14[-2] = uVar19;
      puVar14[1] = uVar21;
      *puVar14 = uVar20;
      puVar14 = puVar14 + 4;
    } while (uVar5 != 0);
    if (uVar17 == uVar10) goto LAB_00ea0570;
  }
  puVar9 = (undefined1 *)
           ((long)pvVar16 +
           (long)(param_4 + (long)param_2 + ((-(long)param_3 - (long)puVar12) - lVar18)));
  do {
    puVar9 = puVar9 + -1;
    *puVar12 = *puVar11;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  } while (puVar9 != (undefined1 *)0x0);
LAB_00ea0570:
  sVar4 = (long)param_2 - (long)*(void **)this;
  if (0 < (long)sVar4) {
    memcpy(puVar6 + -sVar4,*(void **)this,sVar4);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar7,param_2,__n);
    puVar7 = puVar7 + __n;
  }
  pvVar3 = *(void **)this;
  *(undefined1 **)this = puVar6 + -sVar4;
  *(undefined1 **)(this + 8) = puVar7;
  *(undefined1 **)(this + 0x10) = (undefined1 *)((long)pvVar16 + (long)local_68);
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  return puVar6;
}

