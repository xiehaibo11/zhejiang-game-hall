
/* std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, char, long double) const */

undefined8 __thiscall
std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(char *param_1,undefined8 param_2,undefined8 param_3,byte param_4,long param_5,
      undefined4 param_6)

{
  size_t __size;
  long lVar1;
  __shared_count *p_Var2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 **__ptr;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *__ptr_00;
  void *unaff_x23;
  size_t __size_00;
  undefined8 **ppuVar11;
  ctype *pcVar12;
  char *local_230;
  char *local_220;
  char *pcStack_218;
  int local_20c;
  ulong local_208;
  ulong local_200;
  void *local_1f8;
  undefined8 ***local_1f0;
  ulong local_1e8;
  void *local_1e0;
  undefined8 **local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  char local_1c0 [4];
  char local_1bc [4];
  __shared_count *local_1b8;
  char *local_1b0;
  pattern apStack_1a8 [8];
  undefined8 *local_1a0;
  code *local_198;
  undefined8 uStack_190;
  char acStack_138 [100];
  char local_d4 [100];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_1b0 = local_d4;
  uVar4 = FUN_011f0a00(local_d4,100);
  if (99 < uVar4) {
    if (((DAT_017942d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_017942d8), iVar5 != 0)) {
      DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_017942d8);
    }
    iVar5 = __libcpp_asprintf_l(&local_1b0,(__locale_t *)DAT_017942d0,"%.0Lf",param_1);
    __ptr_00 = local_1b0;
    if (local_1b0 == (char *)0x0) {
      __throw_bad_alloc();
    }
    else {
      __size_00 = (size_t)iVar5;
      pcVar6 = malloc(__size_00);
      local_230 = pcVar6;
      if (pcVar6 != (char *)0x0) goto LAB_011f0614;
    }
    __throw_bad_alloc();
    local_230 = param_1;
LAB_011f0918:
    uVar7 = __throw_bad_alloc();
    if (unaff_x23 != (void *)0x0) {
      free(unaff_x23);
    }
    if ((local_208 & 1) != 0) {
      operator_delete(local_1f8);
    }
    if (((ulong)local_1f0 & 1) != 0) {
      operator_delete(local_1e0);
    }
    if (((ulong)local_1d8 & 1) != 0) {
      operator_delete(local_1c8);
    }
    __shared_count::__release_shared(local_1b8);
    if (local_230 != (char *)0x0) {
      free(local_230);
    }
    if (__ptr_00 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar7);
    }
    free(__ptr_00);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar7);
  }
  __ptr_00 = (char *)0x0;
  pcVar6 = acStack_138;
  __size_00 = (size_t)(int)uVar4;
  local_230 = (char *)0x0;
LAB_011f0614:
  ios_base::getloc();
  p_Var2 = local_1b8;
  local_1a0 = &ctype<char>::id;
  uStack_190 = 0;
  local_198 = locale::id::__init;
  if (ctype<char>::id != -1) {
    local_1d8 = &local_1a0;
    local_1f0 = &local_1d8;
    __call_once((ulong *)&ctype<char>::id,&local_1f0,FUN_01208130);
  }
  lVar10 = *(long *)(p_Var2 + 0x10);
  if (((ulong)(*(long *)(p_Var2 + 0x18) - lVar10 >> 3) <= (long)DAT_01794330 - 1U) ||
     (pcVar12 = *(ctype **)(lVar10 + ((long)DAT_01794330 - 1U) * 8), pcVar12 == (ctype *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  (**(code **)(*(long *)pcVar12 + 0x40))(pcVar12,local_1b0,local_1b0 + __size_00,pcVar6);
  if (__size_00 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *local_1b0 == '-';
  }
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  local_1e0 = (void *)0x0;
  local_1d8 = (undefined8 **)0x0;
  local_1f0 = (undefined8 ***)0x0;
  local_1e8 = 0;
  local_200 = 0;
  local_1f8 = (void *)0x0;
  local_208 = 0;
  __money_put<char>::__gather_info
            ((bool)(param_4 & 1),bVar3,(locale *)&local_1b8,apStack_1a8,local_1bc,local_1c0,
             (basic_string *)&local_1d8,(basic_string *)&local_1f0,(basic_string *)&local_208,
             &local_20c);
  if (local_20c < (int)__size_00) {
    uVar8 = (ulong)((byte)local_208._0_1_ >> 1);
    if ((local_208 & 1) != 0) {
      uVar8 = local_200;
    }
    uVar9 = (ulong)((byte)local_1f0._0_1_ >> 1);
    if (((ulong)local_1f0 & 1) != 0) {
      uVar9 = local_1e8;
    }
    lVar10 = (__size_00 * 2 - (long)local_20c) + 1;
  }
  else {
    uVar8 = (ulong)((byte)local_208._0_1_ >> 1);
    if ((local_208 & 1) != 0) {
      uVar8 = local_200;
    }
    uVar9 = (ulong)((byte)local_1f0._0_1_ >> 1);
    if (((ulong)local_1f0 & 1) != 0) {
      uVar9 = local_1e8;
    }
    lVar10 = (long)local_20c + 2;
  }
  __size = lVar10 + uVar8 + uVar9;
  if (__size < 0x65) {
    __ptr = (undefined8 **)0x0;
    ppuVar11 = &local_1a0;
  }
  else {
    __ptr = malloc(__size);
    unaff_x23 = (void *)0x0;
    ppuVar11 = __ptr;
    if (__ptr == (undefined8 **)0x0) goto LAB_011f0918;
  }
  __money_put<char>::__format
            ((char *)ppuVar11,&pcStack_218,&local_220,*(uint *)(param_5 + 8),pcVar6,
             pcVar6 + __size_00,pcVar12,bVar3,apStack_1a8,local_1bc[0],local_1c0[0],
             (basic_string *)&local_1d8,(basic_string *)&local_1f0,(basic_string *)&local_208,
             local_20c);
  uVar7 = FUN_00914b68(param_3,ppuVar11,pcStack_218,local_220,param_5,param_6);
  if (__ptr != (undefined8 **)0x0) {
    free(__ptr);
  }
  if ((local_208 & 1) != 0) {
    operator_delete(local_1f8);
  }
  if (((ulong)local_1f0 & 1) != 0) {
    operator_delete(local_1e0);
  }
  if (((ulong)local_1d8 & 1) != 0) {
    operator_delete(local_1c8);
  }
  __shared_count::__release_shared(local_1b8);
  if (local_230 != (char *)0x0) {
    free(local_230);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

