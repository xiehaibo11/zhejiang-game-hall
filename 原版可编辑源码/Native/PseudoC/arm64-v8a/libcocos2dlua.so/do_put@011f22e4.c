
/* WARNING: Removing unreachable block (ram,0x011f2644) */
/* std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, wchar_t,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&) const */

undefined8 __thiscall
std::__ndk1::
money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_put(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,undefined4 param_5,
      byte *param_6)

{
  byte *pbVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  __shared_count *p_Var7;
  bool bVar8;
  int iVar9;
  undefined8 **__ptr;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ctype *pcVar14;
  undefined8 **ppuVar15;
  wchar_t *local_278;
  wchar_t *pwStack_270;
  int local_264;
  ulong local_260;
  ulong local_258;
  void *local_250;
  undefined8 ***local_248;
  ulong local_240;
  void *local_238;
  undefined8 **local_230;
  undefined8 local_228;
  void *local_220;
  wchar_t local_218;
  wchar_t wStack_214;
  __shared_count *local_210;
  pattern apStack_208 [8];
  undefined8 *local_200;
  code *local_1f8;
  undefined8 uStack_1f0;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  ios_base::getloc();
  p_Var7 = local_210;
  local_200 = &ctype<wchar_t>::id;
  uStack_1f0 = 0;
  local_1f8 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_230 = &local_200;
    local_248 = &local_230;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_248,FUN_01208130);
  }
  lVar13 = *(long *)(p_Var7 + 0x10);
  if (((ulong)(*(long *)(p_Var7 + 0x18) - lVar13 >> 3) <= (long)DAT_01794320 - 1U) ||
     (pcVar14 = *(ctype **)(lVar13 + ((long)DAT_01794320 - 1U) * 8), pcVar14 == (ctype *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  bVar5 = *param_6;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(param_6 + 8);
  }
  if (uVar2 == 0) {
    bVar8 = false;
  }
  else {
    pbVar1 = param_6 + 4;
    if ((bVar5 & 1) != 0) {
      pbVar1 = *(byte **)(param_6 + 0x10);
    }
    iVar4 = *(int *)pbVar1;
    iVar9 = (**(code **)(*(long *)pcVar14 + 0x58))(pcVar14,0x2d);
    bVar8 = iVar4 == iVar9;
  }
  local_228 = 0;
  local_220 = (void *)0x0;
  local_238 = (void *)0x0;
  local_230 = (undefined8 **)0x0;
  local_248 = (undefined8 ***)0x0;
  local_240 = 0;
  local_258 = 0;
  local_250 = (void *)0x0;
  local_260 = 0;
  __money_put<wchar_t>::__gather_info
            ((bool)(param_3 & 1),bVar8,(locale *)&local_210,apStack_208,&wStack_214,&local_218,
             (basic_string *)&local_230,(basic_string *)&local_248,(basic_string *)&local_260,
             &local_264);
  bVar5 = *param_6;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(param_6 + 8);
  }
  if (local_264 < (int)uVar2) {
    uVar11 = (ulong)((byte)local_260._0_1_ >> 1);
    if ((local_260 & 1) != 0) {
      uVar11 = local_258;
    }
    uVar12 = (ulong)((byte)local_248._0_1_ >> 1);
    if (((ulong)local_248 & 1) != 0) {
      uVar12 = local_240;
    }
    lVar13 = (uVar2 * 2 - (long)local_264) + 1;
  }
  else {
    uVar11 = (ulong)((byte)local_260._0_1_ >> 1);
    if ((local_260 & 1) != 0) {
      uVar11 = local_258;
    }
    uVar12 = (ulong)((byte)local_248._0_1_ >> 1);
    if (((ulong)local_248 & 1) != 0) {
      uVar12 = local_240;
    }
    lVar13 = (long)local_264 + 2;
  }
  uVar12 = lVar13 + uVar11 + uVar12;
  if (uVar12 < 0x65) {
    __ptr = (undefined8 **)0x0;
    ppuVar15 = &local_200;
  }
  else {
    __ptr = malloc(uVar12 * 4);
    ppuVar15 = __ptr;
    if (__ptr == (undefined8 **)0x0) {
      uVar10 = __throw_bad_alloc();
      if ((local_260 & 1) != 0) {
        operator_delete(local_250);
      }
      if (((ulong)local_248 & 1) != 0) {
        operator_delete(local_238);
      }
      if (((ulong)local_230 & 1) != 0) {
        operator_delete(local_220);
      }
      __shared_count::__release_shared(local_210);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar10);
    }
  }
  pwVar3 = (wchar_t *)(param_6 + 4);
  if ((bVar5 & 1) != 0) {
    pwVar3 = *(wchar_t **)(param_6 + 0x10);
  }
  __money_put<wchar_t>::__format
            ((wchar_t *)ppuVar15,&pwStack_270,&local_278,*(uint *)(param_4 + 8),pwVar3,
             pwVar3 + uVar2,pcVar14,bVar8,apStack_208,wStack_214,local_218,
             (basic_string *)&local_230,(basic_string *)&local_248,(basic_string *)&local_260,
             local_264);
  uVar10 = FUN_011e6874(param_2,ppuVar15,pwStack_270,local_278,param_4,param_5);
  if (__ptr != (undefined8 **)0x0) {
    free(__ptr);
  }
  if ((local_260 & 1) != 0) {
    operator_delete(local_250);
  }
  if (((ulong)local_248 & 1) != 0) {
    operator_delete(local_238);
  }
  if (((ulong)local_230 & 1) != 0) {
    operator_delete(local_220);
  }
  __shared_count::__release_shared(local_210);
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

