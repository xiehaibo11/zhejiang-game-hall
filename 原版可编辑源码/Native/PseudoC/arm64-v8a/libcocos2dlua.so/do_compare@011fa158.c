
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
  wchar_t *pwVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  wchar_t *pwVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_98;
  ulong local_90;
  wchar_t *local_88;
  ulong local_80;
  ulong local_78;
  wchar_t *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar11 = (long)param_2 - (long)param_1;
  uVar12 = (long)uVar11 >> 2;
  local_78 = 0;
  local_70 = (wchar_t *)0x0;
  local_80 = 0;
  if (0x3fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar12 < 5) {
    uVar10 = uVar11 >> 1;
    local_80 = uVar10 & 0xff;
    pwVar4 = (wchar_t *)((ulong)&local_80 | 4);
  }
  else {
    if (uVar12 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar10 = uVar12 + 4 & 0xfffffffffffffffc;
    pwVar4 = operator_new(uVar10 << 2);
    uVar10 = uVar10 | 1;
    local_78 = uVar12;
    local_80 = uVar10;
    local_70 = pwVar4;
  }
  if (param_1 != param_2) {
    uVar11 = (uVar11 - 4 >> 2) + 1;
    pwVar5 = pwVar4;
    if (7 < uVar11) {
      uVar6 = uVar11 & 0x7ffffffffffffff8;
      pwVar5 = pwVar4 + 4;
      pwVar4 = pwVar4 + uVar6;
      pwVar9 = param_1 + 4;
      uVar12 = uVar6;
      do {
        pwVar2 = pwVar9 + -2;
        uVar13 = *(undefined8 *)(pwVar9 + -4);
        uVar15 = *(undefined8 *)(pwVar9 + 2);
        uVar14 = *(undefined8 *)pwVar9;
        uVar12 = uVar12 - 8;
        pwVar9 = pwVar9 + 8;
        *(undefined8 *)(pwVar5 + -2) = *(undefined8 *)pwVar2;
        *(undefined8 *)(pwVar5 + -4) = uVar13;
        *(undefined8 *)(pwVar5 + 2) = uVar15;
        *(undefined8 *)pwVar5 = uVar14;
        pwVar5 = pwVar5 + 8;
      } while (uVar12 != 0);
      pwVar5 = pwVar4;
      param_1 = param_1 + uVar6;
      if (uVar11 == uVar6) goto LAB_011fa26c;
    }
    do {
      pwVar9 = param_1 + 1;
      pwVar4 = pwVar5 + 1;
      *pwVar5 = *param_1;
      pwVar5 = pwVar4;
      param_1 = pwVar9;
    } while (param_2 != pwVar9);
  }
LAB_011fa26c:
  uVar11 = (long)param_4 - (long)param_3;
  uVar12 = (long)uVar11 >> 2;
  *pwVar4 = L'\0';
  local_90 = 0;
  local_88 = (wchar_t *)0x0;
  local_98 = 0;
  if (0x3fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar12 < 5) {
    uVar6 = uVar11 >> 1;
    local_98 = uVar6 & 0xff;
    pwVar4 = (wchar_t *)((ulong)&local_98 | 4);
  }
  else {
    if (uVar12 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar6 = uVar12 + 4 & 0xfffffffffffffffc;
    pwVar4 = operator_new(uVar6 << 2);
    uVar6 = uVar6 | 1;
    local_90 = uVar12;
    local_98 = uVar6;
    local_88 = pwVar4;
  }
  if (param_3 != param_4) {
    uVar11 = (uVar11 - 4 >> 2) + 1;
    pwVar5 = pwVar4;
    if (7 < uVar11) {
      uVar8 = uVar11 & 0x7ffffffffffffff8;
      pwVar5 = pwVar4 + 4;
      pwVar4 = pwVar4 + uVar8;
      pwVar9 = param_3 + 4;
      uVar12 = uVar8;
      do {
        pwVar2 = pwVar9 + -2;
        uVar13 = *(undefined8 *)(pwVar9 + -4);
        uVar15 = *(undefined8 *)(pwVar9 + 2);
        uVar14 = *(undefined8 *)pwVar9;
        uVar12 = uVar12 - 8;
        pwVar9 = pwVar9 + 8;
        *(undefined8 *)(pwVar5 + -2) = *(undefined8 *)pwVar2;
        *(undefined8 *)(pwVar5 + -4) = uVar13;
        *(undefined8 *)(pwVar5 + 2) = uVar15;
        *(undefined8 *)pwVar5 = uVar14;
        pwVar5 = pwVar5 + 8;
      } while (uVar12 != 0);
      pwVar5 = pwVar4;
      param_3 = param_3 + uVar8;
      if (uVar11 == uVar8) goto LAB_011fa340;
    }
    do {
      pwVar9 = param_3 + 1;
      pwVar4 = pwVar5 + 1;
      *pwVar5 = *param_3;
      pwVar5 = pwVar4;
      param_3 = pwVar9;
    } while (param_4 != pwVar9);
  }
LAB_011fa340:
  *pwVar4 = L'\0';
  pwVar4 = (wchar_t *)((ulong)&local_80 | 4);
  if ((uVar10 & 1) != 0) {
    pwVar4 = local_70;
  }
  pwVar5 = (wchar_t *)((ulong)&local_98 | 4);
  if ((uVar6 & 1) != 0) {
    pwVar5 = local_88;
  }
  iVar3 = wcscoll(pwVar4,pwVar5);
  uVar7 = (uint)(iVar3 != 0);
  if (iVar3 < 0) {
    uVar7 = 0xffffffff;
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

