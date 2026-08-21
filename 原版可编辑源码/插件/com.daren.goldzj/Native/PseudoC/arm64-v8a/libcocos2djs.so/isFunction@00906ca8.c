
/* se::Object::isFunction() const */

void __thiscall se::Object::isFunction(Object *this)

{
  Object *this_00;
  
  this_00 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  v8::Object::IsCallable(this_00);
  return;
}

