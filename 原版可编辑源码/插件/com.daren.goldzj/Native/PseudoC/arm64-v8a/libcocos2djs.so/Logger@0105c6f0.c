
/* v8::internal::Logger::Logger(v8::internal::Isolate*) */

void __thiscall v8::internal::Logger::Logger(Logger *this,Isolate *param_1)

{
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)this = &PTR__Logger_01cb22a8;
  *(Isolate **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (Logger)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6c] = (Logger)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(Logger **)(this + 0x50) = this + 0x58;
  *(Isolate **)(this + 0x70) = param_1;
  return;
}

