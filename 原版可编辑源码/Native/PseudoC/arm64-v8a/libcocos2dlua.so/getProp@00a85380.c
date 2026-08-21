
/* fairygui::GObject::getProp(fairygui::ObjectPropID) */

void fairygui::GObject::getProp(Value *param_1,long *param_2,int param_3)

{
  basic_string *pbVar1;
  code *pcVar2;
  
  if (param_3 == 1) {
    pcVar2 = *(code **)(*param_2 + 0x20);
  }
  else {
    if (param_3 != 0) {
      cocos2d::Value::Value(param_1,(Value *)&cocos2d::Value::Null);
      return;
    }
    pcVar2 = *(code **)(*param_2 + 0x10);
  }
  pbVar1 = (basic_string *)(*pcVar2)();
  cocos2d::Value::Value(param_1,pbVar1);
  return;
}

