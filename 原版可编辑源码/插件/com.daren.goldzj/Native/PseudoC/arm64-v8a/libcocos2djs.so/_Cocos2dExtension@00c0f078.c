
/* spine::Cocos2dExtension::~Cocos2dExtension() */

void __thiscall spine::Cocos2dExtension::~Cocos2dExtension(Cocos2dExtension *this)

{
  SpineExtension::~SpineExtension((SpineExtension *)this);
  operator_delete(this);
  return;
}

