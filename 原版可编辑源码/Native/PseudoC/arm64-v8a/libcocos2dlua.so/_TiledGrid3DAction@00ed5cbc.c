
/* cocos2d::TiledGrid3DAction::~TiledGrid3DAction() */

void __thiscall cocos2d::TiledGrid3DAction::~TiledGrid3DAction(TiledGrid3DAction *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

