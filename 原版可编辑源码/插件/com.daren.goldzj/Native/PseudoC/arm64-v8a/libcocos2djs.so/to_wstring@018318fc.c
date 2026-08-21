
/* std::__ndk1::to_wstring(unsigned long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,ulong param_1)

{
  wchar_t *__s;
  long lVar1;
  int iVar2;
  wchar_t *__s_00;
  ulong *in_x8;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_70;
  ulong uStack_68;
  wchar_t *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __s_00 = operator_new(0x60);
  uStack_68 = 0x17;
  local_70 = 0x19;
  local_60 = __s_00;
  wmemset(__s_00,L'\0',0x17);
  uVar3 = 0x19;
  __s_00[0x17] = L'\0';
  uStack_68 = 0x17;
  uVar5 = 0x17;
  do {
    __s = (wchar_t *)((ulong)&local_70 | 4);
    if ((uVar3 & 1) != 0) {
      __s = __s_00;
    }
    iVar2 = swprintf(__s,uVar5 + 1,L"%lu",this);
    if (iVar2 < 0) {
      uVar4 = uVar5 << 1 | 1;
    }
    else {
      uVar4 = (ulong)iVar2;
      if (uVar4 <= uVar5) {
        uVar5 = (ulong)((byte)local_70._0_1_ >> 1);
        if ((local_70 & 1) != 0) {
          uVar5 = uStack_68;
        }
        if (uVar5 < uVar4) {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  *)&local_70,uVar4 - uVar5,L'\0');
        }
        else if ((local_70 & 1) == 0) {
          *(undefined4 *)((long)&local_70 + uVar4 * 4 + 4) = 0;
          local_70 = CONCAT71(local_70._1_7_,(char)(iVar2 << 1));
        }
        else {
          local_60[uVar4] = L'\0';
          uStack_68 = uVar4;
        }
        in_x8[2] = (ulong)local_60;
        in_x8[1] = uStack_68;
        *in_x8 = local_70;
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    uVar5 = (ulong)((byte)local_70._0_1_ >> 1);
    if ((local_70 & 1) != 0) {
      uVar5 = uStack_68;
    }
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      if ((local_70 & 1) == 0) {
        *(undefined4 *)((long)&local_70 + uVar4 * 4 + 4) = 0;
        local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar4 << 1));
      }
      else {
        local_60[uVar4] = L'\0';
        uStack_68 = uVar4;
      }
    }
    else {
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_70,uVar4 - uVar5,L'\0');
    }
    uVar3 = local_70 & 0xff;
    __s_00 = local_60;
    uVar5 = uVar4;
  } while( true );
}

