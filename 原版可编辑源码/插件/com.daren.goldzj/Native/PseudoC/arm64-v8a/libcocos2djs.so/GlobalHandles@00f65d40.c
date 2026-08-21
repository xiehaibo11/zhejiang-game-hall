
/* v8::internal::GlobalHandles::GlobalHandles(v8::internal::Isolate*) */

void __thiscall v8::internal::GlobalHandles::GlobalHandles(GlobalHandles *this,Isolate *param_1)

{
  undefined8 *puVar1;
  
  *(Isolate **)this = param_1;
  puVar1 = operator_new(0x20);
  *puVar1 = this;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 **)(this + 8) = puVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  puVar1 = operator_new(0x20);
  *puVar1 = this;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 **)(this + 0x28) = puVar1;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined2 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

