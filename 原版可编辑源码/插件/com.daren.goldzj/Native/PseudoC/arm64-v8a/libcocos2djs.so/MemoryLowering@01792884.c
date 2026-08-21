
/* v8::internal::compiler::MemoryLowering::MemoryLowering(v8::internal::compiler::JSGraph*,
   v8::internal::Zone*, v8::internal::compiler::GraphAssembler*,
   v8::internal::PoisoningMitigationLevel,
   v8::internal::compiler::MemoryLowering::AllocationFolding, std::__ndk1::function<void
   (v8::internal::compiler::Node*, v8::internal::compiler::Node*, char const*,
   v8::internal::Zone*)>, char const*) */

void __thiscall
v8::internal::compiler::MemoryLowering::MemoryLowering
          (MemoryLowering *this,undefined8 *param_1,undefined8 param_2,undefined8 param_3,
          undefined4 param_5,undefined4 param_6,long *param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__MemoryLowering_01cd9578;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = param_1[0x2d];
  *(undefined8 *)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)*param_1;
  *(undefined8 *)(this + 0x28) = param_1[1];
  uVar2 = param_1[2];
  *(undefined4 *)(this + 0x40) = param_6;
  *(undefined4 *)(this + 0x44) = param_5;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x38) = param_3;
  plVar1 = (long *)param_7[4];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(this + 0x70) = 0;
  }
  else if (param_7 == plVar1) {
    *(MemoryLowering **)(this + 0x70) = this + 0x50;
    (**(code **)(*(long *)param_7[4] + 0x18))();
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(this + 0x70) = uVar2;
  }
  *(undefined8 *)(this + 0x80) = param_8;
  return;
}

