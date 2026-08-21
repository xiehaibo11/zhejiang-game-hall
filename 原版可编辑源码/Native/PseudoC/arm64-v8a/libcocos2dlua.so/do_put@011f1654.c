
/* std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, wchar_t, long double) const */

undefined8 __thiscall
std::__ndk1::
money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_put(char *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
      undefined4 param_6)

{
  long lVar1;
  __shared_count *p_Var2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined8 **__ptr;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  void *__ptr_00;
  ctype *pcVar12;
  wchar_t *__ptr_01;
  undefined8 **ppuVar13;
  wchar_t *local_498;
  char *local_490;
  wchar_t *local_478;
  wchar_t *pwStack_470;
  int local_464;
  ulong local_460;
  ulong local_458;
  void *local_450;
  undefined8 ***local_448;
  ulong local_440;
  void *local_438;
  undefined8 **local_430;
  undefined8 local_428;
  void *local_420;
  wchar_t local_418;
  wchar_t wStack_414;
  __shared_count *local_410;
  char *local_408;
  pattern apStack_400 [8];
  undefined8 *local_3f8;
  code *local_3f0;
  undefined8 uStack_3e8;
  wchar_t awStack_264 [100];
  char local_d4 [100];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_408 = local_d4;
  __ptr_00 = (void *)(param_4 & 0xffffffff);
  uVar4 = FUN_011f0a00(local_d4,100);
  if (99 < uVar4) {
    if (((DAT_017942d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_017942d8), iVar5 != 0)) {
      DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_017942d8);
    }
    iVar5 = __libcpp_asprintf_l(&local_408,(__locale_t *)DAT_017942d0,"%.0Lf",param_1);
    local_490 = local_408;
    if (local_408 == (char *)0x0) {
      __throw_bad_alloc();
    }
    else {
      lVar11 = (long)iVar5;
      pwVar6 = malloc(lVar11 << 2);
      __ptr_01 = pwVar6;
      if (pwVar6 != (wchar_t *)0x0) goto LAB_011f1718;
    }
    __throw_bad_alloc();
    local_490 = param_1;
LAB_011f1a20:
    uVar7 = __throw_bad_alloc();
    if (__ptr_00 != (void *)0x0) {
      free(__ptr_00);
    }
    if ((local_460 & 1) != 0) {
      operator_delete(local_450);
    }
    if (((ulong)local_448 & 1) != 0) {
      operator_delete(local_438);
    }
    if (((ulong)local_430 & 1) != 0) {
      operator_delete(local_420);
    }
    __shared_count::__release_shared(local_410);
    if (local_498 != (wchar_t *)0x0) {
      free(local_498);
    }
    if (local_490 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar7);
    }
    free(local_490);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar7);
  }
  local_490 = (char *)0x0;
  pwVar6 = awStack_264;
  lVar11 = (long)(int)uVar4;
  __ptr_01 = (wchar_t *)0x0;
LAB_011f1718:
  ios_base::getloc();
  p_Var2 = local_410;
  local_3f8 = &ctype<wchar_t>::id;
  uStack_3e8 = 0;
  local_3f0 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_430 = &local_3f8;
    local_448 = &local_430;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_448,FUN_01208130);
  }
  lVar10 = *(long *)(p_Var2 + 0x10);
  if (((ulong)(*(long *)(p_Var2 + 0x18) - lVar10 >> 3) <= (long)DAT_01794320 - 1U) ||
     (pcVar12 = *(ctype **)(lVar10 + ((long)DAT_01794320 - 1U) * 8), pcVar12 == (ctype *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  (**(code **)(*(long *)pcVar12 + 0x60))(pcVar12,local_408,local_408 + lVar11,pwVar6);
  if (lVar11 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *local_408 == '-';
  }
  local_428 = 0;
  local_420 = (void *)0x0;
  local_438 = (void *)0x0;
  local_430 = (undefined8 **)0x0;
  local_448 = (undefined8 ***)0x0;
  local_440 = 0;
  local_458 = 0;
  local_450 = (void *)0x0;
  local_460 = 0;
  __money_put<wchar_t>::__gather_info
            ((bool)((byte)param_4 & 1),bVar3,(locale *)&local_410,apStack_400,&wStack_414,&local_418
             ,(basic_string *)&local_430,(basic_string *)&local_448,(basic_string *)&local_460,
             &local_464);
  if (local_464 < (int)lVar11) {
    uVar8 = (ulong)((byte)local_460._0_1_ >> 1);
    if ((local_460 & 1) != 0) {
      uVar8 = local_458;
    }
    uVar9 = (ulong)((byte)local_448._0_1_ >> 1);
    if (((ulong)local_448 & 1) != 0) {
      uVar9 = local_440;
    }
    lVar10 = (lVar11 * 2 - (long)local_464) + 1;
  }
  else {
    uVar8 = (ulong)((byte)local_460._0_1_ >> 1);
    if ((local_460 & 1) != 0) {
      uVar8 = local_458;
    }
    uVar9 = (ulong)((byte)local_448._0_1_ >> 1);
    if (((ulong)local_448 & 1) != 0) {
      uVar9 = local_440;
    }
    lVar10 = (long)local_464 + 2;
  }
  uVar9 = lVar10 + uVar8 + uVar9;
  if (uVar9 < 0x65) {
    __ptr = (undefined8 **)0x0;
    ppuVar13 = &local_3f8;
  }
  else {
    __ptr = malloc(uVar9 * 4);
    __ptr_00 = (void *)0x0;
    ppuVar13 = __ptr;
    local_498 = __ptr_01;
    if (__ptr == (undefined8 **)0x0) goto LAB_011f1a20;
  }
  __money_put<wchar_t>::__format
            ((wchar_t *)ppuVar13,&pwStack_470,&local_478,*(uint *)(param_5 + 8),pwVar6,
             pwVar6 + lVar11,pcVar12,bVar3,apStack_400,wStack_414,local_418,
             (basic_string *)&local_430,(basic_string *)&local_448,(basic_string *)&local_460,
             local_464);
  uVar7 = FUN_011e6874(param_3,ppuVar13,pwStack_470,local_478,param_5,param_6);
  if (__ptr != (undefined8 **)0x0) {
    free(__ptr);
  }
  if ((local_460 & 1) != 0) {
    operator_delete(local_450);
  }
  if (((ulong)local_448 & 1) != 0) {
    operator_delete(local_438);
  }
  if (((ulong)local_430 & 1) != 0) {
    operator_delete(local_420);
  }
  __shared_count::__release_shared(local_410);
  if (__ptr_01 != (wchar_t *)0x0) {
    free(__ptr_01);
  }
  if (local_490 != (char *)0x0) {
    free(local_490);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

