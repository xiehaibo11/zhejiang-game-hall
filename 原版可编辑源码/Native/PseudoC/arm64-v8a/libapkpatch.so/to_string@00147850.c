
/* WARNING: Removing unreachable block (ram,0x001478a8) */
/* WARNING: Removing unreachable block (ram,0x001478c8) */
/* std::__ndk1::to_string(double) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,double param_1)

{
  char *__s;
  long lVar1;
  uint uVar2;
  ulong *in_x8;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_70;
  ulong uStack_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0;
  local_70 = 0x2c;
  uVar3 = 0;
  local_60 = (char *)0x0;
  uVar5 = 0x16;
  do {
    while( true ) {
      __s = (char *)((ulong)&local_70 | 1);
      if ((uVar3 & 1) != 0) {
        __s = local_60;
      }
      uVar2 = snprintf(__s,uVar5 + 1,"%f",param_1);
      if ((int)uVar2 < 0) {
        uVar4 = uVar5 << 1 | 1;
      }
      else {
        uVar4 = (ulong)uVar2;
        if (uVar4 <= uVar5) {
          uVar3 = (ulong)((byte)local_70._0_1_ >> 1);
          if ((local_70 & 1) != 0) {
            uVar3 = uStack_68;
          }
          if (uVar3 < uVar4) {
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_70,uVar4 - uVar3,'\0');
          }
          else if ((local_70 & 1) == 0) {
            *(undefined1 *)((long)&local_70 + uVar4 + 1) = 0;
            local_70 = CONCAT71(local_70._1_7_,(char)(uVar2 << 1));
          }
          else {
            local_60[uVar4] = '\0';
            uStack_68 = uVar4;
          }
          in_x8[1] = uStack_68;
          *in_x8 = local_70;
          in_x8[2] = (ulong)local_60;
          if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      uVar3 = (ulong)((byte)local_70._0_1_ >> 1);
      if ((local_70 & 1) != 0) {
        uVar3 = uStack_68;
      }
      uVar5 = uVar4;
      if (uVar4 < uVar3 || uVar4 - uVar3 == 0) break;
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,uVar4 - uVar3,'\0');
LAB_001478e4:
      uVar3 = local_70 & 0xff;
    }
    if ((local_70 & 1) == 0) {
      *(undefined1 *)((long)&local_70 + uVar4 + 1) = 0;
      local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar4 << 1));
      goto LAB_001478e4;
    }
    local_60[uVar4] = '\0';
    uVar3 = local_70 & 0xff;
    uStack_68 = uVar4;
  } while( true );
}

