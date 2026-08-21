
/* v8::ValueSerializer::ValueSerializer(v8::Isolate*) */

void __thiscall v8::ValueSerializer::ValueSerializer(ValueSerializer *this,Isolate *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x110);
  *puVar1 = param_1;
  internal::ValueSerializer::ValueSerializer
            ((ValueSerializer *)(puVar1 + 1),(Isolate *)param_1,(Delegate *)0x0);
  *(undefined8 **)this = puVar1;
  return;
}

