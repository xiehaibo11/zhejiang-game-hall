
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
  wchar_t *pwVar5;
  ulong uVar6;
  ulong uVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  ulong uVar10;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar11;
  ulong uVar12;
  wchar_t *pwVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong local_70;
  ulong local_68;
  wchar_t *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar14 = (ulong)((byte)bVar1 >> 1);
    uVar6 = 4;
    uVar7 = (ulong)(byte)bVar1;
  }
  else {
    uVar7 = *(ulong *)this;
    uVar14 = *(ulong *)(this + 8);
    uVar6 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  uVar12 = (long)param_2 - (long)param_1;
  if (uVar12 == 0) goto LAB_012095f0;
  if (((byte)bVar1 & 1) == 0) {
    pbVar11 = this + 4;
    uVar10 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar10 = *(ulong *)(this + 8);
    pbVar11 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                **)(this + 0x10);
  }
  uVar15 = (long)uVar12 >> 2;
  if ((param_1 < pbVar11) || (pbVar11 + uVar10 * 4 <= param_1)) {
    if (uVar6 - uVar14 < uVar15) {
      __grow_by(this,uVar6,(uVar14 + uVar15) - uVar6,uVar14,uVar14,0,0);
      uVar7 = (ulong)(byte)*this;
    }
    if ((uVar7 & 1) == 0) {
      pbVar11 = this + 4;
    }
    else {
      pbVar11 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  **)(this + 0x10);
    }
    pbVar9 = pbVar11 + uVar14 * 4;
    if (param_1 != param_2) {
      uVar6 = uVar12 - 4 >> 2;
      uVar7 = uVar6 + 1;
      pbVar8 = pbVar9;
      if ((7 < uVar7) &&
         (((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)(param_1 + uVar6 + 1) <= pbVar9 || (pbVar11 + (uVar14 + uVar6) * 4 + 4 <= param_1))))
      {
        uVar12 = uVar7 & 0x7ffffffffffffff8;
        pwVar4 = param_1 + 4;
        pbVar9 = pbVar9 + uVar12 * 4;
        pbVar11 = pbVar11 + uVar14 * 4 + 0x10;
        uVar6 = uVar12;
        do {
          pwVar5 = pwVar4 + -2;
          uVar16 = *(undefined8 *)(pwVar4 + -4);
          uVar18 = *(undefined8 *)(pwVar4 + 2);
          uVar17 = *(undefined8 *)pwVar4;
          pwVar4 = pwVar4 + 8;
          uVar6 = uVar6 - 8;
          *(undefined8 *)(pbVar11 + -8) = *(undefined8 *)pwVar5;
          *(undefined8 *)(pbVar11 + -0x10) = uVar16;
          *(undefined8 *)(pbVar11 + 8) = uVar18;
          *(undefined8 *)pbVar11 = uVar17;
          pbVar11 = pbVar11 + 0x20;
        } while (uVar6 != 0);
        pbVar8 = pbVar9;
        param_1 = param_1 + uVar12;
        if (uVar7 == uVar12) goto LAB_01209500;
      }
      do {
        pwVar4 = param_1 + 1;
        pbVar9 = pbVar8 + 4;
        *(wchar_t *)pbVar8 = *param_1;
        pbVar8 = pbVar9;
        param_1 = pwVar4;
      } while (param_2 != pwVar4);
    }
LAB_01209500:
    *(undefined4 *)pbVar9 = 0;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)(uVar14 + uVar15) << 1,0);
    }
    else {
      *(ulong *)(this + 8) = uVar14 + uVar15;
    }
    goto LAB_012095f0;
  }
  local_68 = 0;
  local_60 = (wchar_t *)0x0;
  local_70 = 0;
  if (0x3fffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar15 < 5) {
    uVar7 = uVar12 >> 1;
    local_70 = uVar7 & 0xff;
    pwVar4 = (wchar_t *)((ulong)&local_70 | 4);
  }
  else {
    if (uVar15 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar7 = uVar15 + 4 & 0xfffffffffffffffc;
    pwVar4 = operator_new(uVar7 << 2);
    uVar7 = uVar7 | 1;
    local_68 = uVar15;
    local_70 = uVar7;
    local_60 = pwVar4;
  }
  if (param_1 != param_2) {
    uVar14 = (uVar12 - 4 >> 2) + 1;
    pwVar5 = pwVar4;
    if (7 < uVar14) {
      uVar12 = uVar14 & 0x7ffffffffffffff8;
      pwVar5 = pwVar4 + 4;
      pwVar4 = pwVar4 + uVar12;
      pwVar13 = param_1 + 4;
      uVar6 = uVar12;
      do {
        pwVar3 = pwVar13 + -2;
        uVar16 = *(undefined8 *)(pwVar13 + -4);
        uVar18 = *(undefined8 *)(pwVar13 + 2);
        uVar17 = *(undefined8 *)pwVar13;
        uVar6 = uVar6 - 8;
        pwVar13 = pwVar13 + 8;
        *(undefined8 *)(pwVar5 + -2) = *(undefined8 *)pwVar3;
        *(undefined8 *)(pwVar5 + -4) = uVar16;
        *(undefined8 *)(pwVar5 + 2) = uVar18;
        *(undefined8 *)pwVar5 = uVar17;
        pwVar5 = pwVar5 + 8;
      } while (uVar6 != 0);
      pwVar5 = pwVar4;
      param_1 = param_1 + uVar12;
      if (uVar14 == uVar12) goto LAB_012095b8;
    }
    do {
      pwVar13 = param_1 + 1;
      pwVar4 = pwVar5 + 1;
      *pwVar5 = *param_1;
      pwVar5 = pwVar4;
      param_1 = pwVar13;
    } while (param_2 != pwVar13);
  }
LAB_012095b8:
  *pwVar4 = L'\0';
  uVar14 = (ulong)((uint)uVar7 >> 1 & 0x7f);
  pwVar4 = (wchar_t *)((ulong)&local_70 | 4);
  if ((uVar7 & 1) != 0) {
    uVar14 = local_68;
    pwVar4 = local_60;
  }
  append(this,pwVar4,uVar14);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_012095f0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (basic_string *)this;
}

