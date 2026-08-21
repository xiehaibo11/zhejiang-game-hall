
/* cocos2d::Ref::~Ref() */

void __thiscall cocos2d::Ref::~Ref(Ref *this)

{
  operator_delete(this);
  return;
}

