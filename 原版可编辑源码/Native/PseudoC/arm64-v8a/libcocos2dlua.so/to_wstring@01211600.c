
/* std::__ndk1::to_wstring(float) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,float param_1)

{
  long lVar1;
  int iVar2;
  wchar_t *pwVar3;
  ulong *in_x8;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_70;
  ulong uStack_68;
  wchar_t *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pwVar3 = operator_new(0x60);
  uStack_68 = 0x14;
  local_70 = 0x19;
  local_60 = pwVar3;
  wmemset(pwVar3,L'\0',0x14);
  pwVar3[0x14] = L'\0';
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_70,3,L'\0');
  uVar4 = local_70 & 0xff;
  uVar6 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar6 = uStack_68;
  }
  do {
    while( true ) {
      pwVar3 = (wchar_t *)((ulong)&local_70 | 4);
      if ((uVar4 & 1) != 0) {
        pwVar3 = local_60;
      }
      iVar2 = swprintf(pwVar3,uVar6 + 1,L"%f",(double)param_1);
      if (iVar2 < 0) {
        uVar5 = uVar6 << 1 | 1;
      }
      else {
        uVar5 = (ulong)iVar2;
        if (uVar5 <= uVar6) {
          uVar6 = (ulong)((byte)local_70._0_1_ >> 1);
          if ((local_70 & 1) != 0) {
            uVar6 = uStack_68;
          }
          if (uVar6 < uVar5) {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      *)&local_70,uVar5 - uVar6,L'\0');
          }
          else if ((local_70 & 1) == 0) {
            *(undefined4 *)((long)&local_70 + uVar5 * 4 + 4) = 0;
            local_70 = CONCAT71(local_70._1_7_,(char)(iVar2 << 1));
          }
          else {
            local_60[uVar5] = L'\0';
            uStack_68 = uVar5;
          }
          in_x8[2] = (ulong)local_60;
          in_x8[1] = uStack_68;
          *in_x8 = local_70;
          if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      uVar4 = (ulong)((byte)local_70._0_1_ >> 1);
      if ((local_70 & 1) != 0) {
        uVar4 = uStack_68;
      }
      uVar6 = uVar5;
      if (uVar5 < uVar4 || uVar5 - uVar4 == 0) break;
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_70,uVar5 - uVar4,L'\0');
LAB_012116a4:
      uVar4 = local_70 & 0xff;
    }
    if ((local_70 & 1) == 0) {
      *(undefined4 *)((long)&local_70 + uVar5 * 4 + 4) = 0;
      local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar5 << 1));
      goto LAB_012116a4;
    }
    local_60[uVar5] = L'\0';
    uVar4 = local_70 & 0xff;
    uStack_68 = uVar5;
  } while( true );
}

