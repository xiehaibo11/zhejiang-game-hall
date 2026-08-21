
/* cocos2d::ui::Slider::ignoreContentAdaptWithSize(bool) */

void __thiscall cocos2d::ui::Slider::ignoreContentAdaptWithSize(Slider *this,bool param_1)

{
  if ((this[0x55c] == (Slider)0x0) || (!param_1)) {
                    /* try { // try from 00dcc51c to 00ecc7f7 has its CatchHandler @ 00dccbf0 */
    Widget::ignoreContentAdaptWithSize((Widget *)this,param_1);
    this[0x55d] = (Slider)param_1;
  }
  return;
}

