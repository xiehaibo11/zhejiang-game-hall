
/* std::__ndk1::collate_byname<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */

void std::__ndk1::collate_byname<wchar_t>::do_transform(wchar_t *param_1,wchar_t *param_2)

{
  long lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  size_t __n;
  wchar_t *in_x2;
  ulong *in_x8;
  ulong uVar4;
  wchar_t *pwVar5;
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
  uVar9 = (long)in_x2 - (long)param_2 >> 2;
  local_70 = 0;
  local_68 = 0;
  local_60 = (wchar_t *)0x0;
  if (0x3fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 5) {
    local_70 = (ulong)((long)in_x2 - (long)param_2) >> 1 & 0xff;
    pwVar3 = (wchar_t *)((ulong)&local_70 | 4);
  }
  else {
    if (uVar9 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar4 = uVar9 + 4 & 0xfffffffffffffffc;
    pwVar3 = operator_new(uVar4 << 2);
    local_70 = uVar4 | 1;
    local_68 = uVar9;
    local_60 = pwVar3;
  }
  if (param_2 != in_x2) {
    uVar4 = (long)in_x2 + (-4 - (long)param_2);
    uVar9 = (uVar4 >> 2) + 1;
    pwVar5 = pwVar3;
    if (uVar9 < 8) {
LAB_01819ec4:
      do {
        pwVar7 = param_2 + 1;
        *pwVar5 = *param_2;
        param_2 = pwVar7;
        pwVar5 = pwVar5 + 1;
      } while (in_x2 != pwVar7);
    }
    else {
      uVar6 = uVar9 & 0x7ffffffffffffff8;
      pwVar5 = pwVar3 + 4;
      pwVar7 = param_2 + 4;
      uVar8 = uVar6;
      do {
        pwVar2 = pwVar7 + -2;
        uVar10 = *(undefined8 *)(pwVar7 + -4);
        uVar12 = *(undefined8 *)(pwVar7 + 2);
        uVar11 = *(undefined8 *)pwVar7;
        uVar8 = uVar8 - 8;
        pwVar7 = pwVar7 + 8;
        *(undefined8 *)(pwVar5 + -2) = *(undefined8 *)pwVar2;
        *(undefined8 *)(pwVar5 + -4) = uVar10;
        *(undefined8 *)(pwVar5 + 2) = uVar12;
        *(undefined8 *)pwVar5 = uVar11;
        pwVar5 = pwVar5 + 8;
      } while (uVar8 != 0);
      param_2 = param_2 + uVar6;
      pwVar5 = pwVar3 + uVar6;
      if (uVar9 != uVar6) goto LAB_01819ec4;
    }
    pwVar3 = (wchar_t *)((long)pwVar3 + (uVar4 & 0xfffffffffffffffc) + 4);
  }
  *pwVar3 = L'\0';
  pwVar3 = (wchar_t *)((ulong)&local_70 | 4);
  if ((local_70 & 1) != 0) {
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
    if (__n == 0) goto LAB_01819f78;
  }
  else {
    if (__n + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar9 = __n + 4 & 0xfffffffffffffffc;
    pwVar3 = operator_new(uVar9 << 2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)pwVar3;
    *in_x8 = uVar9 | 1;
  }
  wmemset(pwVar3,L'\0',__n);
LAB_01819f78:
  pwVar3[__n] = L'\0';
  pwVar3 = (wchar_t *)((ulong)&local_70 | 4);
  if ((local_70 & 1) != 0) {
    pwVar3 = local_60;
  }
  uVar9 = (ulong)(byte)((byte)*in_x8 >> 1);
  pwVar5 = (wchar_t *)((long)in_x8 + 4);
  if (((byte)*in_x8 & 1) != 0) {
    uVar9 = in_x8[1];
    pwVar5 = (wchar_t *)in_x8[2];
  }
  wcsxfrm(pwVar5,pwVar3,uVar9 + 1);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

