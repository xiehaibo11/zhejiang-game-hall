
/* WARNING: Removing unreachable block (ram,0x0180fb8c) */
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
  bool bVar7;
  int iVar8;
  ctype *pcVar9;
  wchar_t *__ptr;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  wchar_t *pwVar14;
  wchar_t *local_278;
  wchar_t *pwStack_270;
  int local_264;
  ulong local_260;
  ulong local_258;
  void *local_250;
  ulong local_248;
  ulong local_240;
  void *local_238;
  ulong local_230;
  undefined8 uStack_228;
  void *local_220;
  wchar_t local_218;
  wchar_t wStack_214;
  __shared_count *local_210;
  pattern apStack_208 [8];
  wchar_t awStack_200 [100];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  ios_base::getloc();
  pcVar9 = (ctype *)locale::use_facet((locale *)&local_210,(id *)&ctype<wchar_t>::id);
  bVar5 = *param_6;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(param_6 + 8);
  }
  if (uVar2 == 0) {
    bVar7 = false;
  }
  else {
    pbVar1 = param_6 + 4;
    if ((bVar5 & 1) != 0) {
      pbVar1 = *(byte **)(param_6 + 0x10);
    }
    iVar4 = *(int *)pbVar1;
    iVar8 = (**(code **)(*(long *)pcVar9 + 0x58))(pcVar9,0x2d);
    bVar7 = iVar4 == iVar8;
  }
  local_230 = 0;
  uStack_228 = 0;
  local_220 = (void *)0x0;
  local_248 = 0;
  local_240 = 0;
  local_238 = (void *)0x0;
  local_260 = 0;
  local_258 = 0;
  local_250 = (void *)0x0;
  __money_put<wchar_t>::__gather_info
            ((bool)(param_3 & 1),bVar7,(locale *)&local_210,apStack_208,&wStack_214,&local_218,
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
    if ((local_248 & 1) != 0) {
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
    if ((local_248 & 1) != 0) {
      uVar12 = local_240;
    }
    lVar13 = (long)local_264 + 2;
  }
  uVar12 = lVar13 + uVar11 + uVar12;
  if (uVar12 < 0x65) {
    __ptr = (wchar_t *)0x0;
    pwVar14 = awStack_200;
  }
  else {
    __ptr = malloc(uVar12 * 4);
    pwVar14 = __ptr;
    if (__ptr == (wchar_t *)0x0) {
      uVar10 = __throw_bad_alloc();
      if ((local_260 & 1) != 0) {
        operator_delete(local_250);
      }
      if ((local_248 & 1) != 0) {
        operator_delete(local_238);
      }
      if ((local_230 & 1) != 0) {
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
            (pwVar14,&pwStack_270,&local_278,*(uint *)(param_4 + 8),pwVar3,pwVar3 + uVar2,pcVar9,
             bVar7,apStack_208,wStack_214,local_218,(basic_string *)&local_230,
             (basic_string *)&local_248,(basic_string *)&local_260,local_264);
  uVar10 = FUN_01804780(param_2,pwVar14,pwStack_270,local_278,param_4,param_5);
  if (__ptr != (wchar_t *)0x0) {
    free(__ptr);
  }
  if ((local_260 & 1) != 0) {
    operator_delete(local_250);
  }
  if ((local_248 & 1) != 0) {
    operator_delete(local_238);
  }
  if ((local_230 & 1) != 0) {
    operator_delete(local_220);
  }
  __shared_count::__release_shared(local_210);
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

