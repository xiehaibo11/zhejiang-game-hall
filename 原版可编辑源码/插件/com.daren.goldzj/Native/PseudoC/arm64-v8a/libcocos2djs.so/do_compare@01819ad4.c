
/* std::__ndk1::collate_byname<wchar_t>::do_compare(wchar_t const*, wchar_t const*, wchar_t const*,
   wchar_t const*) const */

uint __thiscall
std::__ndk1::collate_byname<wchar_t>::do_compare
          (collate_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  long lVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  ulong uVar8;
  wchar_t *pwVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_88;
  ulong local_80;
  wchar_t *local_78;
  ulong local_70;
  ulong local_68;
  wchar_t *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar11 = (long)param_2 - (long)param_1 >> 2;
  local_70 = 0;
  local_68 = 0;
  local_60 = (wchar_t *)0x0;
  if (0x3fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 5) {
    local_70 = (ulong)((long)param_2 - (long)param_1) >> 1 & 0xff;
    pwVar4 = (wchar_t *)((ulong)&local_70 | 4);
  }
  else {
    if (uVar11 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar5 = uVar11 + 4 & 0xfffffffffffffffc;
    pwVar4 = operator_new(uVar5 << 2);
    local_70 = uVar5 | 1;
    local_68 = uVar11;
    local_60 = pwVar4;
  }
  if (param_1 != param_2) {
    uVar5 = (long)param_2 + (-4 - (long)param_1);
    uVar11 = (uVar5 >> 2) + 1;
    pwVar7 = pwVar4;
    if (uVar11 < 8) {
LAB_01819bdc:
      do {
        pwVar9 = param_1 + 1;
        *pwVar7 = *param_1;
        param_1 = pwVar9;
        pwVar7 = pwVar7 + 1;
      } while (param_2 != pwVar9);
    }
    else {
      uVar8 = uVar11 & 0x7ffffffffffffff8;
      pwVar7 = pwVar4 + 4;
      pwVar9 = param_1 + 4;
      uVar10 = uVar8;
      do {
        pwVar2 = pwVar9 + -2;
        uVar12 = *(undefined8 *)(pwVar9 + -4);
        uVar14 = *(undefined8 *)(pwVar9 + 2);
        uVar13 = *(undefined8 *)pwVar9;
        uVar10 = uVar10 - 8;
        pwVar9 = pwVar9 + 8;
        *(undefined8 *)(pwVar7 + -2) = *(undefined8 *)pwVar2;
        *(undefined8 *)(pwVar7 + -4) = uVar12;
        *(undefined8 *)(pwVar7 + 2) = uVar14;
        *(undefined8 *)pwVar7 = uVar13;
        pwVar7 = pwVar7 + 8;
      } while (uVar10 != 0);
      param_1 = param_1 + uVar8;
      pwVar7 = pwVar4 + uVar8;
      if (uVar11 != uVar8) goto LAB_01819bdc;
    }
    pwVar4 = (wchar_t *)((long)pwVar4 + (uVar5 & 0xfffffffffffffffc) + 4);
  }
  uVar11 = (long)param_4 - (long)param_3 >> 2;
  *pwVar4 = L'\0';
  local_88 = 0;
  local_80 = 0;
  local_78 = (wchar_t *)0x0;
  if (0x3fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 5) {
    local_88 = (ulong)((long)param_4 - (long)param_3) >> 1 & 0xff;
    pwVar4 = (wchar_t *)((ulong)&local_88 | 4);
  }
  else {
    if (uVar11 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar5 = uVar11 + 4 & 0xfffffffffffffffc;
    pwVar4 = operator_new(uVar5 << 2);
    local_88 = uVar5 | 1;
    local_80 = uVar11;
    local_78 = pwVar4;
  }
  if (param_3 == param_4) goto LAB_01819ce0;
  uVar5 = (long)param_4 + (-4 - (long)param_3);
  uVar11 = (uVar5 >> 2) + 1;
  pwVar7 = pwVar4;
  if (uVar11 < 8) {
LAB_01819cc4:
    do {
      pwVar9 = param_3 + 1;
      *pwVar7 = *param_3;
      param_3 = pwVar9;
      pwVar7 = pwVar7 + 1;
    } while (param_4 != pwVar9);
  }
  else {
    uVar8 = uVar11 & 0x7ffffffffffffff8;
    pwVar7 = pwVar4 + 4;
    pwVar9 = param_3 + 4;
    uVar10 = uVar8;
    do {
      pwVar2 = pwVar9 + -2;
      uVar12 = *(undefined8 *)(pwVar9 + -4);
      uVar14 = *(undefined8 *)(pwVar9 + 2);
      uVar13 = *(undefined8 *)pwVar9;
      uVar10 = uVar10 - 8;
      pwVar9 = pwVar9 + 8;
      *(undefined8 *)(pwVar7 + -2) = *(undefined8 *)pwVar2;
      *(undefined8 *)(pwVar7 + -4) = uVar12;
      *(undefined8 *)(pwVar7 + 2) = uVar14;
      *(undefined8 *)pwVar7 = uVar13;
      pwVar7 = pwVar7 + 8;
    } while (uVar10 != 0);
    param_3 = param_3 + uVar8;
    pwVar7 = pwVar4 + uVar8;
    if (uVar11 != uVar8) goto LAB_01819cc4;
  }
  pwVar4 = (wchar_t *)((long)pwVar4 + (uVar5 & 0xfffffffffffffffc) + 4);
LAB_01819ce0:
  *pwVar4 = L'\0';
  pwVar4 = (wchar_t *)((ulong)&local_70 | 4);
  if ((local_70 & 1) != 0) {
    pwVar4 = local_60;
  }
  pwVar7 = (wchar_t *)((ulong)&local_88 | 4);
  if ((local_88 & 1) != 0) {
    pwVar7 = local_78;
  }
  iVar3 = wcscoll(pwVar4,pwVar7);
  uVar6 = (uint)(iVar3 != 0);
  if (iVar3 < 0) {
    uVar6 = 0xffffffff;
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

