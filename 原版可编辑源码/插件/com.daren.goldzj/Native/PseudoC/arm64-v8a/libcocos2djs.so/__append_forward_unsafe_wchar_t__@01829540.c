
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >& std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t>
   >::__append_forward_unsafe<wchar_t*>(wchar_t*, wchar_t*) */

basic_string * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__append_forward_unsafe<wchar_t*>
          (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
           *this,wchar_t *param_1,wchar_t *param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  long lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  ulong uVar9;
  wchar_t *pwVar10;
  ulong uVar11;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar12;
  wchar_t *pwVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong local_60;
  ulong local_58;
  wchar_t *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar14 = (ulong)((byte)bVar1 >> 1);
    uVar5 = 4;
    uVar6 = (ulong)(byte)bVar1;
  }
  else {
    uVar6 = *(ulong *)this;
    uVar14 = *(ulong *)(this + 8);
    uVar5 = (uVar6 & 0xfffffffffffffffe) - 1;
  }
  uVar11 = (long)param_2 - (long)param_1;
  if (uVar11 == 0) goto LAB_018297f0;
  if (((byte)bVar1 & 1) == 0) {
    pbVar7 = this + 4;
    uVar9 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar9 = *(ulong *)(this + 8);
    pbVar7 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar15 = (long)uVar11 >> 2;
  if ((pbVar7 <= param_1) && (param_1 < pbVar7 + uVar9 * 4)) {
    local_60 = 0;
    local_58 = 0;
    local_50 = (wchar_t *)0x0;
    if (0x3fffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (uVar15 < 5) {
      local_60 = uVar11 >> 1 & 0xff;
      pwVar4 = (wchar_t *)((ulong)&local_60 | 4);
    }
    else {
      if (uVar15 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      uVar6 = uVar15 + 4 & 0xfffffffffffffffc;
      pwVar4 = operator_new(uVar6 << 2);
      local_60 = uVar6 | 1;
      local_58 = uVar15;
      local_50 = pwVar4;
    }
    if (param_1 != param_2) {
      uVar14 = (long)param_2 + (-4 - (long)param_1);
      uVar6 = (uVar14 >> 2) + 1;
      pwVar10 = pwVar4;
      if (uVar6 < 8) {
LAB_01829798:
        do {
          pwVar13 = param_1 + 1;
          *pwVar10 = *param_1;
          param_1 = pwVar13;
          pwVar10 = pwVar10 + 1;
        } while (param_2 != pwVar13);
      }
      else {
        uVar11 = uVar6 & 0x7ffffffffffffff8;
        pwVar10 = pwVar4 + 4;
        pwVar13 = param_1 + 4;
        uVar5 = uVar11;
        do {
          pwVar3 = pwVar13 + -2;
          uVar16 = *(undefined8 *)(pwVar13 + -4);
          uVar18 = *(undefined8 *)(pwVar13 + 2);
          uVar17 = *(undefined8 *)pwVar13;
          uVar5 = uVar5 - 8;
          pwVar13 = pwVar13 + 8;
          *(undefined8 *)(pwVar10 + -2) = *(undefined8 *)pwVar3;
          *(undefined8 *)(pwVar10 + -4) = uVar16;
          *(undefined8 *)(pwVar10 + 2) = uVar18;
          *(undefined8 *)pwVar10 = uVar17;
          pwVar10 = pwVar10 + 8;
        } while (uVar5 != 0);
        param_1 = param_1 + uVar11;
        pwVar10 = pwVar4 + uVar11;
        if (uVar6 != uVar11) goto LAB_01829798;
      }
      pwVar4 = (wchar_t *)((long)pwVar4 + (uVar14 & 0xfffffffffffffffc) + 4);
    }
    *pwVar4 = L'\0';
    uVar6 = local_60 >> 1 & 0x7f;
    pwVar4 = (wchar_t *)((ulong)&local_60 | 4);
    if ((local_60 & 1) != 0) {
      uVar6 = local_58;
      pwVar4 = local_50;
    }
    append(this,pwVar4,uVar6);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    goto LAB_018297f0;
  }
  if (uVar5 - uVar14 < uVar15) {
    __grow_by(this,uVar5,(uVar14 + uVar15) - uVar5,uVar14,uVar14,0,0);
    uVar6 = (ulong)(byte)*this;
  }
  if ((uVar6 & 1) == 0) {
    pbVar7 = this + 4;
  }
  else {
    pbVar7 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  pbVar8 = pbVar7 + uVar14 * 4;
  if (param_1 != param_2) {
    uVar5 = (ulong)((long)param_2 + (-4 - (long)param_1)) >> 2;
    uVar6 = uVar5 + 1;
    if ((uVar6 < 8) ||
       ((pbVar8 < (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)(param_1 + uVar5 + 1) && (param_1 < pbVar7 + (uVar14 + uVar5) * 4 + 4)))) {
LAB_018296d4:
      do {
        pwVar4 = param_1 + 1;
        *(wchar_t *)pbVar8 = *param_1;
        pbVar8 = pbVar8 + 4;
        param_1 = pwVar4;
      } while (param_2 != pwVar4);
    }
    else {
      uVar9 = uVar6 & 0x7ffffffffffffff8;
      pwVar4 = param_1 + 4;
      pbVar12 = pbVar7 + uVar14 * 4 + 0x10;
      uVar11 = uVar9;
      do {
        pwVar10 = pwVar4 + -2;
        uVar16 = *(undefined8 *)(pwVar4 + -4);
        uVar18 = *(undefined8 *)(pwVar4 + 2);
        uVar17 = *(undefined8 *)pwVar4;
        pwVar4 = pwVar4 + 8;
        uVar11 = uVar11 - 8;
        *(undefined8 *)(pbVar12 + -8) = *(undefined8 *)pwVar10;
        *(undefined8 *)(pbVar12 + -0x10) = uVar16;
        *(undefined8 *)(pbVar12 + 8) = uVar18;
        *(undefined8 *)pbVar12 = uVar17;
        pbVar12 = pbVar12 + 0x20;
      } while (uVar11 != 0);
      pbVar8 = pbVar8 + uVar9 * 4;
      param_1 = param_1 + uVar9;
      if (uVar6 != uVar9) goto LAB_018296d4;
    }
    pbVar8 = pbVar7 + (uVar14 + uVar5 + 1) * 4;
  }
  *(undefined4 *)pbVar8 = 0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)(uVar14 + uVar15) << 1,0);
  }
  else {
    *(ulong *)(this + 8) = uVar14 + uVar15;
  }
LAB_018297f0:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (basic_string *)this;
}

