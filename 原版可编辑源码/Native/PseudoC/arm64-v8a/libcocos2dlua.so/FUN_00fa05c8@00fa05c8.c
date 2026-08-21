
void FUN_00fa05c8(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  switch(*(undefined4 *)(param_2 + 0x24)) {
  case 1:
    if (param_1 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        &cocos2d::EventListenerKeyboard::LISTENER_ID) {
      uVar1 = DAT_0178fcb0;
      pcVar2 = DAT_0178fcb8;
      if ((cocos2d::EventListenerKeyboard::LISTENER_ID & 1) == 0) {
        uVar1 = (ulong)(cocos2d::EventListenerKeyboard::LISTENER_ID >> 1);
        pcVar2 = &DAT_0178fca9;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,pcVar2,uVar1);
    }
    break;
  case 2:
    if (param_1 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        &cocos2d::EventListenerAcceleration::LISTENER_ID) {
      uVar1 = DAT_0178fc68;
      pcVar2 = DAT_0178fc70;
      if ((cocos2d::EventListenerAcceleration::LISTENER_ID & 1) == 0) {
        uVar1 = (ulong)(cocos2d::EventListenerAcceleration::LISTENER_ID >> 1);
        pcVar2 = &DAT_0178fc61;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,pcVar2,uVar1);
    }
    break;
  case 3:
    if (param_1 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        &cocos2d::EventListenerMouse::LISTENER_ID) {
      uVar1 = DAT_0178fcc8;
      pcVar2 = DAT_0178fcd0;
      if ((cocos2d::EventListenerMouse::LISTENER_ID & 1) == 0) {
        uVar1 = (ulong)(cocos2d::EventListenerMouse::LISTENER_ID >> 1);
        pcVar2 = &DAT_0178fcc1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,pcVar2,uVar1);
    }
    break;
  case 4:
    if (param_1 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        &cocos2d::EventListenerFocus::LISTENER_ID) {
      uVar1 = DAT_0178fc98;
      pcVar2 = DAT_0178fca0;
      if ((cocos2d::EventListenerFocus::LISTENER_ID & 1) == 0) {
        uVar1 = (ulong)(cocos2d::EventListenerFocus::LISTENER_ID >> 1);
        pcVar2 = &DAT_0178fc91;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,pcVar2,uVar1);
    }
    break;
  case 5:
    if (param_1 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        &cocos2d::EventListenerController::LISTENER_ID) {
      uVar1 = DAT_0178fc80;
      pcVar2 = DAT_0178fc88;
      if ((cocos2d::EventListenerController::LISTENER_ID & 1) == 0) {
        uVar1 = (ulong)(cocos2d::EventListenerController::LISTENER_ID >> 1);
        pcVar2 = &DAT_0178fc79;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,pcVar2,uVar1);
    }
    break;
  case 6:
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_2 + 0x40) != param_1) {
      bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 0x40);
      uVar1 = *(ulong *)(param_2 + 0x48);
      pcVar2 = *(char **)(param_2 + 0x50);
      if (((byte)bVar3 & 1) == 0) {
        pcVar2 = (char *)(param_2 + 0x41);
        uVar1 = (ulong)((byte)bVar3 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,pcVar2,uVar1);
    }
  }
  return;
}

