
/* v8::internal::ValueSerializer::ValueSerializer(v8::internal::Isolate*,
   v8::ValueSerializer::Delegate*) */

void __thiscall
v8::internal::ValueSerializer::ValueSerializer
          (ValueSerializer *this,Isolate *param_1,Delegate *param_2)

{
  Zone *this_00;
  
  *(Isolate **)this = param_1;
  *(Delegate **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x28) = 0;
  this_00 = (Zone *)(this + 0x30);
  Zone::Zone(this_00,*(AccountingAllocator **)(param_1 + 0x95d0),
             "../../src/objects/value-serializer.cc:245");
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0xa1) = 0;
  *(Zone **)(this + 0xb0) = this_00;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0xf1) = 0;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(Isolate **)(this + 0x80) = param_1 + 0x8850;
  *(undefined ***)(this + 0x70) = &PTR__IdentityMap_01cb4f18;
  *(Isolate **)(this + 0xd0) = param_1 + 0x8850;
  *(undefined ***)(this + 0xc0) = &PTR__IdentityMap_01cb4f18;
  *(Zone **)(this + 0x100) = this_00;
  return;
}

