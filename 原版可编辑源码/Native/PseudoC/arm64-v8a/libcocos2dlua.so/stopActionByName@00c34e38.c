
/* cocostudio::ActionManagerEx::stopActionByName(char const*, char const*) */

ActionObject * __thiscall
cocostudio::ActionManagerEx::stopActionByName(ActionManagerEx *this,char *param_1,char *param_2)

{
  ActionObject *this_00;
  
  this_00 = (ActionObject *)getActionByName(this,param_1,param_2);
  if (this_00 != (ActionObject *)0x0) {
    ActionObject::stop(this_00);
  }
  return this_00;
}

