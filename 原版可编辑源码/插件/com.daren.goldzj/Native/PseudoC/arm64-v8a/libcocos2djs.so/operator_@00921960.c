
/* cocos2d::renderer::Technique::Parameter::TEMPNAMEPLACEHOLDERVALUE(cocos2d::renderer::Technique::Parameter
   const&) */

Parameter * __thiscall
cocos2d::renderer::Technique::Parameter::operator=(Parameter *this,Parameter *param_1)

{
  if (this != param_1) {
    freeValue(this);
    copyValue(this,param_1);
  }
  return this;
}

