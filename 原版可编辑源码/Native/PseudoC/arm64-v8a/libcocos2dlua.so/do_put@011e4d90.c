
/* WARNING: Removing unreachable block (ram,0x011e5140) */
/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, double) const */

undefined8 __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  char *__ptr;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 uVar11;
  char *__ptr_00;
  char *pcVar12;
  char *pcVar13;
  __shared_count *local_100;
  char *local_f8;
  char *pcStack_f0;
  char *local_e8;
  undefined8 local_e0;
  char acStack_d4 [60];
  char local_98 [32];
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  local_e0 = 0x25;
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar10 = (undefined2 *)((ulong)&local_e0 | 1);
  }
  else {
    puVar10 = (undefined2 *)((ulong)&local_e0 | 2);
    local_e0 = 0x2b25;
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
  local_e8 = local_98;
  if (((DAT_017942d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_017942d8), iVar8 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
    if (bVar6) goto LAB_011e4eb4;
LAB_011e4f1c:
    iVar8 = __libcpp_snprintf_l(local_98,0x1e,(__locale_t *)DAT_017942d0,(char *)&local_e0,param_1);
    if (iVar8 < 0x1e) goto LAB_011e4ed4;
LAB_011e4f38:
    if (bVar6) {
      if (((DAT_017942d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_017942d8), iVar8 != 0)) {
        DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_017942d8);
      }
      iVar8 = __libcpp_asprintf_l(&local_e8,(__locale_t *)DAT_017942d0,(char *)&local_e0,param_1,
                                  (ulong)*(uint *)(param_4 + 0x10));
    }
    else {
      if (((DAT_017942d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_017942d8), iVar8 != 0)) {
        DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_017942d8);
      }
      iVar8 = __libcpp_asprintf_l(&local_e8,(__locale_t *)DAT_017942d0,(char *)&local_e0,param_1);
    }
    __ptr_00 = local_e8;
    if (local_e8 == (char *)0x0) {
      uVar9 = __throw_bad_alloc();
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar9);
    }
  }
  else {
    if (!bVar6) goto LAB_011e4f1c;
LAB_011e4eb4:
    iVar8 = __libcpp_snprintf_l(local_98,0x1e,(__locale_t *)DAT_017942d0,(char *)&local_e0,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
    if (0x1d < iVar8) goto LAB_011e4f38;
LAB_011e4ed4:
    __ptr_00 = (char *)0x0;
  }
  pcVar7 = local_e8;
  pcVar1 = local_e8 + iVar8;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar12 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar12 = local_e8, uVar3 == 0x10)) {
    cVar4 = *local_e8;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar12 = local_e8 + 1;
    }
    else if (((1 < iVar8) && (cVar4 == '0')) && ((byte)(local_e8[1] | 0x20U) == 0x78)) {
      pcVar12 = local_e8 + 2;
    }
  }
  if (local_e8 != local_98) {
    __ptr = malloc((long)iVar8 << 1);
    pcVar13 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_011e5020;
    __throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar13 = acStack_d4;
LAB_011e5020:
  ios_base::getloc();
  __num_put<char>::__widen_and_group_float
            (pcVar7,pcVar12,pcVar1,pcVar13,&pcStack_f0,&local_f8,(locale *)&local_100);
  __shared_count::__release_shared(local_100);
  uVar9 = FUN_00914b68(param_3,pcVar13,pcStack_f0,local_f8,param_4,param_5);
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

