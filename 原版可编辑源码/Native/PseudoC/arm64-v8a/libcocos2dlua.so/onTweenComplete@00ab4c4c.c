
/* fairygui::GearSize::onTweenComplete() */

void __thiscall fairygui::GearSize::onTweenComplete(GearSize *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x18);
  if (*(uint *)(lVar1 + 0x10) != 0) {
    GObject::releaseDisplayLock(*(GObject **)(this + 8),*(uint *)(lVar1 + 0x10));
    lVar1 = *(long *)(this + 0x18);
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
                    /* try { // try from 00ab4c78 to 00bb4c8b has its CatchHandler @ 00ab4cd0 */
  *(undefined8 *)(lVar1 + 0x18) = 0;
                    /* try { // try from 00ab4c8c to 00bb4ceb has its CatchHandler @ 00ab4bc0 */
  UIEventDispatcher::dispatchEvent
            (*(UIEventDispatcher **)(this + 8),0x46,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

