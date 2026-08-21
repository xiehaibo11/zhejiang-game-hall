
/* v8::internal::wasm::LiftoffAssembler::Spill(unsigned int, v8::internal::wasm::WasmValue) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::Spill(LiftoffAssembler *this,uint param_1,char *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ulong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  int local_88;
  LiftoffAssembler *local_80;
  LiftoffAssembler *pLStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(uint *)(this + 0x340) <= param_1) {
    *(uint *)(this + 0x340) = param_1;
  }
  local_48 = (long)(int)(-0x10 - param_1);
  local_80 = this + 0x198;
  pLStack_78 = this + 0x1a8;
  local_58 = 0;
  local_60 = 0x400000001d;
  local_40 = 0xffffffff00000000;
  uStack_38 = 0xffffffff;
  local_54 = 0xffffffff;
  local_4c = 2;
  local_70 = *(undefined8 *)(this + 0x198);
  local_68 = *(undefined8 *)(this + 0x1a8);
  local_90 = 0xffffffff;
  local_88 = 2;
  if (*param_3 == '\x02') {
    if (*(long *)(param_3 + 1) != 0) {
      uVar2 = UseScratchRegisterScope::AcquireNextAvailable(local_80);
      local_90 = 0x400000003f;
      if (uVar2 != 0x3f) {
        local_90 = (ulong)uVar2 | 0x4000000000;
      }
      uVar3 = *(ulong *)(param_3 + 1);
      goto LAB_017ebe70;
    }
    puVar5 = &DAT_01a64280;
  }
  else {
    if (*param_3 != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (*(int *)(param_3 + 1) != 0) {
      uVar2 = UseScratchRegisterScope::AcquireNextAvailable(local_80);
      local_90 = 0x200000003f;
      if (uVar2 != 0x3f) {
        local_90 = (ulong)uVar2 | 0x2000000000;
      }
      uVar3 = (ulong)*(int *)(param_3 + 1);
LAB_017ebe70:
      local_88 = 0;
      local_98 = 0;
      local_a0 = local_90;
      TurboAssembler::Mov((TurboAssembler *)this,(Register *)&local_a0,uVar3);
      uVar3 = local_90;
      iVar1 = local_90._4_4_;
      goto joined_r0x017ebed4;
    }
    puVar5 = &DAT_01a64274;
  }
  local_88 = (int)puVar5[1];
  local_90._4_4_ = (int)(*puVar5 >> 0x20);
  uVar3 = *puVar5;
  iVar1 = local_90._4_4_;
joined_r0x017ebed4:
  local_90 = uVar3;
  if (local_88 == 0) {
    uVar4 = 0xc0000000;
    if (iVar1 != 0x40) {
      uVar4 = 0x80000000;
    }
  }
  else {
    uVar2 = iVar1 - 8U >> 3 | iVar1 << 0x1d;
    if (uVar2 < 8) {
      uVar4 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar2 * 4);
    }
    else {
      uVar4 = 0x4800000;
    }
  }
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_90,&local_60,uVar4);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_80);
  return;
}

