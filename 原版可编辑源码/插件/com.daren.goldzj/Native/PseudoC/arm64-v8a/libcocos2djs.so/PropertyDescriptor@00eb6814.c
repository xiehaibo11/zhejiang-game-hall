
/* v8::PropertyDescriptor::PropertyDescriptor(v8::Local<v8::Value>) */

void __thiscall
v8::PropertyDescriptor::PropertyDescriptor(PropertyDescriptor *this,undefined8 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = operator_new(0x28);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 8) = param_2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined1 **)this = puVar1;
  return;
}

