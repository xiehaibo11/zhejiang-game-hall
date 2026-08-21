
/* v8::internal::Factory::CodeBuilder::CodeBuilder(v8::internal::Isolate*, v8::internal::CodeDesc
   const&, v8::internal::Code::Kind) */

void __thiscall
v8::internal::Factory::CodeBuilder::CodeBuilder
          (CodeBuilder *this,Isolate *param_1,undefined8 param_2,undefined4 param_4)

{
  undefined8 uVar1;
  
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = param_4;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0xffffffff;
  *(Isolate **)(this + 0x28) = param_1 + 0x3c0;
  uVar1 = DeoptimizationData::Empty(param_1);
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = 0x10001;
  return;
}

