
/* cocos2d::FadeOutBLTiles::~FadeOutBLTiles() */

void __thiscall cocos2d::FadeOutBLTiles::~FadeOutBLTiles(FadeOutBLTiles *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

