
/* v8::internal::wasm::ErrorThrower::ErrorThrower(v8::internal::wasm::ErrorThrower&&) */

void __thiscall
v8::internal::wasm::ErrorThrower::ErrorThrower(ErrorThrower *this,ErrorThrower *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

