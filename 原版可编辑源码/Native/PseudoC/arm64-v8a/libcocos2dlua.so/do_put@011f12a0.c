
/* WARNING: Removing unreachable block (ram,0x011f15f8) */
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
  __shared_count *p_Var4;
  bool bVar5;
  byte bVar6;
  undefined8 **__ptr;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  ctype *pcVar12;
  undefined8 **ppuVar13;
  char *local_150;
  char *pcStack_148;
  int local_13c;
  ulong local_138;
  ulong local_130;
  void *local_128;
  undefined8 ***local_120;
  ulong local_118;
  void *local_110;
  undefined8 **local_108;
  undefined8 local_100;
  void *local_f8;
  char local_f0 [4];
  char local_ec [4];
  __shared_count *local_e8;
  pattern apStack_e0 [8];
  undefined8 *local_d8;
  code *local_d0;
  undefined8 uStack_c8;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  ios_base::getloc();
  p_Var4 = local_e8;
  local_d8 = &ctype<char>::id;
  uStack_c8 = 0;
  local_d0 = locale::id::__init;
  if (ctype<char>::id != -1) {
    local_108 = &local_d8;
    local_120 = &local_108;
    __call_once((ulong *)&ctype<char>::id,&local_120,FUN_01208130);
  }
  lVar11 = *(long *)(p_Var4 + 0x10);
  if (((ulong)(*(long *)(p_Var4 + 0x18) - lVar11 >> 3) <= (long)DAT_01794330 - 1U) ||
     (pcVar12 = *(ctype **)(lVar11 + ((long)DAT_01794330 - 1U) * 8), pcVar12 == (ctype *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  bVar2 = *param_6;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (uVar1 == 0) {
    bVar5 = false;
  }
  else {
    pbVar9 = *(byte **)(param_6 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_6 + 1;
    }
    bVar2 = *pbVar9;
    bVar6 = (**(code **)(*(long *)pcVar12 + 0x38))(pcVar12,0x2d);
    bVar5 = bVar2 == bVar6;
  }
  local_100 = 0;
  local_f8 = (void *)0x0;
  local_110 = (void *)0x0;
  local_108 = (undefined8 **)0x0;
  local_120 = (undefined8 ***)0x0;
  local_118 = 0;
  local_130 = 0;
  local_128 = (void *)0x0;
  local_138 = 0;
  __money_put<char>::__gather_info
            ((bool)(param_3 & 1),bVar5,(locale *)&local_e8,apStack_e0,local_ec,local_f0,
             (basic_string *)&local_108,(basic_string *)&local_120,(basic_string *)&local_138,
             &local_13c);
  bVar2 = *param_6;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (local_13c < (int)uVar1) {
    uVar8 = (ulong)((byte)local_138._0_1_ >> 1);
    if ((local_138 & 1) != 0) {
      uVar8 = local_130;
    }
    uVar10 = (ulong)((byte)local_120._0_1_ >> 1);
    if (((ulong)local_120 & 1) != 0) {
      uVar10 = local_118;
    }
    lVar11 = (uVar1 * 2 - (long)local_13c) + 1;
  }
  else {
    uVar8 = (ulong)((byte)local_138._0_1_ >> 1);
    if ((local_138 & 1) != 0) {
      uVar8 = local_130;
    }
    uVar10 = (ulong)((byte)local_120._0_1_ >> 1);
    if (((ulong)local_120 & 1) != 0) {
      uVar10 = local_118;
    }
    lVar11 = (long)local_13c + 2;
  }
  __size = lVar11 + uVar8 + uVar10;
  if (__size < 0x65) {
    __ptr = (undefined8 **)0x0;
    ppuVar13 = &local_d8;
  }
  else {
    __ptr = malloc(__size);
    ppuVar13 = __ptr;
    if (__ptr == (undefined8 **)0x0) {
      uVar7 = __throw_bad_alloc();
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      if (((ulong)local_120 & 1) != 0) {
        operator_delete(local_110);
      }
      if (((ulong)local_108 & 1) != 0) {
        operator_delete(local_f8);
      }
      __shared_count::__release_shared(local_e8);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar7);
    }
  }
  pbVar9 = *(byte **)(param_6 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar9 = param_6 + 1;
  }
  __money_put<char>::__format
            ((char *)ppuVar13,&pcStack_148,&local_150,*(uint *)(param_4 + 8),(char *)pbVar9,
             (char *)(pbVar9 + uVar1),pcVar12,bVar5,apStack_e0,local_ec[0],local_f0[0],
             (basic_string *)&local_108,(basic_string *)&local_120,(basic_string *)&local_138,
             local_13c);
  uVar7 = FUN_00914b68(param_2,ppuVar13,pcStack_148,local_150,param_4,param_5);
  if (__ptr != (undefined8 **)0x0) {
    free(__ptr);
  }
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if (((ulong)local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if (((ulong)local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  __shared_count::__release_shared(local_e8);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

