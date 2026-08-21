
/* std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, char, long double) const */

undefined8 __thiscall
std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(char *param_1,undefined8 param_2,undefined8 param_3,byte param_4,long param_5,
      undefined4 param_6)

{
  size_t __size;
  void *pvVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ctype *pcVar6;
  char *__ptr;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  void *__ptr_00;
  size_t __size_00;
  char *__ptr_01;
  char *pcVar11;
  char *local_238;
  char *local_230;
  char *local_218;
  char *pcStack_210;
  int local_204;
  ulong local_200;
  ulong local_1f8;
  void *local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  void *local_1d8;
  ulong local_1d0;
  undefined8 uStack_1c8;
  void *local_1c0;
  char local_1b8 [4];
  char local_1b4 [4];
  __shared_count *local_1b0;
  char *local_1a8;
  pattern apStack_1a0 [4];
  char acStack_19c [100];
  char acStack_138 [100];
  char local_d4 [100];
  long local_70;
  
  pvVar1 = (void *)tpidr_el0;
  local_70 = *(long *)((long)pvVar1 + 0x28);
  local_1a8 = local_d4;
  uVar3 = snprintf(local_d4,100,"%.0Lf");
  if (uVar3 < 100) {
    local_230 = (char *)0x0;
    pcVar5 = acStack_138;
    __size_00 = (size_t)(int)uVar3;
    __ptr_01 = (char *)0x0;
LAB_0180dd74:
    ios_base::getloc();
    pcVar6 = (ctype *)locale::use_facet((locale *)&local_1b0,(id *)&ctype<char>::id);
    (**(code **)(*(long *)pcVar6 + 0x40))(pcVar6,local_1a8,local_1a8 + __size_00,pcVar5);
    if (__size_00 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *local_1a8 == '-';
    }
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = (void *)0x0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = (void *)0x0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = (void *)0x0;
    __money_put<char>::__gather_info
              ((bool)(param_4 & 1),bVar2,(locale *)&local_1b0,apStack_1a0,local_1b4,local_1b8,
               (basic_string *)&local_1d0,(basic_string *)&local_1e8,(basic_string *)&local_200,
               &local_204);
    if (local_204 < (int)__size_00) {
      uVar8 = (ulong)((byte)local_200._0_1_ >> 1);
      if ((local_200 & 1) != 0) {
        uVar8 = local_1f8;
      }
      uVar9 = (ulong)((byte)local_1e8._0_1_ >> 1);
      if ((local_1e8 & 1) != 0) {
        uVar9 = local_1e0;
      }
      lVar10 = (__size_00 * 2 - (long)local_204) + 1;
    }
    else {
      uVar8 = (ulong)((byte)local_200._0_1_ >> 1);
      if ((local_200 & 1) != 0) {
        uVar8 = local_1f8;
      }
      uVar9 = (ulong)((byte)local_1e8._0_1_ >> 1);
      if ((local_1e8 & 1) != 0) {
        uVar9 = local_1e0;
      }
      lVar10 = (long)local_204 + 2;
    }
    __size = lVar10 + uVar8 + uVar9;
    if (__size < 0x65) {
      __ptr = (char *)0x0;
      pcVar11 = acStack_19c;
    }
    else {
      __ptr = malloc(__size);
      __ptr_00 = (void *)0x0;
      pcVar11 = __ptr;
      local_238 = __ptr_01;
      if (__ptr == (char *)0x0) goto LAB_0180e00c;
    }
    __money_put<char>::__format
              (pcVar11,&pcStack_210,&local_218,*(uint *)(param_5 + 8),pcVar5,pcVar5 + __size_00,
               pcVar6,bVar2,apStack_1a0,local_1b4[0],local_1b8[0],(basic_string *)&local_1d0,
               (basic_string *)&local_1e8,(basic_string *)&local_200,local_204);
    uVar7 = FUN_00886dfc(param_3,pcVar11,pcStack_210,local_218,param_5,param_6);
    if (__ptr != (char *)0x0) {
      free(__ptr);
    }
    if ((local_200 & 1) != 0) {
      operator_delete(local_1f0);
    }
    if ((local_1e8 & 1) != 0) {
      operator_delete(local_1d8);
    }
    if ((local_1d0 & 1) != 0) {
      operator_delete(local_1c0);
    }
    __shared_count::__release_shared(local_1b0);
    if (__ptr_01 != (char *)0x0) {
      free(__ptr_01);
    }
    if (local_230 != (char *)0x0) {
      free(local_230);
    }
    if (*(long *)((long)pvVar1 + 0x28) == local_70) {
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (((DAT_01d52dc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d52dc8), iVar4 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  iVar4 = __libcpp_asprintf_l(&local_1a8,(__locale_t *)DAT_01d52dc0,"%.0Lf",param_1);
  local_230 = local_1a8;
  if (local_1a8 == (char *)0x0) {
    __throw_bad_alloc();
  }
  else {
    __size_00 = (size_t)iVar4;
    pcVar5 = malloc(__size_00);
    __ptr_01 = pcVar5;
    if (pcVar5 != (char *)0x0) goto LAB_0180dd74;
  }
  __throw_bad_alloc();
  __ptr_00 = pvVar1;
  local_230 = param_1;
LAB_0180e00c:
  uVar7 = __throw_bad_alloc();
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if ((local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
  if ((local_1e8 & 1) != 0) {
    operator_delete(local_1d8);
  }
  if ((local_1d0 & 1) != 0) {
    operator_delete(local_1c0);
  }
  __shared_count::__release_shared(local_1b0);
  if (local_238 != (char *)0x0) {
    free(local_238);
  }
  if (local_230 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar7);
  }
  free(local_230);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar7);
}

