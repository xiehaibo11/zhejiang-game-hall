
/* v8::SharedArrayBuffer::Contents::Contents(void*, unsigned long, void*, unsigned long,
   v8::ArrayBuffer::Allocator::AllocationMode, void (*)(void*, unsigned long, void*), void*) */

void __thiscall
v8::SharedArrayBuffer::Contents::Contents
          (Contents *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x18) = param_4;
  *(undefined4 *)(this + 0x20) = param_6;
  *(undefined8 *)(this + 0x28) = param_7;
  *(undefined8 *)(this + 0x30) = param_8;
  return;
}

