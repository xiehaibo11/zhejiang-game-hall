
/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, unsigned long) const */

void __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  char acStack_90 [8];
  __shared_count *local_88;
  char *local_80;
  char *pcStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_6c = 0;
  local_70 = 0x25;
  uVar2 = *(uint *)(param_3 + 8);
  if ((uVar2 >> 0xb & 1) == 0) {
    puVar7 = (undefined1 *)((ulong)&local_70 | 1);
  }
  else {
    puVar7 = (undefined1 *)((ulong)&local_70 | 2);
    local_70 = 0x2b25;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *puVar7 = 0x23;
    puVar7 = puVar7 + 1;
  }
  *puVar7 = 0x6c;
  if ((uVar2 & 0x4a) == 0x40) {
    uVar8 = 0x6f;
  }
  else if ((uVar2 & 0x4a) == 8) {
    uVar8 = 0x78;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = 0x58;
    }
  }
  else {
    uVar8 = 0x75;
  }
  puVar7[1] = uVar8;
  uVar11 = (ulong)(*(uint *)(param_3 + 8) >> 9) & 1 | 0x16;
  uVar1 = uVar11 + 1;
  lVar5 = -((ulong)((int)uVar1 + 0xf) & 0x30);
  pcVar9 = acStack_90 + lVar5;
  if (((DAT_017942d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_017942d8), iVar6 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
  }
  iVar6 = __libcpp_snprintf_l(pcVar9,uVar1,(__locale_t *)DAT_017942d0,(char *)&local_70,param_5);
  uVar2 = *(uint *)(param_3 + 8) & 0xb0;
  pcVar10 = pcVar9 + iVar6;
  if ((uVar2 != 0x20) && (pcVar10 = pcVar9, uVar2 == 0x10)) {
    cVar3 = *pcVar9;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar10 = acStack_90 + lVar5 + 1;
    }
    else if (((1 < iVar6) && (cVar3 == '0')) && ((byte)(acStack_90[lVar5 + 1] | 0x20U) == 0x78)) {
      pcVar10 = acStack_90 + lVar5 + 2;
    }
  }
  ios_base::getloc();
  __num_put<char>::__widen_and_group_int
            (pcVar9,pcVar10,pcVar9 + iVar6,
             pcVar9 + -((ulong)((int)uVar11 * 2 - 1) + 0xf & 0x1fffffff0),&pcStack_78,&local_80,
             (locale *)&local_88);
  __shared_count::__release_shared(local_88);
  FUN_00914b68(param_2,pcVar9 + -((ulong)((int)uVar11 * 2 - 1) + 0xf & 0x1fffffff0),pcStack_78,
               local_80,param_3,param_4);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

