
/* v8::internal::wasm::LiftoffAssembler::emit_i64_popcnt(v8::internal::wasm::LiftoffRegister,
   v8::internal::wasm::LiftoffRegister) */

undefined8 __thiscall
v8::internal::wasm::LiftoffAssembler::emit_i64_popcnt
          (LiftoffAssembler *this,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong local_a0;
  ulong uStack_98;
  LiftoffAssembler *local_90;
  LiftoffAssembler *pLStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70 [2];
  ulong local_60;
  undefined4 local_58;
  
  local_90 = this + 0x198;
  pLStack_88 = this + 0x1a8;
  local_80 = *(undefined8 *)(this + 0x198);
  local_78 = *(undefined8 *)(this + 0x1a8);
  uVar1 = UseScratchRegisterScope::AcquireNextAvailable(pLStack_88);
  lVar2 = RegisterSizeInBitsFromFormat(0);
  uVar3 = IsVectorFormat(0);
  uStack_98 = 0x100000001;
  if ((uVar3 & 1) != 0) {
    lVar4 = LaneCountFromFormat(0);
    uStack_98 = lVar4 << 0x20 | 1;
  }
  local_a0 = uVar1 & 0xffffffff | lVar2 << 0x20;
  local_70[0] = uVar1 & 0xffffffff | 0x4000000000;
  local_60 = param_3 & 0xff | 0x4000000000;
  local_70[1] = 0x100000001;
  local_58 = 0;
  Assembler::fmov((Assembler *)this,(VRegister *)local_70,(Register *)&local_60);
  Assembler::cnt((Assembler *)this,(VRegister *)&local_a0,(VRegister *)&local_a0);
  local_70[0] = local_a0 & 0xffffffff | 0x800000000;
  local_70[1] = 0x100000001;
  Assembler::addv(this,(VRegister *)local_70);
  local_60 = param_2 & 0xff | 0x4000000000;
  local_70[0] = local_a0 & 0xffffffff | 0x4000000000;
  local_58 = 0;
  local_70[1] = 0x100000001;
  Assembler::fmov((Assembler *)this,(Register *)&local_60,(VRegister *)local_70);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_90);
  return 1;
}

