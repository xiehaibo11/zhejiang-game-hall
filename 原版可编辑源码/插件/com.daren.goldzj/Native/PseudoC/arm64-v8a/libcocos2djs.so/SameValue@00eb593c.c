
/* v8::Value::SameValue(v8::Local<v8::Value>) const */

uint __thiscall v8::Value::SameValue(Value *this,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)this;
  uVar1 = internal::Object::SameValue((Object *)&local_18,*param_2);
  return uVar1 & 1;
}

