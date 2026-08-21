
/* cocos2d::FadeOutTRTiles::~FadeOutTRTiles() */

void __thiscall cocos2d::FadeOutTRTiles::~FadeOutTRTiles(FadeOutTRTiles *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

