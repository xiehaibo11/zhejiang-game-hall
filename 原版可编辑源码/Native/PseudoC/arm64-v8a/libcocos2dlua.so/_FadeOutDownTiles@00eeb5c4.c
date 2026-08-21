
/* cocos2d::FadeOutDownTiles::~FadeOutDownTiles() */

void __thiscall cocos2d::FadeOutDownTiles::~FadeOutDownTiles(FadeOutDownTiles *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

