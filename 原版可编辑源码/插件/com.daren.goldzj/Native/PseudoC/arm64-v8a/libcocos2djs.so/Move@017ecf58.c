
/* v8::internal::wasm::LiftoffAssembler::Move(v8::internal::wasm::LiftoffRegister,
   v8::internal::wasm::LiftoffRegister, v8::internal::wasm::ValueType) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::Move
          (LiftoffAssembler *this,byte param_2,byte param_3,char param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_50;
  undefined1 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = (ulong)param_2;
  if (param_2 < 0x1d) {
    if (param_4 == '\x01') {
      local_40 = 0x200000003f;
      local_80 = local_40;
      if (param_2 != 0x3f) {
        local_80 = uVar3 | 0x2000000000;
      }
      uVar3 = (ulong)param_3 | 0x2000000000;
    }
    else {
      local_40 = 0x400000003f;
      local_80 = local_40;
      if (param_2 != 0x3f) {
        local_80 = uVar3 | 0x4000000000;
      }
      uVar3 = (ulong)param_3 | 0x4000000000;
    }
    local_78 = local_78 & 0xffffffff00000000;
    if (param_3 != 0x3f) {
      local_40 = uVar3;
    }
    local_70 = local_70 & 0xffffffffffffff00;
    local_68 = local_68 & 0xffffffffffffff00;
    local_50 = 0;
    local_48 = 0x13;
    uStack_30 = 0xffffffff;
    local_38 = 0;
    TurboAssembler::Mov((TurboAssembler *)this,&local_80,&local_70,0);
  }
  else {
    uVar1 = param_3 - 0x1d;
    uVar4 = uVar3 + 0xffffffe3 & 0xffffffff;
    if (param_4 == '\x03') {
      local_70 = uVar4 | 0x2000000000;
      local_80 = (ulong)uVar1 | 0x2000000000;
    }
    else {
      local_80 = (ulong)uVar1 | 0x4000000000;
      local_70 = uVar4 | 0x4000000000;
      local_68 = 0x100000001;
      local_78 = 0x100000001;
      if ((uint)(uVar3 + 0xffffffe3) == uVar1) goto LAB_017ed080;
    }
    local_68 = 0x100000001;
    local_78 = 0x100000001;
    Assembler::fmov((Assembler *)this,(VRegister *)&local_70,(VRegister *)&local_80);
  }
LAB_017ed080:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

