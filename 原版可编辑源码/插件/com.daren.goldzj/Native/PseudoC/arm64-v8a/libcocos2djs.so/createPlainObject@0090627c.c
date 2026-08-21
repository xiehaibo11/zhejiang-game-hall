
/* se::Object::createPlainObject() */

void se::Object::createPlainObject(void)

{
  undefined8 uVar1;
  
  uVar1 = v8::Object::New(DAT_01d371a8);
  _createJSObject(0,uVar1);
  return;
}

