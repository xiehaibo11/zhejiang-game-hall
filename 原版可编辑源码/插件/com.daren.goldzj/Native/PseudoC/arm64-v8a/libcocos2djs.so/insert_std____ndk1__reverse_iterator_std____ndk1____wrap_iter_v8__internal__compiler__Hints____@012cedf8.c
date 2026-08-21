
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::Hints*>
   > >::value&&is_constructible<v8::internal::compiler::Hints,
   std::__ndk1::iterator_traits<std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::Hints*>
   > >::reference>::value, std::__ndk1::__wrap_iter<v8::internal::compiler::Hints*> >::type
   std::__ndk1::vector<v8::internal::compiler::Hints,
   v8::internal::ZoneAllocator<v8::internal::compiler::Hints>
   >::insert<std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::Hints*>
   > >(std::__ndk1::__wrap_iter<v8::internal::compiler::Hints const*>,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::Hints*> >,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::Hints*> >) */

undefined8 *
std::__ndk1::
vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>::
insert<std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::compiler::Hints*>>>
          (ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 param_5,undefined8 *param_6)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  size_t __n;
  undefined8 *puVar3;
  Zone *this;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if ((long)param_4 - (long)param_6 < 1) {
    return param_2;
  }
  puVar3 = (undefined8 *)param_1[1];
  uVar14 = *param_1;
  lVar6 = (long)param_4 - (long)param_6 >> 3;
  lVar13 = (long)((long)param_2 - uVar14) >> 3;
  if (lVar6 <= (long)(param_1[2] - (long)puVar3) >> 3) {
    lVar4 = (long)puVar3 - (long)param_2 >> 3;
    puVar5 = puVar3;
    puVar7 = param_6;
    if (lVar4 < lVar6) {
      puVar7 = param_4 + -lVar4;
      puVar10 = puVar7;
      while (puVar10 != param_6) {
        puVar10 = puVar10 + -1;
        *puVar5 = *puVar10;
        puVar5 = (undefined8 *)(param_1[1] + 8);
        param_1[1] = (ulong)puVar5;
      }
      if ((long)puVar3 - (long)param_2 < 1) {
        return param_2;
      }
    }
    __n = (long)puVar5 - (long)(param_2 + lVar6);
    puVar10 = puVar5;
    for (puVar9 = puVar5 + -lVar6; puVar9 < puVar3; puVar9 = puVar9 + 1) {
      *puVar10 = *puVar9;
      puVar10 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = (ulong)puVar10;
    }
    if (__n != 0) {
      memmove(puVar5 + -((long)__n >> 3),param_2,__n);
    }
    if ((long)param_4 - (long)puVar7 == 0) {
      return param_2;
    }
    uVar11 = ((long)param_4 - (long)puVar7) - 8U >> 3;
    uVar2 = uVar11 + 1;
    puVar3 = param_4;
    puVar5 = param_2;
    if ((3 < uVar2) &&
       ((param_4 <= param_2 ||
        ((undefined8 *)(uVar14 + (lVar13 + uVar11) * 8 + 8) <= param_4 + ~uVar11)))) {
      uVar11 = uVar2 & 0x3ffffffffffffffc;
      puVar5 = (undefined8 *)(uVar14 + lVar13 * 8 + 0x10);
      puVar3 = param_4 + -uVar11;
      pauVar8 = (undefined1 (*) [16])(param_4 + -2);
      uVar14 = uVar11;
      do {
        pauVar1 = pauVar8 + -1;
        auVar15 = *pauVar8;
        uVar14 = uVar14 - 4;
        pauVar8 = pauVar8 + -2;
        auVar15 = NEON_ext(auVar15,auVar15,8,1);
        auVar16 = NEON_ext(*pauVar1,*pauVar1,8,1);
        puVar5[-1] = auVar15._8_8_;
        puVar5[-2] = auVar15._0_8_;
        puVar5[1] = auVar16._8_8_;
        *puVar5 = auVar16._0_8_;
        puVar5 = puVar5 + 4;
      } while (uVar14 != 0);
      puVar5 = param_2 + uVar11;
      if (uVar2 == uVar11) {
        return param_2;
      }
    }
    do {
      puVar3 = puVar3 + -1;
      *puVar5 = *puVar3;
      puVar5 = puVar5 + 1;
    } while (puVar7 != puVar3);
    return param_2;
  }
  uVar2 = lVar6 + ((long)((long)puVar3 - uVar14) >> 3);
  if (uVar2 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = param_1[2] - uVar14;
  uVar14 = lVar6 >> 2;
  if (uVar2 <= uVar14) {
    uVar2 = uVar14;
  }
  if (0x7fffffe < (ulong)(lVar6 >> 3)) {
    uVar2 = 0xfffffff;
  }
  if (uVar2 == 0) {
    lVar6 = 0;
  }
  else {
    this = (Zone *)param_1[3];
    uVar14 = uVar2 * 8;
    lVar6 = *(long *)(this + 0x10);
    if (uVar14 < (ulong)(*(long *)(this + 0x18) - lVar6) ||
        uVar14 - (*(long *)(this + 0x18) - lVar6) == 0) {
      *(ulong *)(this + 0x10) = lVar6 + uVar14;
    }
    else {
      lVar6 = v8::internal::Zone::NewExpand(this,uVar14);
    }
  }
  puVar3 = (undefined8 *)(lVar6 + lVar13 * 8);
  puVar5 = puVar3;
  if ((long)param_4 - (long)param_6 != 0) {
    uVar11 = ((long)param_4 - (long)param_6) - 8U >> 3;
    uVar14 = uVar11 + 1;
    puVar7 = puVar3;
    if ((3 < uVar14) &&
       ((param_4 <= puVar3 ||
        ((undefined8 *)(lVar6 + (lVar13 + uVar11) * 8 + 8) <= param_4 + ~uVar11)))) {
      uVar12 = uVar14 & 0x3ffffffffffffffc;
      pauVar8 = (undefined1 (*) [16])(param_4 + -2);
      param_4 = param_4 + -uVar12;
      puVar5 = (undefined8 *)(lVar6 + lVar13 * 8 + 0x10);
      uVar11 = uVar12;
      do {
        pauVar1 = pauVar8 + -1;
        auVar15 = *pauVar8;
        pauVar8 = pauVar8 + -2;
        uVar11 = uVar11 - 4;
        auVar15 = NEON_ext(auVar15,auVar15,8,1);
        auVar16 = NEON_ext(*pauVar1,*pauVar1,8,1);
        puVar5[-1] = auVar15._8_8_;
        puVar5[-2] = auVar15._0_8_;
        puVar5[1] = auVar16._8_8_;
        *puVar5 = auVar16._0_8_;
        puVar5 = puVar5 + 4;
      } while (uVar11 != 0);
      puVar5 = puVar3 + uVar12;
      puVar7 = puVar3 + uVar12;
      if (uVar14 == uVar12) goto LAB_012cf0a0;
    }
    do {
      param_4 = param_4 + -1;
      puVar5 = puVar7 + 1;
      *puVar7 = *param_4;
      puVar7 = puVar5;
    } while (param_6 != param_4);
  }
LAB_012cf0a0:
  puVar9 = (undefined8 *)*param_1;
  puVar7 = puVar3;
  puVar10 = param_2;
  while (puVar9 != puVar10) {
    puVar10 = puVar10 + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *puVar10;
  }
  puVar10 = (undefined8 *)param_1[1];
  for (; puVar10 != param_2; param_2 = param_2 + 1) {
    *puVar5 = *param_2;
    puVar5 = puVar5 + 1;
  }
  *param_1 = (ulong)puVar7;
  param_1[1] = (ulong)puVar5;
  param_1[2] = lVar6 + uVar2 * 8;
  return puVar3;
}

