
/* std::__ndk1::collate<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */

wchar_t * std::__ndk1::collate<wchar_t>::do_transform(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t *in_x2;
  ulong *in_x8;
  ulong uVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  ulong uVar6;
  wchar_t *pwVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  uVar8 = (long)in_x2 - (long)param_2 >> 2;
  in_x8[2] = 0;
  if (0x3fffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar8 < 5) {
    pwVar7 = (wchar_t *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((ulong)((long)in_x2 - (long)param_2) >> 1);
  }
  else {
    if (uVar8 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar2 = uVar8 + 4 & 0xfffffffffffffffc;
    pwVar7 = operator_new(uVar2 << 2);
    in_x8[1] = uVar8;
    in_x8[2] = (ulong)pwVar7;
    *in_x8 = uVar2 | 1;
    param_1 = pwVar7;
  }
  if (param_2 == in_x2) goto LAB_017f9d50;
  uVar2 = (long)in_x2 + (-4 - (long)param_2);
  uVar8 = (uVar2 >> 2) + 1;
  pwVar3 = pwVar7;
  if (uVar8 < 8) {
LAB_017f9d34:
    do {
      pwVar5 = param_2 + 1;
      *pwVar3 = *param_2;
      param_2 = pwVar5;
      pwVar3 = pwVar3 + 1;
    } while (in_x2 != pwVar5);
  }
  else {
    uVar4 = uVar8 & 0x7ffffffffffffff8;
    pwVar3 = pwVar7 + 4;
    pwVar5 = param_2 + 4;
    uVar6 = uVar4;
    do {
      pwVar1 = pwVar5 + -2;
      uVar9 = *(undefined8 *)(pwVar5 + -4);
      uVar11 = *(undefined8 *)(pwVar5 + 2);
      uVar10 = *(undefined8 *)pwVar5;
      uVar6 = uVar6 - 8;
      pwVar5 = pwVar5 + 8;
      *(undefined8 *)(pwVar3 + -2) = *(undefined8 *)pwVar1;
      *(undefined8 *)(pwVar3 + -4) = uVar9;
      *(undefined8 *)(pwVar3 + 2) = uVar11;
      *(undefined8 *)pwVar3 = uVar10;
      pwVar3 = pwVar3 + 8;
    } while (uVar6 != 0);
    param_2 = param_2 + uVar4;
    pwVar3 = pwVar7 + uVar4;
    if (uVar8 != uVar4) goto LAB_017f9d34;
  }
  pwVar7 = (wchar_t *)((long)pwVar7 + (uVar2 & 0xfffffffffffffffc) + 4);
LAB_017f9d50:
  *pwVar7 = L'\0';
  return param_1;
}

