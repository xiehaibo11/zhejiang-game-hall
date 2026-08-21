
/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, long double) const */

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
  __shared_count *local_1a0;
  wchar_t *local_198;
  wchar_t *pwStack_190;
  char *local_188;
  undefined8 local_180;
  wchar_t awStack_174 [57];
  char local_90 [32];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_180 = 0x25;
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar10 = (undefined2 *)((ulong)&local_180 | 1);
  }
  else {
    puVar10 = (undefined2 *)((ulong)&local_180 | 2);
    local_180 = 0x2b25;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    *(undefined1 *)puVar10 = 0x23;
    puVar10 = (undefined2 *)((long)puVar10 + 1);
  }
  uVar2 = uVar3 & 0x104;
  if (uVar2 == 0x104) {
    bVar6 = false;
    *(undefined1 *)puVar10 = 0x4c;
    if ((uVar3 >> 0xe & 1) == 0) {
      *(undefined1 *)((long)puVar10 + 1) = 0x61;
    }
    else {
      *(undefined1 *)((long)puVar10 + 1) = 0x41;
    }
  }
  else {
    *puVar10 = 0x2a2e;
    *(undefined1 *)(puVar10 + 1) = 0x4c;
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
    *(undefined1 *)((long)puVar10 + 3) = uVar11;
  }
  local_188 = local_90;
  if (((DAT_01d52dc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_01d52dc8), iVar8 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  if (bVar6) {
    iVar8 = __libcpp_snprintf_l(local_90,0x1e,(__locale_t *)DAT_01d52dc0,(char *)&local_180,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
    if (iVar8 < 0x1e) goto LAB_01805bc0;
LAB_01805be8:
    if (bVar6) {
      if (((DAT_01d52dc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_01d52dc8), iVar8 != 0)) {
        DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_01d52dc8);
      }
      iVar8 = __libcpp_asprintf_l(&local_188,(__locale_t *)DAT_01d52dc0,(char *)&local_180,param_1,
                                  (ulong)*(uint *)(param_4 + 0x10));
    }
    else {
      if (((DAT_01d52dc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_01d52dc8), iVar8 != 0)) {
        DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_01d52dc8);
      }
      iVar8 = __libcpp_asprintf_l(&local_188,(__locale_t *)DAT_01d52dc0,(char *)&local_180,param_1);
    }
    __ptr_00 = local_188;
    if (local_188 == (char *)0x0) goto LAB_01805e28;
  }
  else {
    iVar8 = __libcpp_snprintf_l(local_90,0x1e,(__locale_t *)DAT_01d52dc0,(char *)&local_180,param_1)
    ;
    if (0x1d < iVar8) goto LAB_01805be8;
LAB_01805bc0:
    __ptr_00 = (char *)0x0;
  }
  pcVar7 = local_188;
  pcVar1 = local_188 + iVar8;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar12 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar12 = local_188, uVar3 == 0x10)) {
    cVar4 = *local_188;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar12 = local_188 + 1;
    }
    else if (((1 < iVar8) && (cVar4 == '0')) && ((byte)(local_188[1] | 0x20U) == 0x78)) {
      pcVar12 = local_188 + 2;
    }
  }
  if (local_188 == local_90) {
    __ptr = (wchar_t *)0x0;
    pwVar13 = awStack_174;
  }
  else {
    __ptr = malloc((long)iVar8 << 3);
    pwVar13 = __ptr;
    if (__ptr == (wchar_t *)0x0) {
      __throw_bad_alloc();
LAB_01805e28:
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
            (pcVar7,pcVar12,pcVar1,pwVar13,&pwStack_190,&local_198,(locale *)&local_1a0);
  __shared_count::__release_shared(local_1a0);
  uVar9 = FUN_01804780(param_3,pwVar13,pwStack_190,local_198,param_4,param_5);
  if (__ptr != (wchar_t *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

