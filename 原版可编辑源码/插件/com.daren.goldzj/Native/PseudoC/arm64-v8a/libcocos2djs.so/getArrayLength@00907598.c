
/* se::Object::getArrayLength(unsigned int*) const */

undefined8 __thiscall se::Object::getArrayLength(Object *this,uint *param_1)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  Value *pVVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = v8::String::NewFromUtf8(DAT_01d371a8,"length",0,0xffffffff);
  if (lVar1 == 0) {
    *param_1 = 0;
    uVar6 = 0;
  }
  else {
    uVar2 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
    pOVar3 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
    pVVar4 = (Value *)v8::Object::Get(pOVar3,uVar2,lVar1);
    uVar6 = 0;
    if ((pVVar4 != (Value *)0x0) &&
       (pVVar4 = (Value *)v8::Value::ToObject(pVVar4,uVar2), uVar6 = 0, pVVar4 != (Value *)0x0)) {
      uVar5 = v8::Value::Uint32Value(pVVar4,uVar2);
      if ((uVar5 & 0xff) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
        *param_1 = (uint)(uVar5 >> 0x20);
      }
    }
  }
  return uVar6;
}

