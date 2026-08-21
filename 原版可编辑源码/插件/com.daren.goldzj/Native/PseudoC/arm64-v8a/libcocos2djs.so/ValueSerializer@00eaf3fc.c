
/* v8::ValueSerializer::ValueSerializer(v8::Isolate*, v8::ValueSerializer::Delegate*) */

void __thiscall
v8::ValueSerializer::ValueSerializer(ValueSerializer *this,Isolate *param_1,Delegate *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x110);
  *puVar1 = param_1;
  internal::ValueSerializer::ValueSerializer
            ((ValueSerializer *)(puVar1 + 1),(Isolate *)param_1,param_2);
  *(undefined8 **)this = puVar1;
  return;
}

