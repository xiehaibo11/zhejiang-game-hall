
/* v8::internal::RegExpMacroAssemblerARM64::Backtrack() */

void __thiscall v8::internal::RegExpMacroAssemblerARM64::Backtrack(RegExpMacroAssemblerARM64 *this)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 local_e8;
  int local_e0;
  CPURegList *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  CheckPreemption(this);
  if (*(int *)(this + 0xc) != 0) {
    local_b8 = 0;
    lVar5 = *(long *)(this + 0x28);
    local_d8 = (CPURegList *)(lVar5 + 0x198);
    local_d0 = lVar5 + 0x1a8;
    local_c8 = *(undefined8 *)(lVar5 + 0x198);
    uStack_c0 = *(undefined8 *)(lVar5 + 0x1a8);
    uVar3 = UseScratchRegisterScope::AcquireNextAvailable(local_d8);
    local_e8 = 0x200000003f;
    if (uVar3 != 0x3f) {
      local_e8 = (ulong)uVar3 | 0x2000000000;
    }
    local_e0 = 0;
    local_b0 = 0x400000001d;
    local_a8 = 0;
    local_a4 = 0xffffffff;
    local_9c = 2;
    local_98 = 0xffffffffffffffd0;
    local_90 = 0xffffffff00000000;
    local_88 = 0xffffffff;
    TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),&local_e8,&local_b0,0x80400000)
    ;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 1;
    local_88 = CONCAT71(local_88._1_7_,0x13);
    local_80 = 0xffffffff;
    local_78._0_4_ = 2;
    TurboAssembler::AddSubMacro(*(TurboAssembler **)(this + 0x28),&local_e8,&local_e8,&local_b0,0,0)
    ;
    local_b0 = 0x400000001d;
    local_a8 = 0;
    local_a4 = 0xffffffff;
    local_9c = 2;
    local_98 = 0xffffffffffffffd0;
    local_90 = 0xffffffff00000000;
    local_88 = 0xffffffff;
    if (local_e0 == 0) {
      uVar4 = 0xc0000000;
      if (local_e8._4_4_ != 0x40) {
        uVar4 = 0x80000000;
      }
    }
    else {
      uVar3 = local_e8._4_4_ - 8U >> 3 | local_e8._4_4_ << 0x1d;
      if (uVar3 < 8) {
        uVar4 = *(undefined4 *)(&DAT_019f38a8 + (long)(int)uVar3 * 4);
      }
      else {
        uVar4 = 0x4800000;
      }
    }
    TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),&local_e8,&local_b0,uVar4);
    local_90 = (ulong)*(uint *)(this + 0xc);
    puVar1 = (undefined8 *)&DAT_019f7b78;
    if (local_e8._4_4_ != 0x40) {
      puVar1 = &DAT_019f7c68;
    }
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_80 = 0xffffffff;
    local_78 = CONCAT44(local_78._4_4_,2);
    local_88 = CONCAT71(local_88._1_7_,0x13);
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),puVar1,&local_e8,&local_b0,1,0x40000000);
    TurboAssembler::B(*(TurboAssembler **)(this + 0x28),&local_b8,1);
    (**(code **)(*(long *)this + 0xd0))(this);
    Assembler::bind(*(Label **)(this + 0x28));
    UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_d8);
  }
  local_d8 = (CPURegList *)0x200000000a;
  local_d0 = local_d0 & 0xffffffff00000000;
  local_b0 = 0x4000000017;
  local_98 = 4;
  local_a8 = 0;
  local_a4 = 0xffffffff;
  local_9c = 2;
  local_90 = 0xffffffff00000002;
  local_88 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),&local_d8,&local_b0,0x80400000);
  local_80 = 0x200000000a;
  local_d8 = (CPURegList *)0x4000000014;
  local_d0 = local_d0 & 0xffffffff00000000;
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_a8 = local_a8 & 0xffffff00;
  local_90 = 0;
  local_88 = CONCAT71(local_88._1_7_,0x13);
  uStack_70 = 2;
  local_78 = 0xffffffff00000000;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&local_d8,&local_b0,0,0);
  Assembler::br(*(Assembler **)(this + 0x28),(Register *)&DAT_019f7b84);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

