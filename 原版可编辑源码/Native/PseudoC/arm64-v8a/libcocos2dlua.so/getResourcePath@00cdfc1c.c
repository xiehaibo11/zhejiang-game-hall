
/* cocostudio::WidgetReader::getResourcePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void cocostudio::WidgetReader::getResourcePath
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                *param_1,undefined8 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = GUIReader::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_50,(basic_string *)(lVar3 + 0x28));
  if ((*param_3 & 1) == 0) {
    param_3 = param_3 + 1;
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    bVar1 = *param_3;
  }
  else {
    param_3 = *(byte **)(param_3 + 0x10);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (param_3 == (byte *)0x0) goto joined_r0x00cdfcd8;
    bVar1 = *param_3;
  }
  if (bVar1 != 0) {
    if (param_4 == 1) {
      sVar4 = strlen((char *)param_3);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,(char *)param_3,sVar4);
    }
    else if (param_4 == 0) {
      FUN_007c1fb0(&local_68,local_50,param_3);
      if (((byte)*param_1 & 1) == 0) {
        *(undefined2 *)param_1 = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        if (((byte)*param_1 & 1) != 0) {
          operator_delete(*(void **)(param_1 + 0x10));
          *(undefined8 *)param_1 = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x10) = local_58;
      *(undefined8 *)(param_1 + 8) = uStack_60;
      *(undefined8 *)param_1 = local_68;
    }
  }
joined_r0x00cdfcd8:
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

