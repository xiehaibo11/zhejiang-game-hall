
/* v8::internal::RegExpMacroAssemblerARM64::LoadCurrentCharacterUnchecked(int, int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::LoadCurrentCharacterUnchecked
          (RegExpMacroAssemblerARM64 *this,int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  TurboAssembler *pTVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_108;
  undefined4 local_100;
  ulong local_f8;
  uint local_f0;
  long local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulong local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x20))();
  local_a4 = 0x2000000015;
  if (param_1 != 0) {
    pTVar5 = *(TurboAssembler **)(this + 0x28);
    if (pTVar5[0xc0] == (TurboAssembler)0x0) {
      local_108 = 0x2000000015;
      local_100 = 0;
      local_d0 = 0x13;
      local_d8 = (long)*(int *)(this + 0x30) * (long)param_1;
      local_f8 = local_f8 & 0xffffffffffffff00;
      local_f0 = local_f0 & 0xffffff00;
      local_c8 = 0xffffffff;
      local_c0 = 2;
      if ((int)local_d8 < 0) {
        lVar6 = -local_d8;
        uVar2 = Assembler::IsImmAddSub(lVar6);
        if ((uVar2 & 1) == 0) goto LAB_01290bf8;
        local_b0 = local_b0 & 0xffffffffffffff00;
        local_a8 = local_a8 & 0xffffff00;
        local_80 = 0xffffffff;
        local_88 = CONCAT31(local_88._1_3_,0x13);
        local_78 = CONCAT44(local_78._4_4_,2);
        puVar3 = &local_b0;
        uVar4 = 0x40000000;
      }
      else {
LAB_01290bf8:
        lVar6 = CONCAT44(local_90._4_4_,(undefined4)local_90);
        puVar3 = &local_f8;
        uVar4 = 0;
      }
      local_90 = lVar6;
      TurboAssembler::AddSubMacro(pTVar5,&DAT_019f7b6c,&local_108,puVar3,0,uVar4);
      local_a4 = 0x200000000a;
    }
    else {
      TurboAssembler::Mov(pTVar5,(Register *)&DAT_019f7b84,
                          (long)*(int *)(this + 0x30) * (long)param_1);
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffff00;
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
      uVar7 = 6;
      uVar4 = 0xffffffff00000000;
      local_88._0_1_ = 0x13;
      local_80 = 0x2000000015;
      uStack_70 = 6;
      local_78 = 0xffffffff00000000;
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&DAT_019f7b84,&local_b0,0,0,in_x6,
                 in_x7,0xffffffff00000000,6);
      local_a4 = 0x200000000a;
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffff00;
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
      local_88 = CONCAT31(local_88._1_3_,0x13);
      local_80 = 0x200000000a;
      local_78 = uVar4;
      uStack_70 = uVar7;
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7b78,&DAT_019f7b84,&local_b0,1,
                 0x40000000);
      TurboAssembler::Check(*(TurboAssembler **)(this + 0x28),0,0x11);
    }
  }
  if (*(int *)(this + 0x30) == 1) {
    if (param_2 != 4) {
      pTVar5 = *(TurboAssembler **)(this + 0x28);
      if (param_2 != 2) {
        uVar4 = 0x400000;
        goto LAB_01290d18;
      }
LAB_01290c94:
      uVar4 = 0x40400000;
      goto LAB_01290d18;
    }
    pTVar5 = *(TurboAssembler **)(this + 0x28);
  }
  else {
    pTVar5 = *(TurboAssembler **)(this + 0x28);
    if (param_2 != 2) goto LAB_01290c94;
  }
  uVar4 = 0x80400000;
LAB_01290d18:
  local_84 = 0;
  local_88 = 6;
  local_90._4_4_ = 0xffffffff;
  local_90._0_4_ = 0;
  uStack_94 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_b0 = 0x4000000019;
  local_f0 = 0;
  local_f8 = 0x2000000016;
  TurboAssembler::LoadStoreMacro(pTVar5,&local_f8,&local_b0,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

