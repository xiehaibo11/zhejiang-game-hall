
/* std::__ndk1::collate<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */

wchar_t * std::__ndk1::collate<wchar_t>::do_transform(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t *in_x2;
  ulong *in_x8;
  ulong uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = (long)in_x2 - (long)param_2;
  *in_x8 = 0;
  in_x8[1] = 0;
  uVar7 = (long)uVar6 >> 2;
  in_x8[2] = 0;
  if (0x3fffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 5) {
    pwVar5 = (wchar_t *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)(uVar6 >> 1);
  }
  else {
    if (uVar7 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar2 = uVar7 + 4 & 0xfffffffffffffffc;
    pwVar5 = operator_new(uVar2 << 2);
    in_x8[1] = uVar7;
    in_x8[2] = (ulong)pwVar5;
    *in_x8 = uVar2 | 1;
    param_1 = pwVar5;
  }
  if (param_2 != in_x2) {
    uVar6 = (uVar6 - 4 >> 2) + 1;
    pwVar3 = pwVar5;
    if (7 < uVar6) {
      uVar2 = uVar6 & 0x7ffffffffffffff8;
      pwVar3 = pwVar5 + 4;
      pwVar5 = pwVar5 + uVar2;
      pwVar4 = param_2 + 4;
      uVar7 = uVar2;
      do {
        pwVar1 = pwVar4 + -2;
        uVar8 = *(undefined8 *)(pwVar4 + -4);
        uVar10 = *(undefined8 *)(pwVar4 + 2);
        uVar9 = *(undefined8 *)pwVar4;
        uVar7 = uVar7 - 8;
        pwVar4 = pwVar4 + 8;
        *(undefined8 *)(pwVar3 + -2) = *(undefined8 *)pwVar1;
        *(undefined8 *)(pwVar3 + -4) = uVar8;
        *(undefined8 *)(pwVar3 + 2) = uVar10;
        *(undefined8 *)pwVar3 = uVar9;
        pwVar3 = pwVar3 + 8;
      } while (uVar7 != 0);
      param_2 = param_2 + uVar2;
      pwVar3 = pwVar5;
      if (uVar6 == uVar2) goto LAB_011dc780;
    }
    do {
      pwVar4 = param_2 + 1;
      pwVar5 = pwVar3 + 1;
      *pwVar3 = *param_2;
      param_2 = pwVar4;
      pwVar3 = pwVar5;
    } while (in_x2 != pwVar4);
  }
LAB_011dc780:
  *pwVar5 = L'\0';
  return param_1;
}

