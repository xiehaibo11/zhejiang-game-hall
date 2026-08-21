
/* cocos2d::PUDynamicAttributeRandom::~PUDynamicAttributeRandom() */

void __thiscall
cocos2d::PUDynamicAttributeRandom::~PUDynamicAttributeRandom(PUDynamicAttributeRandom *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

