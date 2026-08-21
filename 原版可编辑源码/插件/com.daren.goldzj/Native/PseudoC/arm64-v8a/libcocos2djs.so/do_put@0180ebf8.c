
/* std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, wchar_t, long double) const */

undefined8 __thiscall
std::__ndk1::
money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_put(char *param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5,
      undefined4 param_6)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *__ptr;
  ctype *pcVar5;
  wchar_t *__ptr_00;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  wchar_t *pwVar11;
  void *__ptr_01;
  wchar_t *pwVar12;
  wchar_t *local_488;
  char *local_480;
  wchar_t *local_470;
  wchar_t *pwStack_468;
  int local_45c;
  ulong local_458;
  ulong local_450;
  void *local_448;
  ulong local_440;
  ulong local_438;
  void *local_430;
  ulong local_428;
  undefined8 uStack_420;
  void *local_418;
  wchar_t local_410;
  wchar_t wStack_40c;
  __shared_count *local_408;
  char *local_400;
  pattern apStack_3f8 [4];
  wchar_t awStack_3f4 [100];
  wchar_t awStack_264 [100];
  char local_d4 [100];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __ptr_01 = (void *)(ulong)param_4;
  local_400 = local_d4;
  uVar3 = snprintf(local_d4,100,"%.0Lf");
  if (99 < uVar3) {
    if (((DAT_01d52dc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d52dc8), iVar4 != 0)) {
      DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_01d52dc8);
    }
    iVar4 = __libcpp_asprintf_l(&local_400,(__locale_t *)DAT_01d52dc0,"%.0Lf",param_1);
    local_480 = local_400;
    if (local_400 == (char *)0x0) {
      __throw_bad_alloc();
    }
    else {
      lVar10 = (long)iVar4;
      __ptr = malloc(lVar10 << 2);
      pwVar11 = __ptr;
      if (__ptr != (wchar_t *)0x0) goto LAB_0180ecc4;
    }
    __throw_bad_alloc();
    local_480 = param_1;
LAB_0180ef6c:
    uVar6 = __throw_bad_alloc();
    if (__ptr_01 != (void *)0x0) {
      free(__ptr_01);
    }
    if ((local_458 & 1) != 0) {
      operator_delete(local_448);
    }
    if ((local_440 & 1) != 0) {
      operator_delete(local_430);
    }
    if ((local_428 & 1) != 0) {
      operator_delete(local_418);
    }
    __shared_count::__release_shared(local_408);
    if (local_488 != (wchar_t *)0x0) {
      free(local_488);
    }
    if (local_480 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar6);
    }
    free(local_480);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar6);
  }
  __ptr = (wchar_t *)0x0;
  local_480 = (char *)0x0;
  lVar10 = (long)(int)uVar3;
  pwVar11 = awStack_264;
LAB_0180ecc4:
  ios_base::getloc();
  pcVar5 = (ctype *)locale::use_facet((locale *)&local_408,(id *)&ctype<wchar_t>::id);
  (**(code **)(*(long *)pcVar5 + 0x60))(pcVar5,local_400,local_400 + lVar10,pwVar11);
  if (lVar10 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *local_400 == '-';
  }
  local_428 = 0;
  uStack_420 = 0;
  local_418 = (void *)0x0;
  local_440 = 0;
  local_438 = 0;
  local_430 = (void *)0x0;
  local_458 = 0;
  local_450 = 0;
  local_448 = (void *)0x0;
  __money_put<wchar_t>::__gather_info
            ((bool)((byte)param_4 & 1),bVar2,(locale *)&local_408,apStack_3f8,&wStack_40c,&local_410
             ,(basic_string *)&local_428,(basic_string *)&local_440,(basic_string *)&local_458,
             &local_45c);
  if (local_45c < (int)lVar10) {
    uVar7 = (ulong)((byte)local_458._0_1_ >> 1);
    if ((local_458 & 1) != 0) {
      uVar7 = local_450;
    }
    uVar8 = (ulong)((byte)local_440._0_1_ >> 1);
    if ((local_440 & 1) != 0) {
      uVar8 = local_438;
    }
    lVar9 = (lVar10 * 2 - (long)local_45c) + 1;
  }
  else {
    uVar7 = (ulong)((byte)local_458._0_1_ >> 1);
    if ((local_458 & 1) != 0) {
      uVar7 = local_450;
    }
    uVar8 = (ulong)((byte)local_440._0_1_ >> 1);
    if ((local_440 & 1) != 0) {
      uVar8 = local_438;
    }
    lVar9 = (long)local_45c + 2;
  }
  uVar8 = lVar9 + uVar7 + uVar8;
  if (uVar8 < 0x65) {
    __ptr_00 = (wchar_t *)0x0;
    pwVar12 = awStack_3f4;
  }
  else {
    __ptr_00 = malloc(uVar8 * 4);
    __ptr_01 = (void *)0x0;
    pwVar12 = __ptr_00;
    local_488 = __ptr;
    if (__ptr_00 == (wchar_t *)0x0) goto LAB_0180ef6c;
  }
  __money_put<wchar_t>::__format
            (pwVar12,&pwStack_468,&local_470,*(uint *)(param_5 + 8),pwVar11,pwVar11 + lVar10,pcVar5,
             bVar2,apStack_3f8,wStack_40c,local_410,(basic_string *)&local_428,
             (basic_string *)&local_440,(basic_string *)&local_458,local_45c);
  uVar6 = FUN_01804780(param_3,pwVar12,pwStack_468,local_470,param_5,param_6);
  if (__ptr_00 != (wchar_t *)0x0) {
    free(__ptr_00);
  }
  if ((local_458 & 1) != 0) {
    operator_delete(local_448);
  }
  if ((local_440 & 1) != 0) {
    operator_delete(local_430);
  }
  if ((local_428 & 1) != 0) {
    operator_delete(local_418);
  }
  __shared_count::__release_shared(local_408);
  if (__ptr != (wchar_t *)0x0) {
    free(__ptr);
  }
  if (local_480 != (char *)0x0) {
    free(local_480);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

