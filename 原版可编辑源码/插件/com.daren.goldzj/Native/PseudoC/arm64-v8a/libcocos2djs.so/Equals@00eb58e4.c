
/* v8::Value::Equals(v8::Local<v8::Context>, v8::Local<v8::Value>) const */

undefined2 v8::Value::Equals(undefined8 param_1,long param_2)

{
  undefined2 uVar1;
  
  uVar1 = internal::Object::Equals((ulong)*(uint *)(param_2 + 4) << 0x20,param_1);
  return uVar1;
}

