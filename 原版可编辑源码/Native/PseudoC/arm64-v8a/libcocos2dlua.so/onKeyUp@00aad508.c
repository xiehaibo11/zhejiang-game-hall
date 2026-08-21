
/* fairygui::InputProcessor::onKeyUp(cocos2d::EventKeyboard::KeyCode, cocos2d::Event*) */

void fairygui::InputProcessor::onKeyUp(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = param_2 | 1;
  if (uVar1 == 0xd) {
    uVar2 = 0xfffb;
  }
  else if (uVar1 == 0xf) {
    uVar2 = 0xfffe;
  }
  else {
    if (uVar1 != 0x11) goto LAB_00aad544;
    uVar2 = 0xfffd;
  }
  *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) & uVar2;
LAB_00aad544:
  *(uint *)(param_1 + 0x98) = param_2;
  *(UIEventDispatcher **)(param_1 + 0x70) = *(UIEventDispatcher **)(param_1 + 0x30);
  UIEventDispatcher::dispatchEvent
            (*(UIEventDispatcher **)(param_1 + 0x30),0x1f,(void *)0x0,(Value *)&cocos2d::Value::Null
            );
  return;
}

