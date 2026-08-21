
/* cocos2d::FadeOutUpTiles::~FadeOutUpTiles() */

void __thiscall cocos2d::FadeOutUpTiles::~FadeOutUpTiles(FadeOutUpTiles *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

