
/* cocos2d::StringUtils::format(char const*, ...) */

void cocos2d::StringUtils::format(char *param_1,...)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  uint uVar5;
  void *__s;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar6;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  local_e8 = in_x1;
  uStack_e0 = in_x2;
  local_d8 = in_x3;
  uStack_d0 = in_x4;
  local_c8 = in_x5;
  uStack_c0 = in_x6;
  local_b8 = in_x7;
  __s = operator_new(0x210);
  *(void **)(in_x8 + 0x10) = __s;
  *(undefined8 *)(in_x8 + 8) = 0x200;
  *(undefined8 *)in_x8 = 0x211;
  memset(__s,0,0x201);
  puStack_88 = &stack0xffffffffffffff50;
  puStack_80 = auStack_f0;
  uStack_78 = 0xffffff80ffffffc8;
  local_90 = (undefined1 *)register0x00000008;
  uVar5 = __vsnprintf_chk(__s,0x201,0,0x210,param_1,&local_90);
  if ((int)uVar5 < 0) {
    do {
      bVar3 = *in_x8;
      uVar1 = (ulong)((byte)bVar3 >> 1);
      if (((byte)bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(in_x8 + 8);
      }
      uVar6 = uVar1 * 3 >> 1;
      if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
        if (((byte)bVar3 & 1) == 0) {
          in_x8[uVar6 + 1] =
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
          *in_x8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   ((byte)(uVar1 * 3) & 0xfe);
        }
        else {
          *(undefined1 *)(*(long *)(in_x8 + 0x10) + uVar6) = 0;
          *(ulong *)(in_x8 + 8) = uVar6;
        }
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,uVar6 - uVar1,'\0');
      }
      pbVar2 = in_x8 + 1;
      uVar1 = (ulong)((byte)*in_x8 >> 1);
      if (((byte)*in_x8 & 1) != 0) {
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(in_x8 + 0x10);
        uVar1 = *(ulong *)(in_x8 + 8);
      }
      uStack_78 = 0xffffff80ffffffc8;
      local_90 = (undefined1 *)register0x00000008;
      puStack_88 = &stack0xffffffffffffff50;
      puStack_80 = auStack_f0;
      uVar5 = __vsnprintf_chk(pbVar2,uVar1 + 1,0,0xffffffffffffffff,param_1,&local_90);
    } while ((int)uVar5 < 0);
    bVar3 = *in_x8;
    uVar6 = (ulong)(int)uVar5;
    uVar1 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(in_x8 + 8);
    }
    if (uVar1 < uVar6) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(in_x8,uVar6 - uVar1,'\0');
      goto LAB_00fc5040;
    }
    if (((byte)bVar3 & 1) != 0) {
      *(undefined1 *)(*(long *)(in_x8 + 0x10) + uVar6) = 0;
      *(ulong *)(in_x8 + 8) = uVar6;
      goto LAB_00fc5040;
    }
  }
  else {
    bVar3 = *in_x8;
    uVar1 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(in_x8 + 8);
    }
    if (uVar1 <= uVar5) {
      if (uVar1 < uVar5) {
        uVar6 = (ulong)(int)uVar5;
        if (uVar1 < uVar6) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (in_x8,uVar6 - uVar1,'\0');
        }
        else if (((byte)bVar3 & 1) == 0) {
          in_x8[uVar6 + 1] =
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
          *in_x8 = SUB41(uVar5 << 1,0);
        }
        else {
          *(undefined1 *)(*(long *)(in_x8 + 0x10) + uVar6) = 0;
          *(ulong *)(in_x8 + 8) = uVar6;
        }
        puStack_88 = &stack0xffffffffffffff50;
        puStack_80 = auStack_f0;
        pbVar2 = in_x8 + 1;
        uVar1 = (ulong)((byte)*in_x8 >> 1);
        if (((byte)*in_x8 & 1) != 0) {
          pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(in_x8 + 0x10);
          uVar1 = *(ulong *)(in_x8 + 8);
        }
        uStack_78 = 0xffffff80ffffffc8;
        local_90 = (undefined1 *)register0x00000008;
        __vsnprintf_chk(pbVar2,uVar1 + 1,0,0xffffffffffffffff,param_1,&local_90);
      }
      goto LAB_00fc5040;
    }
    uVar6 = (ulong)(int)uVar5;
    if (uVar1 < uVar6) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(in_x8,uVar6 - uVar1,'\0');
      goto LAB_00fc5040;
    }
    if (((byte)bVar3 & 1) != 0) {
      *(undefined1 *)(*(long *)(in_x8 + 0x10) + uVar6) = 0;
      *(ulong *)(in_x8 + 8) = uVar6;
      goto LAB_00fc5040;
    }
  }
  in_x8[uVar6 + 1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  *in_x8 = SUB41(uVar5 << 1,0);
LAB_00fc5040:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

