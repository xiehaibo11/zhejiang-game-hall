
/* cocostudio::ActionManagerEx::playActionByName(char const*, char const*, cocos2d::CallFunc*) */

ActionObject * __thiscall
cocostudio::ActionManagerEx::playActionByName
          (ActionManagerEx *this,char *param_1,char *param_2,CallFunc *param_3)

{
  ActionObject *this_00;
  
  this_00 = (ActionObject *)getActionByName(this,param_1,param_2);
  if (this_00 != (ActionObject *)0x0) {
    ActionObject::play(this_00,param_3);
  }
  return this_00;
}

