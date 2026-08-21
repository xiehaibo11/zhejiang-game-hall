
/* v8::internal::wasm::LiftoffAssembler::emit_f32_copysign(v8::internal::VRegister,
   v8::internal::VRegister, v8::internal::VRegister) */

void v8::internal::wasm::LiftoffAssembler::emit_f32_copysign
               (Assembler *param_1,ulong param_2,int param_3,ulong param_4,int param_5,ulong param_6
               )

{
  ulong uVar1;
  Assembler *local_90;
  Assembler *pAStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70 [3];
  undefined8 uStack_58;
  
  local_90 = param_1 + 0x198;
  pAStack_88 = param_1 + 0x1a8;
  local_80 = *(undefined8 *)(param_1 + 0x198);
  local_78 = *(undefined8 *)(param_1 + 0x1a8);
  uVar1 = UseScratchRegisterScope::AcquireNextAvailable(pAStack_88);
  uVar1 = uVar1 & 0xffffffff | 0x4000000000;
  local_70[0] = param_6 & 0xffffffff | 0x4000000000;
  uStack_58 = 0x200000001;
  local_70[1] = 0x200000001;
  local_70[2] = uVar1;
  Assembler::ushr(param_1,(VRegister *)(local_70 + 2),(VRegister *)local_70,0x1f);
  if (((param_3 != param_5) || ((int)param_2 != (int)param_4)) ||
     ((int)(param_2 >> 0x20) != (int)(param_4 >> 0x20))) {
    local_70[2] = param_2 & 0xffffffff | 0x2000000000;
    local_70[0] = param_4 & 0xffffffff | 0x2000000000;
    uStack_58 = 0x100000001;
    local_70[1] = 0x100000001;
    Assembler::fmov(param_1,(VRegister *)(local_70 + 2),(VRegister *)local_70);
  }
  local_70[2] = param_2 & 0xffffffff | 0x4000000000;
  uStack_58 = 0x200000001;
  local_70[1] = 0x200000001;
  local_70[0] = uVar1;
  Assembler::sli(param_1,(VRegister *)(local_70 + 2),(VRegister *)local_70,0x1f);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_90);
  return;
}

