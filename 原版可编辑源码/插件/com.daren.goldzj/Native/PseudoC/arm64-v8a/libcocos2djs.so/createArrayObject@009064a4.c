
/* se::Object::createArrayObject(unsigned long) */

void se::Object::createArrayObject(ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = v8::Array::New(DAT_01d371a8,(int)param_1);
  _createJSObject(0,uVar1);
  return;
}

