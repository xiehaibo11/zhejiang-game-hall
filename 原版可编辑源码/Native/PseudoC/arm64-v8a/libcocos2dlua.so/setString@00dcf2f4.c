
/* cocos2d::ui::TextField::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocos2d::ui::TextField::setString(basic_string *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  UICCTextField *this;
  basic_string *in_x1;
  ulong in_x3;
  ulong uVar4;
  long *plVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [8];
  ulong uStack_60;
  undefined1 *local_58;
  ulong local_50;
  ulong uStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,in_x1);
  if (*(char *)(*(long *)(param_1 + 0x4f0) + 0x740) != '\0') {
    uVar4 = (ulong)*(int *)(*(long *)(param_1 + 0x4f0) + 0x744);
    lVar3 = StringUtils::getCharacterCountInUTF8String(in_x1);
    if ((long)uVar4 < lVar3) {
      Helper::getSubStringOfUTF8String((Helper *)&local_50,(basic_string *)0x0,uVar4,in_x3);
      if (((byte)local_50._0_1_ & 1) != 0) {
        *local_40 = 0;
        uStack_48 = 0;
        if (((byte)local_50._0_1_ & 1) != 0) {
          operator_delete(local_40);
        }
      }
      local_50 = (ulong)(byte)local_68[0];
      uStack_48 = uStack_60;
      local_40 = local_58;
    }
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x4f0) + 0x660))();
  this = *(UICCTextField **)(param_1 + 0x4f0);
  if ((uVar4 & 1) == 0) {
    (**(code **)(*(long *)this + 0x588))(this,&local_50);
  }
  else {
    UICCTextField::setPasswordText(this,(basic_string *)&local_50);
    plVar5 = *(long **)(param_1 + 0x4f0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"");
    (**(code **)(*plVar5 + 0x588))(plVar5,local_68);
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    uVar4 = local_50 >> 1 & 0x7f;
    puVar2 = (undefined1 *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      uVar4 = uStack_48;
      puVar2 = local_40;
    }
    (**(code **)(**(long **)(param_1 + 0x4f0) + 0x688))(*(long **)(param_1 + 0x4f0),puVar2,uVar4);
  }
  param_1[0x550] = (basic_string)0x1;
  (**(code **)(**(long **)(param_1 + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)param_1);
  if (((byte)local_50._0_1_ & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

