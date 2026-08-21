
/* v8::internal::wasm::LiftoffAssembler::LoadTaggedPointer(v8::internal::Register,
   v8::internal::Register, v8::internal::Register, unsigned int, v8::internal::wasm::LiftoffRegList)
    */

void v8::internal::wasm::LiftoffAssembler::LoadTaggedPointer
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,uint param_4,
               undefined8 param_5,uint param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  TurboAssembler *local_f0;
  TurboAssembler *pTStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  ulong local_c0;
  undefined4 local_b8;
  ulong local_b0;
  undefined4 local_a8;
  ulong local_a0;
  uint local_98;
  ulong local_94;
  undefined4 local_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_f0 = param_1 + 0x198;
  pTStack_e8 = param_1 + 0x1a8;
  local_e0 = *(undefined8 *)(param_1 + 0x198);
  local_d8 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_d0 = param_2;
  local_c8 = param_3;
  if (param_6 == 0xffffffff) {
    local_a0 = 0x400000003f;
    if (param_4 != 0x3f) {
      local_a0 = (ulong)param_4 | 0x4000000000;
    }
    local_94 = 0xffffffff;
    local_8c = 2;
    local_78 = 0xffffffff;
    iStack_88 = param_8;
  }
  else {
    uVar3 = 0x200000003f;
    if (param_8 == 0) {
      local_a0 = 0x400000003f;
      if (param_4 != 0x3f) {
        local_a0 = (ulong)param_4 | 0x4000000000;
      }
      local_94 = uVar3;
      if (param_6 != 0x3f) {
        local_94 = (ulong)param_6 | 0x2000000000;
      }
      local_8c = 0;
      iStack_88 = 0;
      local_78 = 2;
    }
    else {
      uVar2 = UseScratchRegisterScope::AcquireNextAvailable(local_f0);
      uStack_7c = 0;
      local_78 = CONCAT31(local_78._1_3_,0x13);
      local_b0 = uVar3;
      if (uVar2 != 0x3f) {
        local_b0 = (ulong)uVar2 | 0x2000000000;
      }
      local_c0 = uVar3;
      if (param_6 != 0x3f) {
        local_c0 = (ulong)param_6 | 0x2000000000;
      }
      local_a8 = 0;
      local_b8 = 0;
      local_a0 = local_a0 & 0xffffffffffffff00;
      local_98 = local_98 & 0xffffff00;
      local_70 = 0xffffffff;
      local_68 = 2;
      iStack_80 = param_8;
      TurboAssembler::AddSubMacro(param_1,&local_b0,&local_c0,&local_a0,0,0);
      local_a0 = 0x400000003f;
      if (param_4 != 0x3f) {
        local_a0 = (ulong)param_4 | 0x4000000000;
      }
      iStack_88 = 0;
      local_94 = local_b0;
      local_8c = local_a8;
      local_78 = 2;
    }
  }
  local_74 = 0;
  uStack_7c = 0xffffffff;
  iStack_80 = 0;
  uStack_84 = 0;
  local_98 = 0;
  TurboAssembler::LoadTaggedPointerField(param_1,(Register *)&uStack_d0,(MemOperand *)&local_a0);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_f0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

