
/* v8::internal::RegExpMacroAssemblerARM64::ClearRegisters(int, int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::ClearRegisters
          (RegExpMacroAssemblerARM64 *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  TurboAssembler *pTVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 local_128;
  undefined4 local_120;
  ulong local_118;
  uint local_110;
  ulong local_108;
  uint local_100;
  long local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulong local_c0;
  uint local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar1 = param_2 - param_1;
  uVar7 = uVar1 + 1;
  if ((param_1 < 0x10) && ((param_1 & 1U) != 0)) {
    StoreRegister(this,param_1,0x2000000018,0);
    param_1 = param_1 + 1;
    uVar7 = uVar1;
  }
  for (; (1 < (int)uVar7 && (param_1 < 0x10)); param_1 = param_1 + 2) {
    iVar8 = param_1;
    if (param_1 < 0) {
      iVar8 = param_1 + 1;
    }
    local_108 = (ulong)(uint)(iVar8 >> 1) | 0x4000000000;
    local_100 = 0;
    local_c0 = local_c0 & 0xffffffffffffff00;
    local_b8 = local_b8 & 0xffffff00;
    local_a0 = 0;
    local_98._1_7_ = (undefined7)((ulong)local_98 >> 8);
    local_98 = CONCAT71(local_98._1_7_,0x13);
    local_90 = 0x4000000018;
    uStack_80 = 0xffffffff;
    local_88 = 0;
    TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&local_108,&local_c0,0);
    uVar7 = uVar7 - 2;
  }
  if ((int)uVar7 % 2 == 1) {
    StoreRegister(this,param_1,0x2000000018,0);
    uVar7 = uVar7 - 1;
    param_1 = param_1 + 1;
  }
  if (0 < (int)uVar7) {
    iVar8 = param_1 + -0x10;
    if ((int)uVar7 < 0x11) {
      if (param_1 <= param_2) {
        lVar9 = (long)(param_1 * -4 + 8);
        do {
          local_108 = 0x4000000018;
          local_100 = 0;
          local_b8 = 0;
          local_c0 = 0x400000001d;
          local_ac = 2;
          local_b4 = 0xffffffff;
          local_a0 = -0x100000000;
          local_98 = 0xffffffff;
          local_a8 = lVar9;
          TurboAssembler::LoadStoreMacro
                    (*(TurboAssembler **)(this + 0x28),&local_108,&local_c0,0xc0000000);
          iVar8 = iVar8 + 2;
          lVar9 = lVar9 + -8;
        } while (iVar8 <= param_2 + -0x10);
      }
    }
    else {
      local_118 = 0x400000000a;
      local_110 = 0;
      pTVar6 = *(TurboAssembler **)(this + 0x28);
      local_e8 = (long)(iVar8 * -4 + -0x38);
      local_128 = 0x400000001d;
      local_e0 = 0x13;
      local_120 = 0;
      local_108 = local_108 & 0xffffffffffffff00;
      local_100 = local_100 & 0xffffff00;
      local_d8 = 0xffffffff;
      local_d0 = 2;
      if ((iVar8 < -0xd) || (uVar3 = Assembler::IsImmAddSub(-local_e8), (uVar3 & 1) == 0)) {
        puVar4 = &local_108;
        uVar5 = 0;
      }
      else {
        local_c0 = local_c0 & 0xffffffffffffff00;
        local_b8 = local_b8 & 0xffffff00;
        local_a0 = -local_e8;
        local_90 = 0xffffffff;
        local_98 = CONCAT71(local_98._1_7_,0x13);
        local_88 = CONCAT44(local_88._4_4_,2);
        puVar4 = &local_c0;
        uVar5 = 0x40000000;
      }
      TurboAssembler::AddSubMacro(pTVar6,&local_118,&local_128,puVar4,0,uVar5);
      local_128 = 0;
      TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),(Register *)&DAT_019f7b90,(ulong)uVar7);
      Assembler::bind(*(Label **)(this + 0x28));
      local_a8 = -8;
      local_108 = 0x4000000018;
      local_100 = 0;
      local_b4 = 0xffffffff;
      local_ac = 2;
      local_c0 = local_118;
      local_b8 = local_110;
      local_a0 = 0xffffffff00000002;
      local_98 = 0xffffffff;
      TurboAssembler::LoadStoreMacro
                (*(TurboAssembler **)(this + 0x28),&local_108,&local_c0,0xc0000000);
      local_c0 = local_c0 & 0xffffffffffffff00;
      local_b8 = local_b8 & 0xffffff00;
      local_a0 = 2;
      local_98 = CONCAT71(local_98._1_7_,0x13);
      local_90 = 0xffffffff;
      local_88 = CONCAT44(local_88._4_4_,2);
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7b90,&DAT_019f7b90,&local_c0,0,
                 0x40000000);
      TurboAssembler::Cbnz
                (*(TurboAssembler **)(this + 0x28),(Register *)&DAT_019f7b90,(Label *)&local_128);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

