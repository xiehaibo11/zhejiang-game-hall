
/* std::__ndk1::vector<unsigned long, std::__ndk1::allocator<unsigned long>
   >::insert(std::__ndk1::__wrap_iter<unsigned long const*>, unsigned long const&) */

undefined8 * __thiscall
std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::insert
          (vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  size_t __n;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  pvVar4 = *(void **)this;
  puVar13 = *(undefined8 **)(this + 8);
  lVar15 = (long)param_2 - (long)pvVar4;
  uVar12 = lVar15 >> 3;
  if (puVar13 < *(undefined8 **)(this + 0x10)) {
    if (param_2 == puVar13) {
      *param_2 = *param_3;
      *(undefined8 **)(this + 8) = param_2 + 1;
      return param_2;
    }
    puVar7 = puVar13 + -1;
    sVar5 = (long)puVar13 + (-8 - (long)param_2);
    lVar15 = (long)sVar5 >> 3;
    puVar10 = puVar13;
    if (puVar7 < puVar13) {
      uVar8 = (long)puVar13 + ~(ulong)pvVar4 + (lVar15 + uVar12) * -8 >> 3;
      uVar14 = uVar8 + 1;
      puVar9 = puVar13;
      if ((3 < uVar14) &&
         (((undefined8 *)((long)pvVar4 + (lVar15 + uVar12 + uVar8) * 8 + 8) <= puVar13 ||
          (puVar13 + uVar8 + 1 <= puVar7)))) {
        uVar8 = uVar14 & 0x3ffffffffffffffc;
        puVar9 = puVar13 + 2;
        puVar7 = puVar7 + uVar8;
        puVar10 = puVar13 + uVar8;
        puVar11 = (undefined8 *)((long)pvVar4 + (lVar15 + uVar12) * 8 + 0x10);
        uVar12 = uVar8;
        do {
          puVar1 = puVar11 + -1;
          uVar16 = puVar11[-2];
          uVar18 = puVar11[1];
          uVar17 = *puVar11;
          uVar12 = uVar12 - 4;
          puVar11 = puVar11 + 4;
          puVar9[-1] = *puVar1;
          puVar9[-2] = uVar16;
          puVar9[1] = uVar18;
          *puVar9 = uVar17;
          puVar9 = puVar9 + 4;
        } while (uVar12 != 0);
        puVar9 = puVar10;
        if (uVar14 == uVar8) goto LAB_00e607a4;
      }
      do {
        puVar11 = puVar7 + 1;
        puVar10 = puVar9 + 1;
        *puVar9 = *puVar7;
        puVar7 = puVar11;
        puVar9 = puVar10;
      } while (puVar11 < puVar13);
    }
LAB_00e607a4:
    *(undefined8 **)(this + 8) = puVar10;
    if (sVar5 != 0) {
      memmove(puVar13 + -lVar15,param_2,sVar5);
    }
    puVar13 = param_3;
    if ((param_2 <= param_3) && (puVar13 = param_3 + 1, *(undefined8 **)(this + 8) <= param_3)) {
      puVar13 = param_3;
    }
    *param_2 = *puVar13;
    return param_2;
  }
  uVar14 = ((long)puVar13 - (long)pvVar4 >> 3) + 1;
  if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(undefined8 **)(this + 0x10) - (long)pvVar4;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar8 = lVar6 >> 2;
    if (uVar14 <= uVar8) {
      uVar14 = uVar8;
    }
    if (uVar14 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00e60630;
    }
    if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar14 = 0x1fffffffffffffff;
  }
  pvVar2 = operator_new(uVar14 << 3);
LAB_00e60630:
  puVar13 = (undefined8 *)((long)pvVar2 + uVar12 * 8);
  pvVar3 = (void *)((long)pvVar2 + uVar14 * 8);
  if (uVar12 == uVar14) {
    if (lVar15 < 1) {
      uVar12 = lVar15 >> 2;
      if (lVar15 == 0) {
        uVar12 = 1;
      }
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar12 << 3);
      puVar13 = (undefined8 *)((long)pvVar3 + (uVar12 & 0x7ffffffffffffffc) * 2);
      pvVar3 = (void *)((long)pvVar3 + uVar12 * 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        pvVar4 = *(void **)this;
      }
    }
    else {
      uVar14 = uVar12 + 2;
      if (-1 < (long)(uVar12 + 1)) {
        uVar14 = uVar12 + 1;
      }
      puVar13 = (undefined8 *)((long)puVar13 + (uVar14 & 0x3ffffffffffffffe) * -4);
    }
  }
  sVar5 = (long)param_2 - (long)pvVar4;
  puVar7 = puVar13 + 1;
  *puVar13 = *param_3;
  if (0 < (long)sVar5) {
    memcpy((void *)((long)puVar13 - sVar5),pvVar4,sVar5);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar7,param_2,__n);
    puVar7 = (undefined8 *)((long)puVar7 + __n);
  }
  pvVar4 = *(void **)this;
  *(void **)this = (void *)((long)puVar13 - sVar5);
  *(undefined8 **)(this + 8) = puVar7;
  *(void **)(this + 0x10) = pvVar3;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  return puVar13;
}

