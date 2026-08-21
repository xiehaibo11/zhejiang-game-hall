
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Value const&) const */

uint __thiscall cocos2d::Value::operator!=(Value *this,Value *param_1)

{
  uint uVar1;
  
  uVar1 = operator==(this,param_1);
  return ~uVar1 & 1;
}

