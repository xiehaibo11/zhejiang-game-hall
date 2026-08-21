
/* v8::ValueDeserializer::ValueDeserializer(v8::Isolate*, unsigned char const*, unsigned long,
   v8::ValueDeserializer::Delegate*) */

void __thiscall
v8::ValueDeserializer::ValueDeserializer
          (ValueDeserializer *this,Isolate *param_1,uchar *param_2,ulong param_3,Delegate *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  if (param_3 >> 0x1f == 0) {
    *puVar1 = param_1;
    internal::ValueDeserializer::ValueDeserializer
              ((ValueDeserializer *)(puVar1 + 1),param_1,param_2,param_3,param_4);
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined8 **)this = puVar1;
  }
  else {
    *puVar1 = param_1;
    internal::ValueDeserializer::ValueDeserializer((ValueDeserializer *)(puVar1 + 1),param_1,0,0,0);
    *(undefined1 *)((long)puVar1 + 0x49) = 0;
    *(undefined8 **)this = puVar1;
    *(undefined1 *)(puVar1 + 9) = 1;
  }
  return;
}

