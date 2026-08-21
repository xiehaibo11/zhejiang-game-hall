
/* fairygui::InputProcessor::disableDefaultTouchEvent() */

void __thiscall fairygui::InputProcessor::disableDefaultTouchEvent(InputProcessor *this)

{
  EventDispatcher *this_00;
  
                    /* try { // try from 00aae33c to 00bae343 has its CatchHandler @ 00aae380 */
                    /* try { // try from 00aae344 to 00bae39b has its CatchHandler @ 00aae2a8 */
  this_00 = (EventDispatcher *)(**(code **)(**(long **)(*(long *)(this + 0x30) + 0xa8) + 0x388))();
  cocos2d::EventDispatcher::removeEventListener(this_00,*(EventListener **)this);
  return;
}

