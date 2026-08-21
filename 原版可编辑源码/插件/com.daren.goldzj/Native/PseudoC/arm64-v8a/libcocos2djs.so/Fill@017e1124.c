
/* v8::internal::wasm::LiftoffAssembler::Fill(v8::internal::wasm::LiftoffRegister, unsigned int,
   v8::internal::wasm::ValueType) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::Fill
          (LiftoffAssembler *this,byte param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = (long)(-0x10 - param_3);
  local_38 = 0;
  local_40 = 0x400000001d;
  local_34 = 0xffffffff;
  local_2c = 2;
  local_20 = 0xffffffff00000000;
  uStack_18 = 0xffffffff;
  local_50 = 0x200000003f;
  uVar3 = 0x2000000000;
  switch(param_4) {
  case 2:
    local_50 = 0x400000003f;
    uVar3 = 0x4000000000;
  case 1:
    if (param_2 != 0x3f) {
      local_50 = param_2 | uVar3;
    }
    local_48 = 0;
    uVar2 = 0xc0400000;
    if ((local_50 & 0x6000000000) != 0x4000000000) {
      uVar2 = 0x80400000;
    }
    break;
  case 4:
    uVar3 = 0x4000000000;
  case 3:
    uVar1 = (int)(uVar3 >> 0x20) - 8;
    local_50 = param_2 - 0x1d | uVar3;
    local_48 = 1;
    if (uVar1 < 0x40) {
      uVar2 = *(undefined4 *)(&DAT_01a63df8 + (ulong)(uVar1 >> 3) * 4);
    }
    else {
      uVar2 = 0x4c00000;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_50,&local_40,uVar2);
  return;
}

