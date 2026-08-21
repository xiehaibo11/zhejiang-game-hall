
/* WARNING: Removing unreachable block (ram,0x01803d90) */
/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, long double) const */

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
  __shared_count *local_f0;
  char *local_e8;
  char *pcStack_e0;
  char *local_d8;
  undefined8 local_d0;
  char acStack_c4 [60];
  char local_88 [32];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_d0 = 0x25;
  uVar3 = *(uint *)(param_4 + 8);
  if ((uVar3 >> 0xb & 1) == 0) {
    puVar10 = (undefined2 *)((ulong)&local_d0 | 1);
  }
  else {
    puVar10 = (undefined2 *)((ulong)&local_d0 | 2);
    local_d0 = 0x2b25;
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
  local_d8 = local_88;
  if (((DAT_01d52dc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_01d52dc8), iVar8 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  if (bVar6) {
    iVar8 = __libcpp_snprintf_l(local_88,0x1e,(__locale_t *)DAT_01d52dc0,(char *)&local_d0,param_1,
                                (ulong)*(uint *)(param_4 + 0x10));
    if (0x1d < iVar8) goto LAB_01803b50;
LAB_01803b28:
    __ptr_00 = (char *)0x0;
  }
  else {
    iVar8 = __libcpp_snprintf_l(local_88,0x1e,(__locale_t *)DAT_01d52dc0,(char *)&local_d0,param_1);
    if (iVar8 < 0x1e) goto LAB_01803b28;
LAB_01803b50:
    if (bVar6) {
      if (((DAT_01d52dc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_01d52dc8), iVar8 != 0)) {
        DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_01d52dc8);
      }
      iVar8 = __libcpp_asprintf_l(&local_d8,(__locale_t *)DAT_01d52dc0,(char *)&local_d0,param_1,
                                  (ulong)*(uint *)(param_4 + 0x10));
    }
    else {
      if (((DAT_01d52dc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_01d52dc8), iVar8 != 0)) {
        DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_01d52dc8);
      }
      iVar8 = __libcpp_asprintf_l(&local_d8,(__locale_t *)DAT_01d52dc0,(char *)&local_d0,param_1);
    }
    __ptr_00 = local_d8;
    if (local_d8 == (char *)0x0) {
      uVar9 = __throw_bad_alloc();
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar9);
    }
  }
  pcVar7 = local_d8;
  pcVar1 = local_d8 + iVar8;
  uVar3 = *(uint *)(param_4 + 8) & 0xb0;
  pcVar12 = pcVar1;
  if ((uVar3 != 0x20) && (pcVar12 = local_d8, uVar3 == 0x10)) {
    cVar4 = *local_d8;
    if ((cVar4 == '-') || (cVar4 == '+')) {
      pcVar12 = local_d8 + 1;
    }
    else if (((1 < iVar8) && (cVar4 == '0')) && ((byte)(local_d8[1] | 0x20U) == 0x78)) {
      pcVar12 = local_d8 + 2;
    }
  }
  if (local_d8 != local_88) {
    __ptr = malloc((long)iVar8 << 1);
    pcVar13 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_01803c38;
    __throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar13 = acStack_c4;
LAB_01803c38:
  ios_base::getloc();
  __num_put<char>::__widen_and_group_float
            (pcVar7,pcVar12,pcVar1,pcVar13,&pcStack_e0,&local_e8,(locale *)&local_f0);
  __shared_count::__release_shared(local_f0);
  uVar9 = FUN_00886dfc(param_3,pcVar13,pcStack_e0,local_e8,param_4,param_5);
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (char *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

