
/* cocos2d::PUDynamicAttributeFixed::~PUDynamicAttributeFixed() */

void __thiscall
cocos2d::PUDynamicAttributeFixed::~PUDynamicAttributeFixed(PUDynamicAttributeFixed *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

