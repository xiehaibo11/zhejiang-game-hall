
/* v8::internal::compiler::TopLevelLiveRange::TopLevelLiveRange(int,
   v8::internal::MachineRepresentation) */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::TopLevelLiveRange
          (TopLevelLiveRange *this,undefined4 param_1,uint param_3)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(TopLevelLiveRange **)(this + 0x20) = this;
  *(undefined4 *)(this + 0x5c) = param_1;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x80] = (TopLevelLiveRange)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(TopLevelLiveRange **)(this + 0x90) = this;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x84) = 0x7fffffff;
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = (param_3 & 0xff) << 0xd | 0x8001000;
  this[0xa0] = (TopLevelLiveRange)0x0;
  return;
}

