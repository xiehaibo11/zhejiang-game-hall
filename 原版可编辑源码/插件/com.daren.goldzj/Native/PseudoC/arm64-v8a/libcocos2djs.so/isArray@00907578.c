
/* se::Object::isArray() const */

void __thiscall se::Object::isArray(Object *this)

{
  Value *this_00;
  
  this_00 = (Value *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  v8::Value::IsArray(this_00);
  return;
}

