
/* v8::internal::Debug::ThreadInit() */

void __thiscall v8::internal::Debug::ThreadInit(Debug *this)

{
  *(undefined4 *)(this + 0x48) = 0;
  this[0x58] = (Debug)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x4c] = (Debug)0xff;
  *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)(this + 100) = 0xffffffff;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x84] = (Debug)0x0;
  this[9] = (Debug)(*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20);
  return;
}

