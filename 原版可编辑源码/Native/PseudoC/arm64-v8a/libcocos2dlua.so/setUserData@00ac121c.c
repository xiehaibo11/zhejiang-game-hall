
/* fairygui::GTweener::setUserData(cocos2d::Value const&) */

GTweener * __thiscall fairygui::GTweener::setUserData(GTweener *this,Value *param_1)

{
  cocos2d::Value::operator=((Value *)(this + 200),param_1);
  return this;
}

