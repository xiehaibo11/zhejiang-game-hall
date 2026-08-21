
/* std::__ndk1::to_wstring(long double) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,longdouble param_1)

{
  long lVar1;
  int iVar2;
  wchar_t *pwVar3;
  ulong *in_x8;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_60;
  ulong uStack_58;
  wchar_t *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pwVar3 = operator_new(0x60);
  uStack_58 = 0x14;
  local_60 = 0x19;
  local_50 = pwVar3;
  wmemset(pwVar3,L'\0',0x14);
  pwVar3[0x14] = L'\0';
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,3,L'\0');
  uVar4 = local_60 & 0xff;
  uVar6 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar6 = uStack_58;
  }
  do {
    while( true ) {
      pwVar3 = (wchar_t *)((ulong)&local_60 | 4);
      if ((uVar4 & 1) != 0) {
        pwVar3 = local_50;
      }
      iVar2 = swprintf(pwVar3,uVar6 + 1,L"%Lf",param_1);
      if (iVar2 < 0) {
        uVar5 = uVar6 << 1 | 1;
      }
      else {
        uVar5 = (ulong)iVar2;
        if (uVar5 <= uVar6) {
          uVar6 = (ulong)((byte)local_60._0_1_ >> 1);
          if ((local_60 & 1) != 0) {
            uVar6 = uStack_58;
          }
          if (uVar6 < uVar5) {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      *)&local_60,uVar5 - uVar6,L'\0');
          }
          else if ((local_60 & 1) == 0) {
            *(undefined4 *)((long)&local_60 + uVar5 * 4 + 4) = 0;
            local_60 = CONCAT71(local_60._1_7_,(char)(iVar2 << 1));
          }
          else {
            local_50[uVar5] = L'\0';
            uStack_58 = uVar5;
          }
          in_x8[2] = (ulong)local_50;
          in_x8[1] = uStack_58;
          *in_x8 = local_60;
          if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      uVar4 = (ulong)((byte)local_60._0_1_ >> 1);
      if ((local_60 & 1) != 0) {
        uVar4 = uStack_58;
      }
      uVar6 = uVar5;
      if (uVar5 < uVar4 || uVar5 - uVar4 == 0) break;
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,uVar5 - uVar4,L'\0');
LAB_01211a70:
      uVar4 = local_60 & 0xff;
    }
    if ((local_60 & 1) == 0) {
      *(undefined4 *)((long)&local_60 + uVar5 * 4 + 4) = 0;
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar5 << 1));
      goto LAB_01211a70;
    }
    local_50[uVar5] = L'\0';
    uVar4 = local_60 & 0xff;
    uStack_58 = uVar5;
  } while( true );
}

