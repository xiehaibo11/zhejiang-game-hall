
/* v8::internal::wasm::LiftoffAssembler::emit_f64_copysign(v8::internal::VRegister,
   v8::internal::VRegister, v8::internal::VRegister) */

void v8::internal::wasm::LiftoffAssembler::emit_f64_copysign
               (Assembler *param_1,ulong param_2,int param_3,ulong param_4,int param_5,ulong param_6
               )

{
  ulong uVar1;
  ulong uVar2;
  Assembler *local_a0;
  Assembler *pAStack_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80 [3];
  undefined8 uStack_68;
  
  local_a0 = param_1 + 0x198;
  pAStack_98 = param_1 + 0x1a8;
  local_90 = *(undefined8 *)(param_1 + 0x198);
  local_88 = *(undefined8 *)(param_1 + 0x1a8);
  uVar1 = UseScratchRegisterScope::AcquireNextAvailable(pAStack_98);
  uVar1 = uVar1 & 0xffffffff | 0x4000000000;
  local_80[0] = param_6 & 0xffffffff | 0x4000000000;
  uStack_68 = 0x100000001;
  local_80[1] = 0x100000001;
  local_80[2] = uVar1;
  Assembler::ushr(param_1,(VRegister *)(local_80 + 2),(VRegister *)local_80,0x3f);
  if (((param_3 == param_5) && ((int)param_2 == (int)param_4)) &&
     ((int)(param_2 >> 0x20) == (int)(param_4 >> 0x20))) {
    uVar2 = param_2 & 0xffffffff | 0x4000000000;
  }
  else {
    local_80[0] = param_4 & 0xffffffff | 0x4000000000;
    uVar2 = param_2 & 0xffffffff | 0x4000000000;
    uStack_68 = 0x100000001;
    local_80[1] = 0x100000001;
    if ((int)param_2 != (int)param_4) {
      local_80[2] = uVar2;
      Assembler::fmov(param_1,(VRegister *)(local_80 + 2),(VRegister *)local_80);
    }
  }
  uStack_68 = 0x100000001;
  local_80[1] = 0x100000001;
  local_80[0] = uVar1;
  local_80[2] = uVar2;
  Assembler::sli(param_1,(VRegister *)(local_80 + 2),(VRegister *)local_80,0x3f);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_a0);
  return;
}

