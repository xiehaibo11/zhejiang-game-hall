
/* v8::internal::wasm::ErrorThrower::Format(v8::internal::wasm::ErrorThrower::ErrorType, char
   const*, std::__va_list) */

void __thiscall
v8::internal::wasm::ErrorThrower::Format
          (ErrorThrower *this,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(this + 0x10) == 0) {
    if (*(long *)(this + 8) == 0) {
      uVar1 = 0;
    }
    else {
      FUN_012581b8(this + 0x18);
      if (((byte)this[0x18] & 1) == 0) {
        uVar1 = (ulong)((byte)this[0x18] >> 1);
      }
      else {
        uVar1 = *(ulong *)(this + 0x20);
      }
    }
    uStack_48 = param_4[1];
    local_50 = *param_4;
    uStack_38 = param_4[3];
    uStack_40 = param_4[2];
    FUN_01257fe0(this + 0x18,uVar1,param_3,&local_50);
    *(undefined4 *)(this + 0x10) = param_2;
  }
  return;
}

