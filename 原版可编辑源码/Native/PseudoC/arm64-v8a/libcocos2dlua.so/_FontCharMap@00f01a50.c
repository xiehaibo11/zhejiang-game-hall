
/* cocos2d::FontCharMap::~FontCharMap() */

void __thiscall cocos2d::FontCharMap::~FontCharMap(FontCharMap *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

