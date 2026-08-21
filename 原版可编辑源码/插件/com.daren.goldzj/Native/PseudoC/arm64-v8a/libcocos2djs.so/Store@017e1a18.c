
/* v8::internal::wasm::LiftoffAssembler::Store(v8::internal::Register, v8::internal::Register,
   unsigned int, v8::internal::wasm::LiftoffRegister, v8::internal::wasm::StoreType,
   v8::internal::wasm::LiftoffRegList, unsigned int*, bool) */

void v8::internal::wasm::LiftoffAssembler::Store
               (TurboAssembler *param_1,uint param_2,undefined8 param_3,uint param_4,
               undefined8 param_5,int param_6,ulong param_7,undefined1 param_8,undefined8 param_9,
               int *param_10)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong local_e0;
  undefined8 local_d8;
  TurboAssembler *local_d0;
  TurboAssembler *pTStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
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
  local_d0 = param_1 + 0x198;
  pTStack_c8 = param_1 + 0x1a8;
  local_c0 = *(undefined8 *)(param_1 + 0x198);
  local_b8 = *(undefined8 *)(param_1 + 0x1a8);
  uVar2 = local_d8;
  if (param_4 == 0xffffffff) {
    local_a0 = 0x400000003f;
    if (param_2 != 0x3f) {
      local_a0 = (ulong)param_2 | 0x4000000000;
    }
    local_8c = 2;
    local_94 = 0xffffffff;
    local_78 = 0xffffffff;
    iStack_88 = param_6;
  }
  else if (param_6 == 0) {
    local_a0 = 0x400000003f;
    if (param_2 != 0x3f) {
      local_a0 = (ulong)param_2 | 0x4000000000;
    }
    local_94 = 0x200000003f;
    if (param_4 != 0x3f) {
      local_94 = (ulong)param_4 | 0x2000000000;
    }
    local_8c = 0;
    iStack_88 = 0;
    local_78 = 2;
  }
  else {
    uVar3 = UseScratchRegisterScope::AcquireNextAvailable(local_d0);
    uStack_7c = 0;
    local_78 = CONCAT31(local_78._1_3_,0x13);
    local_e0 = 0x200000003f;
    if (uVar3 != 0x3f) {
      local_e0 = (ulong)uVar3 | 0x2000000000;
    }
    local_b0 = 0x200000003f;
    if (param_4 != 0x3f) {
      local_b0 = (ulong)param_4 | 0x2000000000;
    }
    local_d8 = local_d8 & 0xffffffff00000000;
    local_a8 = 0;
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_98 = local_98 & 0xffffff00;
    local_70 = 0xffffffff;
    local_68 = 2;
    iStack_80 = param_6;
    TurboAssembler::AddSubMacro(param_1,&local_e0,&local_b0,&local_a0,0,0);
    local_a0 = 0x400000003f;
    if (param_2 != 0x3f) {
      local_a0 = (ulong)param_2 | 0x4000000000;
    }
    iStack_88 = 0;
    local_78 = 2;
    local_94 = local_e0;
    local_8c = (undefined4)local_d8;
    uVar2 = local_d8;
  }
  if (param_10 != (int *)0x0) {
    *param_10 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10);
  }
  local_74 = 0;
  uStack_7c = 0xffffffff;
  iStack_80 = 0;
  uStack_84 = 0;
  local_98 = 0;
  local_d8._4_4_ = (uint)(uVar2 >> 0x20);
  switch(param_8) {
  case 0:
  case 6:
    local_e0 = param_7 & 0xff | 0x2000000000;
    local_d8 = (ulong)local_d8._4_4_ << 0x20;
    uVar4 = 0x80000000;
    break;
  case 1:
  case 4:
    local_e0 = param_7 & 0xff | 0x2000000000;
    uVar4 = 0;
    local_d8 = (ulong)local_d8._4_4_ << 0x20;
    break;
  case 2:
  case 5:
    local_e0 = param_7 & 0xff | 0x2000000000;
    local_d8 = (ulong)local_d8._4_4_ << 0x20;
    uVar4 = 0x40000000;
    break;
  case 3:
    local_e0 = param_7 & 0xff | 0x4000000000;
    local_d8 = (ulong)local_d8._4_4_ << 0x20;
    uVar4 = 0xc0000000;
    break;
  case 7:
    local_e0 = (ulong)(((uint)param_7 & 0xff) - 0x1d) | 0x2000000000;
    local_d8 = 0x100000001;
    uVar4 = 0x84000000;
    break;
  case 8:
    local_e0 = (ulong)(((uint)param_7 & 0xff) - 0x1d) | 0x4000000000;
    local_d8 = 0x100000001;
    uVar4 = 0xc4000000;
    break;
  default:
    local_d8 = uVar2;
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  TurboAssembler::LoadStoreMacro(param_1,&local_e0,&local_a0,uVar4);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_d0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

