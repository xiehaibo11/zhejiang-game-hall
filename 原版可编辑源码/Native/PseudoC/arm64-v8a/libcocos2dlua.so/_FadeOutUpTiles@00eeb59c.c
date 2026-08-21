
/* non-virtual thunk to cocos2d::FadeOutUpTiles::~FadeOutUpTiles() */

void __thiscall cocos2d::FadeOutUpTiles::~FadeOutUpTiles(FadeOutUpTiles *this)

{
                    /* try { // try from 00eeb5a8 to 00feb613 has its CatchHandler @ 00eeb5a8
                       catch() { ... } // from try @ 00eeb5a8 with catch @ 00eeb5a8
                       catch() { ... } // from try @ 00eeb624 with catch @ 00eeb5a8 */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

