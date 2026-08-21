
/* se::Object::isTypedArray() const */

void __thiscall se::Object::isTypedArray(Object *this)

{
  Value *this_00;
  
  this_00 = (Value *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  v8::Value::IsTypedArray(this_00);
  return;
}

