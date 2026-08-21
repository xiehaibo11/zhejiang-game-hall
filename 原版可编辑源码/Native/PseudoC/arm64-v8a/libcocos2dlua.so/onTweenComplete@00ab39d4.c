
/* fairygui::GearLook::onTweenComplete() */

void __thiscall fairygui::GearLook::onTweenComplete(GearLook *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x18);
  if (*(uint *)(lVar1 + 0x10) != 0) {
    GObject::releaseDisplayLock(*(GObject **)(this + 8),*(uint *)(lVar1 + 0x10));
    lVar1 = *(long *)(this + 0x18);
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
  *(undefined8 *)(lVar1 + 0x18) = 0;
  UIEventDispatcher::dispatchEvent
            (*(UIEventDispatcher **)(this + 8),0x46,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

