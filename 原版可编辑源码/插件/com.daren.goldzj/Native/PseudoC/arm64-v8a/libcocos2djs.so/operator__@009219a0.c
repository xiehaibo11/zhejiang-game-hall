
/* cocos2d::renderer::Technique::Parameter::TEMPNAMEPLACEHOLDERVALUE(cocos2d::renderer::Technique::Parameter
   const&) */

undefined8 __thiscall
cocos2d::renderer::Technique::Parameter::operator==(Parameter *this,Parameter *param_1)

{
  long lVar1;
  
  if (this == param_1) {
    return 1;
  }
  if (this[0x31] == param_1[0x31]) {
    lVar1 = 0x38;
    if (*(long *)(param_1 + 8) != 0) {
      lVar1 = 0;
    }
    if (*(long *)(this + 0x38) == *(long *)(param_1 + lVar1)) {
      return 1;
    }
  }
  return 0;
}

