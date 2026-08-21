
/* WARNING: Removing unreachable block (ram,0x00147a80) */
/* WARNING: Removing unreachable block (ram,0x00147aa0) */
/* std::__ndk1::to_string(long double) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,longdouble param_1)

{
  char *__s;
  long lVar1;
  uint uVar2;
  ulong *in_x8;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_60 = 0x2c;
  uVar3 = 0;
  local_50 = (char *)0x0;
  uVar5 = 0x16;
  do {
    while( true ) {
      __s = (char *)((ulong)&local_60 | 1);
      if ((uVar3 & 1) != 0) {
        __s = local_50;
      }
      uVar2 = snprintf(__s,uVar5 + 1,"%Lf",param_1);
      if ((int)uVar2 < 0) {
        uVar4 = uVar5 << 1 | 1;
      }
      else {
        uVar4 = (ulong)uVar2;
        if (uVar4 <= uVar5) {
          uVar3 = (ulong)((byte)local_60._0_1_ >> 1);
          if ((local_60 & 1) != 0) {
            uVar3 = uStack_58;
          }
          if (uVar3 < uVar4) {
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_60,uVar4 - uVar3,'\0');
          }
          else if ((local_60 & 1) == 0) {
            *(undefined1 *)((long)&local_60 + uVar4 + 1) = 0;
            local_60 = CONCAT71(local_60._1_7_,(char)(uVar2 << 1));
          }
          else {
            local_50[uVar4] = '\0';
            uStack_58 = uVar4;
          }
          in_x8[1] = uStack_58;
          *in_x8 = local_60;
          in_x8[2] = (ulong)local_50;
          if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      uVar3 = (ulong)((byte)local_60._0_1_ >> 1);
      if ((local_60 & 1) != 0) {
        uVar3 = uStack_58;
      }
      uVar5 = uVar4;
      if (uVar4 < uVar3 || uVar4 - uVar3 == 0) break;
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_60,uVar4 - uVar3,'\0');
LAB_00147abc:
      uVar3 = local_60 & 0xff;
    }
    if ((local_60 & 1) == 0) {
      *(undefined1 *)((long)&local_60 + uVar4 + 1) = 0;
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar4 << 1));
      goto LAB_00147abc;
    }
    local_50[uVar4] = '\0';
    uVar3 = local_60 & 0xff;
    uStack_58 = uVar4;
  } while( true );
}

