
/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, void const*) const */

void __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  char *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  __shared_count *local_128;
  char local_120 [8];
  undefined1 auStack_118 [148];
  char local_84 [20];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_120[4] = '\0';
  local_120[5] = '\0';
  local_120[0] = '%';
  local_120[1] = 'p';
  local_120[2] = '\0';
  local_120[3] = '\0';
  if (((DAT_01d52dc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_01d52dc8), iVar5 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  iVar5 = __libcpp_snprintf_l(local_84,0x14,(__locale_t *)DAT_01d52dc0,local_120,param_5);
  pcVar1 = local_84 + iVar5;
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar7 = pcVar1;
  if (uVar2 == 0x20) goto LAB_01805f98;
  if (uVar2 == 0x10) {
    if ((local_84[0] == '-') || (local_84[0] == '+')) {
      pcVar7 = (char *)((ulong)local_84 | 1);
      goto LAB_01805f98;
    }
    if ((1 < iVar5) && ((local_84[0] == '0' && ((byte)(local_84[1] | 0x20U) == 0x78)))) {
      pcVar7 = (char *)((ulong)local_84 | 2);
      goto LAB_01805f98;
    }
  }
  pcVar7 = local_84;
LAB_01805f98:
  ios_base::getloc();
  plVar6 = (long *)locale::use_facet((locale *)&local_128,(id *)&ctype<wchar_t>::id);
  __shared_count::__release_shared(local_128);
  (**(code **)(*plVar6 + 0x60))(plVar6,local_84,pcVar1,auStack_118);
  puVar3 = auStack_118 + (long)iVar5 * 4;
  if (pcVar7 != pcVar1) {
    puVar3 = auStack_118 + ((long)pcVar7 - (long)local_84) * 4;
  }
  FUN_01804780(param_2,auStack_118,puVar3,auStack_118 + (long)iVar5 * 4,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

