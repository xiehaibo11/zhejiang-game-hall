
/* cocos2d::ui::Button::createTitleRendererIfNull() */

undefined8 __thiscall cocos2d::ui::Button::createTitleRendererIfNull(Button *this)

{
  if (*(long *)(this + 0x508) != 0) {
                    /* try { // try from 00dc0534 to 00ec053f has its CatchHandler @ 00dc07fc */
    return 0;
  }
  (**(code **)(*(long *)this + 0x6a0))();
                    /* try { // try from 00dc0548 to 00ec056f has its CatchHandler @ 00dc07f8 */
  return 1;
}

