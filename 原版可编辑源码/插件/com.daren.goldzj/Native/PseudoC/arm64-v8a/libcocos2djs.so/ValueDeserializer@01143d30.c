
/* v8::internal::ValueDeserializer::ValueDeserializer(v8::internal::Isolate*,
   v8::internal::Vector<unsigned char const>, v8::ValueDeserializer::Delegate*) */

void __thiscall
v8::internal::ValueDeserializer::ValueDeserializer
          (ValueDeserializer *this,long param_1,long param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  *(long *)this = param_1;
  *(undefined8 *)(this + 8) = param_5;
  *(long *)(this + 0x18) = param_3 + param_4;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (ValueDeserializer)0x0;
  *(long *)(this + 0x10) = param_3;
  uVar1 = GlobalHandles::Create
                    (*(GlobalHandles **)(param_1 + 0x95e0),*(undefined8 *)(param_1 + 0x168));
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

