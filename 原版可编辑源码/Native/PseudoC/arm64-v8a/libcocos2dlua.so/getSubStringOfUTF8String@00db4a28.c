
/* cocos2d::ui::Helper::getSubStringOfUTF8String(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) */

void __thiscall
cocos2d::ui::Helper::getSubStringOfUTF8String
          (Helper *this,basic_string *param_1,ulong param_2,ulong param_3)

{
  basic_string *pbVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string local_80 [16];
  void *local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  basic_string *local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = (basic_string *)0x0;
  local_40 = (void *)0x0;
  local_50 = 0;
  uVar6 = StringUtils::UTF8ToUTF32((basic_string *)this,(basic_string *)&local_50);
  if ((uVar6 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"");
  }
  else {
    pbVar1 = (basic_string *)(local_50 >> 1 & 0x7f);
    if ((local_50 & 1) != 0) {
      pbVar1 = local_48;
    }
    if (pbVar1 < param_1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(in_x8,"");
    }
    else {
      uStack_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db49a4 with catch @ 00db4aec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db4a04 with catch @ 00db4af0
                        */
      std::__ndk1::
      basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
      basic_string(local_80,(ulong)&local_50,(ulong)param_1,(allocator *)param_2);
      uVar6 = StringUtils::UTF32ToUTF8(local_80,(basic_string *)&local_68);
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      pvVar5 = local_58;
      uVar4 = uStack_60;
      uVar3 = local_68;
      if ((uVar6 & 1) == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(in_x8,"");
        if ((local_68 & 1) != 0) {
          operator_delete(local_58);
        }
      }
      else {
        uStack_60 = 0;
        local_58 = (void *)0x0;
        local_68 = 0;
        *(void **)(in_x8 + 0x10) = pvVar5;
        *(undefined8 *)(in_x8 + 8) = uVar4;
        *(ulong *)in_x8 = uVar3;
      }
    }
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

