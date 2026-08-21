
/* v8::Value::BooleanValue(v8::Isolate*) const */

uint __thiscall v8::Value::BooleanValue(Value *this,Isolate *param_1)

{
  uint uVar1;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)this;
  uVar1 = internal::Object::BooleanValue((Object *)&local_18,(Isolate *)param_1);
  return uVar1 & 1;
}

