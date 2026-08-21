
/* cocos2d::FontCharMap::create(cocos2d::Texture2D*, int, int, int) */

Ref * cocos2d::FontCharMap::create(Texture2D *param_1,int param_2,int param_3,int param_4)

{
  Ref *this;
  
  this = operator_new(0x40);
  Ref::Ref(this);
  *(Texture2D **)(this + 0x28) = param_1;
  *(int *)(this + 0x30) = param_4;
  *(int *)(this + 0x34) = param_2;
  *(undefined ***)this = &PTR__FontCharMap_016fd0e8;
  *(int *)(this + 0x38) = param_3;
  Ref::autorelease(this);
  return this;
}

