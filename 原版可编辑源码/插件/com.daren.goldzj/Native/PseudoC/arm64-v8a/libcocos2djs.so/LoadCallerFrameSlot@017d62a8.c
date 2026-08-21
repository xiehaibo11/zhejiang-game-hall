
/* v8::internal::wasm::LiftoffAssembler::LoadCallerFrameSlot(v8::internal::wasm::LiftoffRegister,
   unsigned int, v8::internal::wasm::ValueType) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::LoadCallerFrameSlot
          (LiftoffAssembler *this,byte param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulong local_20;
  int local_18;
  
  if (3 < (param_4 & 0xff) - 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  switch(param_4 & 0xff) {
  case 1:
    local_18 = 0;
    local_20 = 0x200000003f;
    if (param_2 != 0x3f) {
      local_20 = (ulong)param_2 | 0x2000000000;
    }
    break;
  case 2:
    local_18 = 0;
    local_20 = 0x400000003f;
    if (param_2 != 0x3f) {
      local_20 = (ulong)param_2 | 0x4000000000;
    }
    break;
  case 3:
    local_18 = 1;
    local_20 = (ulong)(param_2 - 0x1d) | 0x2000000000;
    break;
  case 4:
    local_18 = 1;
    local_20 = (ulong)(param_2 - 0x1d) | 0x4000000000;
  }
  local_50 = 0x400000001d;
  local_38 = (long)(param_3 * 8 + 8);
  local_3c = 2;
  local_48 = 0;
  local_30 = 0xffffffff00000000;
  uStack_28 = 0xffffffff;
  local_44 = 0xffffffff;
  iVar2 = (int)(local_20 >> 0x20);
  if (local_18 == 0) {
    uVar3 = 0xc0400000;
    if (iVar2 != 0x40) {
      uVar3 = 0x80400000;
    }
  }
  else {
    uVar1 = iVar2 - 8U >> 3;
    if (uVar1 < 8) {
      uVar3 = *(undefined4 *)(&DAT_01a63df8 + (long)(int)uVar1 * 4);
    }
    else {
      uVar3 = 0x4c00000;
    }
  }
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_20,&local_50,uVar3);
  return;
}

