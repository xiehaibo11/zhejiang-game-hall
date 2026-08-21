
/* cocosbuilder::CCBEaseInstant::~CCBEaseInstant() */

void __thiscall cocosbuilder::CCBEaseInstant::~CCBEaseInstant(CCBEaseInstant *this)

{
  cocos2d::ActionEase::~ActionEase((ActionEase *)this);
  operator_delete(this);
  return;
}

