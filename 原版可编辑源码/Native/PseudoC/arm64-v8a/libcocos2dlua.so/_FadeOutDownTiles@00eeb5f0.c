
/* non-virtual thunk to cocos2d::FadeOutDownTiles::~FadeOutDownTiles() */

void __thiscall cocos2d::FadeOutDownTiles::~FadeOutDownTiles(FadeOutDownTiles *this)

{
  Action::~Action((Action *)(this + -0x28));
                    /* try { // try from 00eeb614 to 00feb623 has its CatchHandler @ 00eeb6b0 */
  operator_delete((Action *)(this + -0x28));
  return;
}

