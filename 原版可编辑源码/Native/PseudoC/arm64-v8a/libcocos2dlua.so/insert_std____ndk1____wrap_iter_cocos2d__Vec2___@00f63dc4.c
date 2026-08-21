
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__wrap_iter<cocos2d::Vec2*>
   >::value&&is_constructible<cocos2d::Vec2,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::Vec2*> >::reference>::value,
   std::__ndk1::__wrap_iter<cocos2d::Vec2*> >::type std::__ndk1::vector<cocos2d::Vec2,
   std::__ndk1::allocator<cocos2d::Vec2> >::insert<std::__ndk1::__wrap_iter<cocos2d::Vec2*>
   >(std::__ndk1::__wrap_iter<cocos2d::Vec2 const*>, std::__ndk1::__wrap_iter<cocos2d::Vec2*>,
   std::__ndk1::__wrap_iter<cocos2d::Vec2*>) */

undefined8 * __thiscall
std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
insert<std::__ndk1::__wrap_iter<cocos2d::Vec2*>>
          (vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *this,undefined8 *param_2,
          undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  size_t __n;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar11;
  
  if ((long)param_4 - (long)param_3 < 1) {
    return param_2;
  }
  puVar1 = *(undefined8 **)(this + 8);
  lVar14 = (long)param_4 - (long)param_3 >> 3;
  if (*(long *)(this + 0x10) - (long)puVar1 >> 3 < lVar14) {
    lVar12 = *(long *)this;
    uVar15 = lVar14 + ((long)puVar1 - lVar12 >> 3);
    if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - lVar12;
    if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
      uVar6 = lVar5 >> 2;
      if (uVar15 <= uVar6) {
        uVar15 = uVar6;
      }
      if (uVar15 == 0) {
        pvVar2 = (void *)0x0;
        goto LAB_00f63eb0;
      }
      if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
    }
    else {
      uVar15 = 0x1fffffffffffffff;
    }
    pvVar2 = operator_new(uVar15 << 3);
LAB_00f63eb0:
    lVar5 = lVar14 * 8;
    puVar1 = (undefined8 *)((long)pvVar2 + ((long)param_2 - lVar12 >> 3) * 8);
    puVar13 = puVar1 + lVar14;
    puVar9 = puVar1;
    do {
      lVar5 = lVar5 + -8;
      *puVar9 = *param_3;
      puVar9 = puVar9 + 1;
      param_3 = param_3 + 1;
    } while (lVar5 != 0);
    sVar4 = (long)param_2 - (long)*(void **)this;
    if (0 < (long)sVar4) {
      memcpy((void *)((long)puVar1 - sVar4),*(void **)this,sVar4);
    }
    __n = *(long *)(this + 8) - (long)param_2;
    if (0 < (long)__n) {
      memcpy(puVar13,param_2,__n);
      puVar13 = (undefined8 *)((long)puVar13 + __n);
    }
    pvVar3 = *(void **)this;
    *(void **)this = (void *)((long)puVar1 - sVar4);
    *(undefined8 **)(this + 8) = puVar13;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar15 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar1;
  }
  uVar15 = (long)puVar1 - (long)param_2 >> 3;
  puVar9 = puVar1;
  puVar13 = param_4;
  if (lVar14 <= (long)uVar15) goto LAB_00f63fe4;
  puVar13 = param_3 + uVar15;
  if (puVar13 != param_4) {
    uVar7 = (long)param_4 + (~uVar15 * 8 - (long)param_3) >> 3;
    uVar6 = uVar7 + 1;
    puVar8 = puVar1;
    puVar10 = puVar13;
    if ((3 < uVar6) && ((param_3 + uVar15 + uVar7 + 1 <= puVar1 || (puVar1 + uVar7 + 1 <= puVar13)))
       ) {
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar9 = param_3 + uVar15 + 2;
      puVar8 = puVar1 + 2;
      uVar15 = uVar7;
      do {
        puVar10 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar18 = puVar9[1];
        uVar17 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar15 = uVar15 - 4;
        puVar8[-1] = *puVar10;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar18;
        *puVar8 = uVar17;
        puVar8 = puVar8 + 4;
      } while (uVar15 != 0);
      puVar9 = puVar1 + uVar7;
      puVar8 = puVar1 + uVar7;
      puVar10 = puVar13 + uVar7;
      if (uVar6 == uVar7) goto LAB_00f63fd0;
    }
    do {
      puVar11 = puVar10 + 1;
      *puVar8 = *puVar10;
      puVar9 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      puVar10 = puVar11;
    } while (param_4 != puVar11);
  }
LAB_00f63fd0:
  *(undefined8 **)(this + 8) = puVar9;
  if ((long)puVar1 - (long)param_2 < 1) {
    return param_2;
  }
LAB_00f63fe4:
  sVar4 = (long)puVar9 - (long)(param_2 + lVar14);
  puVar10 = puVar9;
  for (puVar8 = puVar9 + -lVar14; puVar8 < puVar1; puVar8 = puVar8 + 1) {
    *puVar10 = *puVar8;
    puVar10 = puVar10 + 1;
  }
  *(undefined8 **)(this + 8) = puVar10;
  if (sVar4 != 0) {
    memmove(puVar9 + -((long)sVar4 >> 3),param_2,sVar4);
  }
  if ((long)puVar13 - (long)param_3 == 0) {
    return param_2;
  }
  memmove(param_2,param_3,(long)puVar13 - (long)param_3);
  return param_2;
}

