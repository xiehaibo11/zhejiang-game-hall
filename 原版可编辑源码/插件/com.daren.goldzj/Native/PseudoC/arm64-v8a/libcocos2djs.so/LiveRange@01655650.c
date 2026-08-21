
/* v8::internal::compiler::LiveRange::LiveRange(int, v8::internal::MachineRepresentation,
   v8::internal::compiler::TopLevelLiveRange*) */

void __thiscall
v8::internal::compiler::LiveRange::LiveRange
          (LiveRange *this,undefined4 param_1,uint param_3,undefined8 param_4)

{
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = param_4;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)this = param_1;
  *(uint *)(this + 4) = (param_3 & 0xff) << 0xd | 0x8001000;
  return;
}

