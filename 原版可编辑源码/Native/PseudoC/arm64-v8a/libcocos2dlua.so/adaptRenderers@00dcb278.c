
/* cocos2d::ui::LoadingBar::adaptRenderers() */

void __thiscall cocos2d::ui::LoadingBar::adaptRenderers(LoadingBar *this)

{
                    /* try { // try from 00dcb27c to 00ecb28b has its CatchHandler @ 00dcca8c */
  if (this[0x538] != (LoadingBar)0x0) {
                    /* try { // try from 00dcb28c to 00ecb29b has its CatchHandler @ 00dcca7c */
    barRendererScaleChangedWithSize(this);
    this[0x538] = (LoadingBar)0x0;
  }
                    /* try { // try from 00dcb29c to 00ecb2ab has its CatchHandler @ 00dcca6c */
  return;
}

