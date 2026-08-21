
/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, void const*) const */

void __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  __shared_count *local_b8;
  char local_ac [8];
  char acStack_a4 [40];
  char local_7c [20];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_ac[4] = '\0';
  local_ac[5] = '\0';
  local_ac[0] = '%';
  local_ac[1] = 'p';
  local_ac[2] = '\0';
  local_ac[3] = '\0';
  if (((DAT_01d52dc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_01d52dc8), iVar5 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  iVar5 = __libcpp_snprintf_l(local_7c,0x14,(__locale_t *)DAT_01d52dc0,local_ac,param_5);
  pcVar1 = local_7c + iVar5;
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar7 = pcVar1;
  if (uVar2 == 0x20) goto LAB_01803ef4;
  if (uVar2 == 0x10) {
    if ((local_7c[0] == '-') || (local_7c[0] == '+')) {
      pcVar7 = (char *)((ulong)local_7c | 1);
      goto LAB_01803ef4;
    }
    if ((1 < iVar5) && ((local_7c[0] == '0' && ((byte)(local_7c[1] | 0x20U) == 0x78)))) {
      pcVar7 = (char *)((ulong)local_7c | 2);
      goto LAB_01803ef4;
    }
  }
  pcVar7 = local_7c;
LAB_01803ef4:
  ios_base::getloc();
  plVar6 = (long *)locale::use_facet((locale *)&local_b8,(id *)&ctype<char>::id);
  __shared_count::__release_shared(local_b8);
  (**(code **)(*plVar6 + 0x40))(plVar6,local_7c,pcVar1,acStack_a4);
  pcVar3 = acStack_a4 + iVar5;
  if (pcVar7 != pcVar1) {
    pcVar3 = pcVar7 + (long)(acStack_a4 + -(long)local_7c);
  }
  FUN_00886dfc(param_2,acStack_a4,pcVar3,acStack_a4 + iVar5,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

