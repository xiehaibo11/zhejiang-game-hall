
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
  void *pvVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  void *__src;
  ulong uVar13;
  long *plVar14;
  
                    /* catch() { ... } // from try @ 00a01654 with catch @ 00a0168c */
                    /* try { // try from 00a016a0 to 00b016d7 has its CatchHandler @ 00a016a0
                       catch() { ... } // from try @ 00a016a0 with catch @ 00a016a0
                       catch() { ... } // from try @ 00a016e0 with catch @ 00a016a0 */
  if (param_3 == param_4) {
    return param_2;
  }
  lVar9 = *(long *)this;
  lVar12 = -1;
  plVar5 = param_3;
  plVar6 = param_2;
  do {
    plVar5 = (long *)plVar5[1];
    lVar12 = lVar12 + 1;
    plVar6 = plVar6 + 1;
                    /* try { // try from 00a016d8 to 00b016df has its CatchHandler @ 00a016f0 */
  } while (plVar5 != param_4);
                    /* try { // try from 00a016e0 to 00b01703 has its CatchHandler @ 00a016a0 */
  puVar2 = *(undefined8 **)(this + 8);
  if (lVar12 < *(long *)(this + 0x10) - (long)puVar2 >> 3) {
                    /* catch() { ... } // from try @ 00a016d8 with catch @ 00a016f0 */
    lVar10 = (long)puVar2 - (long)param_2;
    lVar9 = lVar10 >> 3;
    puVar11 = puVar2;
    if (lVar9 <= lVar12) {
      plVar5 = param_3;
      if (lVar10 < -7) {
        do {
          plVar5 = (long *)*plVar5;
                    /* try { // try from 00a01814 to 00b018fb has its CatchHandler @ 00a01760 */
          lVar9 = lVar9 + 1;
          plVar14 = plVar5;
        } while (lVar9 != 0);
      }
      else {
                    /* try { // try from 00a01760 to 00b017a7 has its CatchHandler @ 00a01760
                       catch() { ... } // from try @ 00a01760 with catch @ 00a01760
                       catch() { ... } // from try @ 00a01814 with catch @ 00a01760 */
        plVar14 = param_3;
        if (lVar10 != 0) {
          do {
            plVar5 = (long *)plVar5[1];
            lVar9 = lVar9 + -1;
            plVar14 = plVar5;
          } while (0 < lVar9);
        }
      }
      while (plVar5 != param_4) {
        *puVar11 = plVar5[2];
        lVar12 = *(long *)(this + 8);
        plVar5 = (long *)plVar5[1];
        *(undefined8 **)(this + 8) = (undefined8 *)(lVar12 + 8U);
        puVar11 = (undefined8 *)(lVar12 + 8U);
      }
      param_4 = plVar14;
      if (lVar10 < 1) {
        return param_2;
      }
    }
    sVar4 = (long)puVar11 - (long)plVar6;
    puVar1 = puVar11;
    for (puVar8 = (undefined8 *)((long)param_2 + sVar4); puVar8 < puVar2; puVar8 = puVar8 + 1) {
      *puVar1 = *puVar8;
                    /* catch() { ... } // from try @ 00a017d8 with catch @ 00a01888 */
                    /* catch() { ... } // from try @ 00a017ec with catch @ 00a0188c */
                    /* catch() { ... } // from try @ 00a017c0 with catch @ 00a01890 */
      puVar1 = (undefined8 *)(*(long *)(this + 8) + 8);
                    /* catch() { ... } // from try @ 00a017a8 with catch @ 00a01894 */
      *(undefined8 **)(this + 8) = puVar1;
    }
    plVar6 = param_2;
    if (sVar4 != 0) {
                    /* catch() { ... } // from try @ 00a017f0 with catch @ 00a018a4 */
      memmove(puVar11 + -((long)sVar4 >> 3),param_2,sVar4);
    }
    for (; param_3 != param_4; param_3 = (long *)param_3[1]) {
      *plVar6 = param_3[2];
      plVar6 = plVar6 + 1;
    }
    return param_2;
  }
  uVar13 = lVar12 + ((long)puVar2 - lVar9 >> 3) + 1;
  if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar12 = *(long *)(this + 0x10) - lVar9;
  if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar12 >> 2;
    if (uVar13 <= uVar7) {
      uVar13 = uVar7;
    }
    if (uVar13 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00a01788;
    }
    if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar13 = 0x1fffffffffffffff;
  }
  pvVar3 = operator_new(uVar13 << 3);
LAB_00a01788:
  plVar6 = (long *)((long)pvVar3 + ((long)param_2 - lVar9 >> 3) * 8);
  plVar5 = plVar6;
  do {
    plVar14 = plVar5 + 1;
    *plVar5 = param_3[2];
    param_3 = (long *)param_3[1];
    plVar5 = plVar14;
  } while (param_3 != param_4);
                    /* try { // try from 00a017a8 to 00b017bf has its CatchHandler @ 00a01894 */
  __src = *(void **)this;
  sVar4 = (long)param_2 - (long)__src;
  if (0 < (long)sVar4) {
                    /* try { // try from 00a017c0 to 00b017c7 has its CatchHandler @ 00a01890 */
    memcpy((void *)((long)plVar6 - sVar4),__src,sVar4);
  }
  uVar7 = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)uVar7) {
                    /* try { // try from 00a017d8 to 00b017db has its CatchHandler @ 00a01888 */
    memcpy(plVar14,param_2,uVar7);
    __src = *(void **)this;
                    /* try { // try from 00a017ec to 00b017ef has its CatchHandler @ 00a0188c */
                    /* try { // try from 00a017f0 to 00b01813 has its CatchHandler @ 00a018a4 */
    plVar14 = (long *)((long)plVar14 + (uVar7 & 0xfffffffffffffff8));
  }
  *(void **)this = (void *)((long)plVar6 - sVar4);
  *(long **)(this + 8) = plVar14;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar13 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return plVar6;
}

