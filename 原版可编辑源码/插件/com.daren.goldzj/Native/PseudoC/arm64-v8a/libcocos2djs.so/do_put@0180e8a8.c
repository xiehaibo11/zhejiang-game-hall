
/* WARNING: Removing unreachable block (ram,0x0180eb9c) */
/* std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined8 __thiscall
std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,undefined4 param_5,
      byte *param_6)

{
  size_t __size;
  ulong uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  ctype *pcVar6;
  char *__ptr;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  char *local_148;
  char *pcStack_140;
  int local_134;
  ulong local_130;
  ulong local_128;
  void *local_120;
  ulong local_118;
  ulong local_110;
  void *local_108;
  ulong local_100;
  undefined8 uStack_f8;
  void *local_f0;
  char local_e8 [4];
  char local_e4 [4];
  __shared_count *local_e0;
  pattern apStack_d8 [4];
  char acStack_d4 [100];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  ios_base::getloc();
  pcVar6 = (ctype *)locale::use_facet((locale *)&local_e0,(id *)&ctype<char>::id);
  bVar2 = *param_6;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (uVar1 == 0) {
    bVar4 = false;
  }
  else {
    pbVar9 = *(byte **)(param_6 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_6 + 1;
    }
    bVar2 = *pbVar9;
    bVar5 = (**(code **)(*(long *)pcVar6 + 0x38))(pcVar6,0x2d);
    bVar4 = bVar2 == bVar5;
  }
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  local_118 = 0;
  local_110 = 0;
  local_108 = (void *)0x0;
  local_130 = 0;
  local_128 = 0;
  local_120 = (void *)0x0;
  __money_put<char>::__gather_info
            ((bool)(param_3 & 1),bVar4,(locale *)&local_e0,apStack_d8,local_e4,local_e8,
             (basic_string *)&local_100,(basic_string *)&local_118,(basic_string *)&local_130,
             &local_134);
  bVar2 = *param_6;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (local_134 < (int)uVar1) {
    uVar8 = (ulong)((byte)local_130._0_1_ >> 1);
    if ((local_130 & 1) != 0) {
      uVar8 = local_128;
    }
    uVar10 = (ulong)((byte)local_118._0_1_ >> 1);
    if ((local_118 & 1) != 0) {
      uVar10 = local_110;
    }
    lVar11 = (uVar1 * 2 - (long)local_134) + 1;
  }
  else {
    uVar8 = (ulong)((byte)local_130._0_1_ >> 1);
    if ((local_130 & 1) != 0) {
      uVar8 = local_128;
    }
    uVar10 = (ulong)((byte)local_118._0_1_ >> 1);
    if ((local_118 & 1) != 0) {
      uVar10 = local_110;
    }
    lVar11 = (long)local_134 + 2;
  }
  __size = lVar11 + uVar8 + uVar10;
  if (__size < 0x65) {
    __ptr = (char *)0x0;
    pcVar12 = acStack_d4;
  }
  else {
    __ptr = malloc(__size);
    pcVar12 = __ptr;
    if (__ptr == (char *)0x0) {
      uVar7 = __throw_bad_alloc();
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
      }
      if ((local_118 & 1) != 0) {
        operator_delete(local_108);
      }
      if ((local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
      __shared_count::__release_shared(local_e0);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar7);
    }
  }
  pbVar9 = *(byte **)(param_6 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar9 = param_6 + 1;
  }
  __money_put<char>::__format
            (pcVar12,&pcStack_140,&local_148,*(uint *)(param_4 + 8),(char *)pbVar9,
             (char *)(pbVar9 + uVar1),pcVar6,bVar4,apStack_d8,local_e4[0],local_e8[0],
             (basic_string *)&local_100,(basic_string *)&local_118,(basic_string *)&local_130,
             local_134);
  uVar7 = FUN_00886dfc(param_2,pcVar12,pcStack_140,local_148,param_4,param_5);
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  __shared_count::__release_shared(local_e0);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

