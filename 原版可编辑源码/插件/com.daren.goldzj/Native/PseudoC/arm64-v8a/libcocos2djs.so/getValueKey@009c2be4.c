
/* cocos2d::renderer::ProgramLib::getValueKey(cocos2d::Value const*) */

ulong __thiscall cocos2d::renderer::ProgramLib::getValueKey(ProgramLib *this,Value *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 8) == 6) {
    uVar1 = cocos2d::Value::asBool(param_1);
    return (ulong)(uVar1 & 1);
  }
  uVar2 = cocos2d::Value::asUnsignedInt(param_1);
  return uVar2;
}

