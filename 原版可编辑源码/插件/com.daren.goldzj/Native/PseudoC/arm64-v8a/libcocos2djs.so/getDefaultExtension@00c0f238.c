
/* spine::getDefaultExtension() */

DefaultSpineExtension * spine::getDefaultExtension(void)

{
  DefaultSpineExtension *this;
  
  this = operator_new(8);
  DefaultSpineExtension::DefaultSpineExtension(this);
  *(undefined ***)this = &PTR__Cocos2dExtension_01c8ce18;
  return this;
}

