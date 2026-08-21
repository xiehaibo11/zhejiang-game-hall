
/* cocosbuilder::CCBRotateTo::~CCBRotateTo() */

void __thiscall cocosbuilder::CCBRotateTo::~CCBRotateTo(CCBRotateTo *this)

{
  cocos2d::Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

