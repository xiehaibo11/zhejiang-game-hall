
/* v8::Value::ToBoolean(v8::Isolate*) const */

void __thiscall v8::Value::ToBoolean(Value *this,Isolate *param_1)

{
  byte bVar1;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)this;
  bVar1 = internal::Object::BooleanValue((Object *)&local_8,(Isolate *)param_1);
  internal::Factory::ToBoolean((Factory *)param_1,(bool)(bVar1 & 1));
  return;
}

