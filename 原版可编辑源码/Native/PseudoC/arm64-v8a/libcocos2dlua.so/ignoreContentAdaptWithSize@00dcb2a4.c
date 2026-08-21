
/* cocos2d::ui::LoadingBar::ignoreContentAdaptWithSize(bool) */

void __thiscall cocos2d::ui::LoadingBar::ignoreContentAdaptWithSize(LoadingBar *this,bool param_1)

{
                    /* try { // try from 00dcb2ac to 00ecb2bb has its CatchHandler @ 00dcca5c */
                    /* try { // try from 00dcb2bc to 00ecb2cb has its CatchHandler @ 00dcca4c */
  if ((this[0x524] == (LoadingBar)0x0) || (!param_1)) {
                    /* try { // try from 00dcb2cc to 00ecb2db has its CatchHandler @ 00dcca3c */
    Widget::ignoreContentAdaptWithSize((Widget *)this,param_1);
    this[0x525] = (LoadingBar)param_1;
  }
                    /* try { // try from 00dcb2dc to 00ecb2eb has its CatchHandler @ 00dcca2c */
  return;
}

