
/* std::__ndk1::collate_byname<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */

void std::__ndk1::collate_byname<wchar_t>::do_transform(wchar_t *param_1,wchar_t *param_2)

{
  long lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  size_t __n;
  wchar_t *in_x2;
  ulong *in_x8;
  ulong uVar5;
  ulong uVar6;
  wchar_t *pwVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_70;
  ulong local_68;
  wchar_t *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar8 = (long)in_x2 - (long)param_2;
  uVar9 = (long)uVar8 >> 2;
  local_68 = 0;
  local_60 = (wchar_t *)0x0;
  local_70 = 0;
  if (0x3fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 5) {
    uVar5 = uVar8 >> 1;
    local_70 = uVar5 & 0xff;
    pwVar3 = (wchar_t *)((ulong)&local_70 | 4);
  }
  else {
    if (uVar9 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar5 = uVar9 + 4 & 0xfffffffffffffffc;
    pwVar3 = operator_new(uVar5 << 2);
    uVar5 = uVar5 | 1;
    local_68 = uVar9;
    local_70 = uVar5;
    local_60 = pwVar3;
  }
  if (param_2 != in_x2) {
    uVar8 = (uVar8 - 4 >> 2) + 1;
    pwVar4 = pwVar3;
    if (7 < uVar8) {
      uVar6 = uVar8 & 0x7ffffffffffffff8;
      pwVar4 = pwVar3 + 4;
      pwVar3 = pwVar3 + uVar6;
      pwVar7 = param_2 + 4;
      uVar9 = uVar6;
      do {
        pwVar2 = pwVar7 + -2;
        uVar10 = *(undefined8 *)(pwVar7 + -4);
        uVar12 = *(undefined8 *)(pwVar7 + 2);
        uVar11 = *(undefined8 *)pwVar7;
        uVar9 = uVar9 - 8;
        pwVar7 = pwVar7 + 8;
        *(undefined8 *)(pwVar4 + -2) = *(undefined8 *)pwVar2;
        *(undefined8 *)(pwVar4 + -4) = uVar10;
        *(undefined8 *)(pwVar4 + 2) = uVar12;
        *(undefined8 *)pwVar4 = uVar11;
        pwVar4 = pwVar4 + 8;
      } while (uVar9 != 0);
      pwVar4 = pwVar3;
      param_2 = param_2 + uVar6;
      if (uVar8 == uVar6) goto LAB_011fa528;
    }
    do {
      pwVar7 = param_2 + 1;
      pwVar3 = pwVar4 + 1;
      *pwVar4 = *param_2;
      pwVar4 = pwVar3;
      param_2 = pwVar7;
    } while (in_x2 != pwVar7);
  }
LAB_011fa528:
  *pwVar3 = L'\0';
  pwVar3 = (wchar_t *)((ulong)&local_70 | 4);
  if ((uVar5 & 1) != 0) {
    pwVar3 = local_60;
  }
  __n = wcsxfrm((wchar_t *)0x0,pwVar3,0);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (0x3fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 5) {
    pwVar3 = (wchar_t *)((long)in_x8 + 4);
    *(byte *)in_x8 = (byte)((int)__n << 1);
    if (__n == 0) goto LAB_011fa5b4;
  }
  else {
    if (__n + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar8 = __n + 4 & 0xfffffffffffffffc;
    pwVar3 = operator_new(uVar8 << 2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)pwVar3;
    *in_x8 = uVar8 | 1;
  }
  wmemset(pwVar3,L'\0',__n);
LAB_011fa5b4:
  pwVar3[__n] = L'\0';
  pwVar3 = (wchar_t *)((ulong)&local_70 | 4);
  if ((local_70 & 1) != 0) {
    pwVar3 = local_60;
  }
  uVar8 = (ulong)(byte)((byte)*in_x8 >> 1);
  pwVar4 = (wchar_t *)((long)in_x8 + 4);
  if (((byte)*in_x8 & 1) != 0) {
    uVar8 = in_x8[1];
    pwVar4 = (wchar_t *)in_x8[2];
  }
  wcsxfrm(pwVar4,pwVar3,uVar8 + 1);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

