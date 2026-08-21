
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__list_iterator<universe::Downloader2::BaseJob*,
   void*> >::value&&is_constructible<universe::Downloader2::BaseJob*,
   std::__ndk1::iterator_traits<std::__ndk1::__list_iterator<universe::Downloader2::BaseJob*, void*>
   >::reference>::value, std::__ndk1::__wrap_iter<universe::Downloader2::BaseJob**> >::type
   std::__ndk1::vector<universe::Downloader2::BaseJob*,
   std::__ndk1::allocator<universe::Downloader2::BaseJob*>
   >::insert<std::__ndk1::__list_iterator<universe::Downloader2::BaseJob*, void*>
   >(std::__ndk1::__wrap_iter<universe::Downloader2::BaseJob* const*>,
   std::__ndk1::__list_iterator<universe::Downloader2::BaseJob*, void*>,
   std::__ndk1::__list_iterator<universe::Downloader2::BaseJob*, void*>) */

long * __thiscall
std::__ndk1::
vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>::
insert<std::__ndk1::__list_iterator<universe::Downloader2::BaseJob*,void*>>
          (vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
           *this,long *param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  size_t sVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if (param_3 == param_4) {
    return param_2;
  }
  lVar11 = *(long *)this;
  lVar15 = (long)param_2 - lVar11 >> 3;
  lVar14 = -1;
  plVar7 = param_3;
  plVar8 = param_2;
  do {
    plVar7 = (long *)plVar7[1];
    lVar14 = lVar14 + 1;
    plVar8 = plVar8 + 1;
  } while (plVar7 != param_4);
  puVar1 = *(undefined8 **)(this + 8);
  if (lVar14 < *(long *)(this + 0x10) - (long)puVar1 >> 3) {
    lVar15 = (long)puVar1 - (long)param_2;
    lVar11 = lVar15 >> 3;
    puVar13 = puVar1;
    if (lVar11 <= lVar14) {
      plVar7 = param_3;
      if (lVar15 < -7) {
        do {
          plVar7 = (long *)*plVar7;
          bVar3 = lVar11 != -1;
          lVar11 = lVar11 + 1;
          plVar12 = plVar7;
        } while (bVar3);
      }
      else {
        plVar12 = param_3;
        if (lVar15 != 0) {
          do {
            plVar7 = (long *)plVar7[1];
            lVar11 = lVar11 + -1;
            plVar12 = plVar7;
          } while (0 < lVar11);
        }
      }
      for (; plVar7 != param_4; plVar7 = (long *)plVar7[1]) {
        *puVar13 = plVar7[2];
        puVar13 = puVar13 + 1;
      }
      *(undefined8 **)(this + 8) = puVar13;
      param_4 = plVar12;
      if (lVar15 < 1) {
        return param_2;
      }
    }
    sVar6 = (long)puVar13 - (long)plVar8;
    puVar2 = puVar13;
    for (puVar10 = (undefined8 *)((long)param_2 + sVar6); puVar10 < puVar1; puVar10 = puVar10 + 1) {
      *puVar2 = *puVar10;
      puVar2 = puVar2 + 1;
    }
    *(undefined8 **)(this + 8) = puVar2;
    plVar8 = param_2;
    if (sVar6 != 0) {
      memmove(puVar13 + -((long)sVar6 >> 3),param_2,sVar6);
    }
    for (; param_3 != param_4; param_3 = (long *)param_3[1]) {
      *plVar8 = param_3[2];
      plVar8 = plVar8 + 1;
    }
    return param_2;
  }
  uVar16 = lVar14 + ((long)puVar1 - lVar11 >> 3) + 1;
  if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar11 = *(long *)(this + 0x10) - lVar11;
  if ((ulong)(lVar11 >> 3) < 0xfffffffffffffff) {
    uVar9 = lVar11 >> 2;
    if (uVar16 <= uVar9) {
      uVar16 = uVar9;
    }
    if (uVar16 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_009e8ea4;
    }
    if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar16 = 0x1fffffffffffffff;
  }
  pvVar4 = operator_new(uVar16 << 3);
LAB_009e8ea4:
  lVar14 = 0;
  plVar8 = (long *)((long)pvVar4 + lVar15 * 8);
  plVar7 = param_3;
  do {
    plVar7 = (long *)plVar7[1];
    lVar14 = lVar14 + 8;
  } while (plVar7 != param_4);
  plVar7 = (long *)((long)pvVar4 + lVar15 * 8);
  lVar11 = lVar14;
  plVar12 = plVar8;
  do {
    plVar7 = plVar7 + 1;
    lVar11 = lVar11 + -8;
    *plVar12 = param_3[2];
    param_3 = (long *)param_3[1];
    plVar12 = plVar7;
  } while (lVar11 != 0);
  sVar6 = (long)param_2 - (long)*(void **)this;
  if (0 < (long)sVar6) {
    memcpy((void *)((long)plVar8 - sVar6),*(void **)this,sVar6);
  }
  uVar9 = *(long *)(this + 8) - (long)param_2;
  plVar7 = plVar8;
  if (0 < (long)uVar9) {
    memcpy((void *)((long)plVar8 + lVar14),param_2,uVar9);
    plVar7 = (long *)((long)plVar8 + (uVar9 & 0xfffffffffffffff8));
  }
  pvVar5 = *(void **)this;
  *(void **)this = (void *)((long)plVar8 - sVar6);
  *(long *)(this + 8) = (long)plVar7 + lVar14;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar16 * 8);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  return plVar8;
}

