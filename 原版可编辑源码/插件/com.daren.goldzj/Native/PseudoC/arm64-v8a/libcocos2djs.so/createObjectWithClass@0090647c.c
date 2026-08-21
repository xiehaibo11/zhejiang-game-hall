
/* se::Object::createObjectWithClass(se::Class*) */

void se::Object::createObjectWithClass(Class *param_1)

{
  undefined8 uVar1;
  
  uVar1 = Class::_createJSObjectWithClass(param_1);
  _createJSObject(param_1,uVar1);
  return;
}

