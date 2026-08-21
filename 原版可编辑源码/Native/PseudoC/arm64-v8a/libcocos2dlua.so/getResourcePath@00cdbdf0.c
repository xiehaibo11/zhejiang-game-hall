
/* cocostudio::WidgetReader::getResourcePath(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*,
   cocos2d::ui::Widget::TextureResType) */

void cocostudio::WidgetReader::getResourcePath
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                *param_1,undefined8 param_2_00,CocoLoader *param_2,stExpCocoNode *param_4,
               int param_5)

{
  basic_string *pbVar1;
  long lVar2;
  stExpCocoNode *this;
  char *pcVar3;
  long lVar4;
  ulong local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [8];
  basic_string *local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_4,param_2);
  pcVar3 = (char *)stExpCocoNode::GetValue(this,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,pcVar3);
  pbVar1 = (basic_string *)(ulong)((byte)local_50[0] >> 1);
  if (((byte)local_50[0] & 1) != 0) {
    pbVar1 = local_48;
  }
  if (pbVar1 < (basic_string *)0x3) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(param_1,"");
  }
  else {
    lVar4 = GUIReader::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_68,(basic_string *)(lVar4 + 0x28));
    uStack_78 = 0;
    local_70 = (undefined1 *)0x0;
    local_80 = 0;
    pbVar1 = (basic_string *)(ulong)((byte)local_50[0] >> 1);
    if (((byte)local_50[0] & 1) != 0) {
      pbVar1 = local_48;
    }
    if (pbVar1 != (basic_string *)0x0) {
      if (param_5 == 1) {
        pcVar3 = (char *)((ulong)local_50 | 1);
        if (((byte)local_50[0] & 1) != 0) {
          pcVar3 = local_40;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,pcVar3,(ulong)pbVar1);
      }
      else if (param_5 == 0) {
        std::__ndk1::operator+((__ndk1 *)local_68,(basic_string *)local_50,pbVar1);
        if ((local_80 & 1) != 0) {
          *local_70 = 0;
          uStack_78 = 0;
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
      }
    }
    *(undefined8 *)(param_1 + 8) = uStack_78;
    *(ulong *)param_1 = local_80;
    *(undefined1 **)(param_1 + 0x10) = local_70;
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

