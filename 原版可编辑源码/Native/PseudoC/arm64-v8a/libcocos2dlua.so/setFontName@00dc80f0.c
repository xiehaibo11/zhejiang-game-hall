
/* cocos2d::ui::Text::setFontName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::Text::setFontName(Text *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  basic_string *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileUtils::getInstance();
  uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,param_1);
  if ((uVar3 & 1) == 0) {
    (**(code **)(**(long **)(this + 0x528) + 0x560))(*(long **)(this + 0x528),param_1);
    if (*(int *)(this + 0x534) == 1) {
      (**(code **)(**(long **)(this + 0x528) + 0x580))();
    }
    *(undefined4 *)(this + 0x534) = 0;
  }
  else {
    pbVar4 = (basic_string *)(**(code **)(**(long **)(this + 0x528) + 0x538))();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_80,pbVar4);
    uStack_54 = *(undefined8 *)(pbVar4 + 0x2c);
    local_68 = *(undefined8 *)(pbVar4 + 0x18);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(pbVar4 + 0x24) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
    local_5c = (undefined4)((ulong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
    if (local_80 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar3 = *(ulong *)(param_1 + 8);
      pbVar4 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar4 = param_1 + 1;
        uVar3 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_80,(char *)pbVar4,uVar3);
    }
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(this + 0x520));
    (**(code **)(**(long **)(this + 0x528) + 0x530))(*(long **)(this + 0x528),local_80);
    *(undefined4 *)(this + 0x534) = 1;
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x508) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar3 = *(ulong *)(param_1 + 8);
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar4 = param_1 + 1;
      uVar3 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x508),(char *)pbVar4,uVar3);
  }
  (**(code **)(**(long **)(this + 0x528) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  this[0x530] = (Text)0x1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

