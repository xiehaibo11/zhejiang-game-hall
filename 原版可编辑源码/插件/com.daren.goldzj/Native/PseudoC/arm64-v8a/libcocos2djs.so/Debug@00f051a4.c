
/* v8::internal::Debug::Debug(v8::internal::Isolate*) */

void __thiscall v8::internal::Debug::Debug(Debug *this,Isolate *param_1)

{
  *(undefined4 *)(this + 0xd) = 1;
  this[0x4c] = (Debug)0xff;
  *(undefined8 *)(this + 5) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Isolate **)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x38) = 0;
  *(Isolate **)(this + 0x88) = param_1;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x58] = (Debug)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)(this + 100) = 0xffffffff;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x84] = (Debug)0x0;
  this[9] = (Debug)(*(int *)(param_1 + 0xb80c) == 0x20);
  return;
}

