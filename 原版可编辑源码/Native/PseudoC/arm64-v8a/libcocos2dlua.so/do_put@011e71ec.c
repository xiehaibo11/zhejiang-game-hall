
/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, double) const */

undefined8 __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  wchar_t *__ptr;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 uVar11;
  char *__ptr_00;
  char *pcVar12;
  wchar_t *pwVar13;
  __shared_count *local_1b0;
  wchar_t *local_1a8;
  wchar_t *pwStack_1a0;
  char *local_198;
  undefined8 local_190;
  wchar_t awStack_184 [57];
  char local_a0 [32];
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  local_190 = 0x25;
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar10 = (undefined2 *)((ulong)&local_190 | 1);
  }
  else {
    puVar10 = (undefined2 *)((ulong)&local_190 | 2);
    local_190 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *(undefined1 *)puVar10 = 0x23;
    puVar10 = (undefined2 *)((long)puVar10 + 1);
  }
  uVar2 = uVar3 & 0x104;
  if (uVar2 == 0x104) {
    bVar6 = false;
    if ((uVar3 >> 0xe & 1) == 0) {
      *(undefined1 *)puVar10 = 0x61;
    }
    else {
      *(undefined1 *)puVar10 = 0x41;
    }
  }
  else {
    *puVar10 = 0x2a2e;
    if (uVar2 == 0x100) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x65;
      }
      else {
        uVar11 = 0x45;
      }
    }
    else if (uVar2 == 4) {
      if ((uVar3 >> 0xe & 1) == 0) {
        uVar11 = 0x66;
      }
      else {
        uVar11 = 0x46;
      }
    }
    else if ((uVar3 >> 0xe & 1) == 0) {
      uVar11 = 0x67;
    }
    else {
      uVar11 = 0x47;
    }
    bVar6 = true;
    *(undefined1 *)(puVar10 + 1) = uVar11;
  }
  local_198 = local_a0;
  if (((DAT_017942d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_017942d8), iVar8 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
    if (!bVar6) goto LAB_011e737c;
LAB_011e7314:
    iVar8 = __libcpp_snprintf_l(local_a0,0x1e,(__locale_t *)DAT_017942d0,(char *)&local_190,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
    if (iVar8 < 0x1e) goto LAB_011e7334;
LAB_011e7398:
    if (bVar6) {
      if (((DAT_017942d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_017942d8), iVar8 != 0)) {
        DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_017942d8);
      }
      iVar8 = __libcpp_asprintf_l(&local_198,(__locale_t *)DAT_017942d0,(char *)&local_190,param_1,
                                  (ulong)*(uint *)(param_4 + 0x10));
    }
    else {
      if (((DAT_017942d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_017942d8), iVar8 != 0)) {
        DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_017942d8);
      }
      iVar8 = __libcpp_asprintf_l(&local_198,(__locale_t *)DAT_017942d0,(char *)&local_190,param_1);
    }
    __ptr_00 = local_198;
    if (local_198 == (char *)0x0) goto LAB_011e75a0;
  }
  else {
    if (bVar6) goto LAB_011e7314;
LAB_011e737c:
    iVar8 = __libcpp_snprintf_l(local_a0,0x1e,(__locale_t *)DAT_017942d0,(char *)&local_190,param_1)
    ;
    if (0x1d < iVar8) goto LAB_011e7398;
LAB_011e7334:
    __ptr_00 = (char *)0x0;
  }
  pcVar7 = local_198;
  pcVar1 = local_198 + iVar8;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar12 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar12 = local_198, uVar3 == 0x10)) {
    cVar4 = *local_198;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar12 = local_198 + 1;
    }
    else if (((1 < iVar8) && (cVar4 == '0')) && ((byte)(local_198[1] | 0x20U) == 0x78)) {
      pcVar12 = local_198 + 2;
    }
  }
  if (local_198 == local_a0) {
    __ptr = (wchar_t *)0x0;
    pwVar13 = awStack_184;
  }
  else {
    __ptr = malloc((long)iVar8 << 3);
    pwVar13 = __ptr;
    if (__ptr == (wchar_t *)0x0) {
      __throw_bad_alloc();
LAB_011e75a0:
      uVar9 = __throw_bad_alloc();
      if (__ptr_00 != (char *)0x0) {
        free(__ptr_00);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar9);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar9);
    }
  }
  ios_base::getloc();
  __num_put<wchar_t>::__widen_and_group_float
            (pcVar7,pcVar12,pcVar1,pwVar13,&pwStack_1a0,&local_1a8,(locale *)&local_1b0);
  __shared_count::__release_shared(local_1b0);
  uVar9 = FUN_011e6874(param_3,pwVar13,pwStack_1a0,local_1a8,param_4,param_5);
  if (__ptr != (wchar_t *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

