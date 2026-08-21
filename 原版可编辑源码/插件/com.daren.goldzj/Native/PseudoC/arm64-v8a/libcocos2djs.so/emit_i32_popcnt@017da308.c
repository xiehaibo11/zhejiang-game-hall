
/* v8::internal::wasm::LiftoffAssembler::emit_i32_popcnt(v8::internal::Register,
   v8::internal::Register) */

undefined8
v8::internal::wasm::LiftoffAssembler::emit_i32_popcnt
          (Assembler *param_1,uint param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong local_a0;
  ulong uStack_98;
  Assembler *local_90;
  Assembler *pAStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70 [2];
  ulong local_60;
  undefined4 local_58;
  
  local_90 = param_1 + 0x198;
  pAStack_88 = param_1 + 0x1a8;
  local_80 = *(undefined8 *)(param_1 + 0x198);
  local_78 = *(undefined8 *)(param_1 + 0x1a8);
  uVar1 = UseScratchRegisterScope::AcquireNextAvailable(pAStack_88);
  lVar2 = RegisterSizeInBitsFromFormat(0);
  uVar3 = IsVectorFormat(0);
  uStack_98 = 0x100000001;
  if ((uVar3 & 1) != 0) {
    lVar4 = LaneCountFromFormat(0);
    uStack_98 = lVar4 << 0x20 | 1;
  }
  local_a0 = uVar1 & 0xffffffff | lVar2 << 0x20;
  local_70[0] = uVar1 & 0xffffffff | 0x2000000000;
  local_60 = 0x200000003f;
  if (param_4 != 0x3f) {
    local_60 = (ulong)param_4 | 0x2000000000;
  }
  local_70[1] = 0x100000001;
  local_58 = 0;
  Assembler::fmov(param_1,(VRegister *)local_70,(Register *)&local_60);
  Assembler::cnt(param_1,(VRegister *)&local_a0,(VRegister *)&local_a0);
  local_70[0] = local_a0 & 0xffffffff | 0x800000000;
  local_70[1] = 0x100000001;
  Assembler::addv(param_1,(VRegister *)local_70);
  local_60 = 0x200000003f;
  if (param_2 != 0x3f) {
    local_60 = (ulong)param_2 | 0x2000000000;
  }
  local_70[0] = local_a0 & 0xffffffff | 0x2000000000;
  local_58 = 0;
  local_70[1] = 0x100000001;
  Assembler::fmov(param_1,(Register *)&local_60,(VRegister *)local_70);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_90);
  return 1;
}

