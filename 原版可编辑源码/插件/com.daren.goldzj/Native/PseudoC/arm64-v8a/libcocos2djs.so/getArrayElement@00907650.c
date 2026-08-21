
/* se::Object::getArrayElement(unsigned int, se::Value*) const */

bool __thiscall se::Object::getArrayElement(Object *this,uint param_1,Value *param_2)

{
  Object *pOVar1;
  undefined8 uVar2;
  long lVar3;
  
  pOVar1 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  uVar2 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
  lVar3 = v8::Object::Get(pOVar1,uVar2,param_1);
  if (lVar3 != 0) {
    internal::jsToSeValue(DAT_01d371a8,lVar3,param_2);
  }
  return lVar3 != 0;
}

