
/* fairygui::GearXY::onTweenComplete() */

void __thiscall fairygui::GearXY::onTweenComplete(GearXY *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x18);
  if (*(uint *)(lVar1 + 0x10) != 0) {
    GObject::releaseDisplayLock(*(GObject **)(this + 8),*(uint *)(lVar1 + 0x10));
    lVar1 = *(long *)(this + 0x18);
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
  *(undefined8 *)(lVar1 + 0x18) = 0;
                    /* try { // try from 00ab6308 to 00bb633f has its CatchHandler @ 00ab652c */
  UIEventDispatcher::dispatchEvent
            (*(UIEventDispatcher **)(this + 8),0x46,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

