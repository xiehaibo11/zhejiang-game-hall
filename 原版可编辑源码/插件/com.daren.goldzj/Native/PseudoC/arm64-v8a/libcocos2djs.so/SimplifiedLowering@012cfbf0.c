
/* v8::internal::compiler::SimplifiedLowering::SimplifiedLowering(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::JSHeapBroker*, v8::internal::Zone*,
   v8::internal::compiler::SourcePositionTable*, v8::internal::compiler::NodeOriginTable*,
   v8::internal::PoisoningMitigationLevel, v8::internal::TickCounter*) */

void __thiscall
v8::internal::compiler::SimplifiedLowering::SimplifiedLowering
          (SimplifiedLowering *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5,undefined4 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = param_3;
  uVar1 = TypeCache::Get();
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x50) = param_4;
  *(undefined8 *)(this + 0x58) = param_5;
  *(undefined4 *)(this + 0x60) = param_7;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x68) = param_8;
  return;
}

