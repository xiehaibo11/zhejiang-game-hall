
/* v8::internal::RegExpMacroAssemblerARM64::CheckSpecialCharacterClass(unsigned short,
   v8::internal::Label*) */

undefined8 __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckSpecialCharacterClass
          (RegExpMacroAssemblerARM64 *this,ushort param_1,Label *param_2)

{
  Label *pLVar1;
  RegExpMacroAssemblerARM64 *pRVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  ulong local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  switch(param_1) {
  case 0x2a:
    break;
  default:
    goto switchD_0128da58_caseD_2b;
  case 0x2e:
    local_b8 = 0;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 10;
    uStack_8c = 0;
    local_c0 = 0x2000000016;
    local_88._0_1_ = 0x13;
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_c0,&local_b0,1,0x40000000);
    local_c0 = 0x2000000016;
    local_b8 = 0;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 0xd;
    uStack_8c = 0;
    local_88 = CONCAT31(local_88._1_3_,0x13);
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::ConditionalCompareMacro
              (*(TurboAssembler **)(this + 0x28),&local_c0,&local_b0,0x40000000,1,0x60000000);
    if (*(int *)(this + 0x30) == 2) {
      local_c0 = 0x2000000016;
      local_b8 = 0;
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffff00;
      local_90 = 0x2028;
      uStack_8c = 0;
      local_88._0_1_ = 0x13;
      local_80 = 0xffffffff;
      local_78 = 2;
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_c0,&local_b0,0,0x40000000);
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffff00;
      local_90 = 1;
      uStack_8c = 0;
      local_88 = CONCAT31(local_88._1_3_,0x13);
      local_80 = 0xffffffff;
      local_78 = 2;
      TurboAssembler::ConditionalCompareMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_b0,0,1,0x60000000);
      goto LAB_0128e01c;
    }
    pRVar2 = this + 0x54;
    if (param_2 != (Label *)0x0) {
      pRVar2 = (RegExpMacroAssemblerARM64 *)param_2;
    }
    TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar2,0);
    break;
  case 0x44:
    local_b8 = 0;
    local_b0 = (ulong)local_b0._1_7_ << 8;
    local_a8 = (uint)local_a8._1_3_ << 8;
    local_90 = 0x30;
    uStack_8c = 0;
    local_c0 = 0x2000000016;
    local_88._0_1_ = 0x13;
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_c0,&local_b0,0,0x40000000);
    local_b8 = 0;
    local_c0 = 0x200000000a;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 9;
    uStack_8c = 0;
    local_88 = CONCAT31(local_88._1_3_,0x13);
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_c0,&local_b0,1,0x40000000);
LAB_0128e01c:
    uVar4 = 1;
    pRVar2 = this + 0x54;
    if (param_2 != (Label *)0x0) {
      pRVar2 = (RegExpMacroAssemblerARM64 *)param_2;
    }
    TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar2,9);
    goto switchD_0128da58_caseD_2b;
  case 0x57:
    local_c8 = 0;
    if (*(int *)(this + 0x30) != 1) {
      local_c0 = 0x2000000016;
      local_b8 = 0;
      local_b0 = (ulong)local_b0._1_7_ << 8;
      local_a8 = (uint)local_a8._1_3_ << 8;
      local_90 = 0x7a;
      uStack_8c = 0;
      local_88 = CONCAT31(local_88._1_3_,0x13);
      local_80 = 0xffffffff;
      local_78 = 2;
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_c0,&local_b0,1,0x40000000);
      TurboAssembler::B(*(TurboAssembler **)(this + 0x28),&local_c8,8);
    }
    uVar4 = ExternalReference::re_word_character_map(*(Isolate **)(*(long *)(this + 0x28) + 0x178));
    local_90 = (undefined4)uVar4;
    uStack_8c = (undefined4)((ulong)uVar4 >> 0x20);
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_88 = CONCAT31(local_88._1_3_,7);
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&local_b0,0);
    local_a8 = 0;
    local_a4 = 0x2000000016;
    uStack_94 = 0;
    local_90 = 0;
    local_9c = 0;
    local_b0 = 0x400000000a;
    uStack_8c = 0xffffffff;
    local_88 = 2;
    local_84 = 0;
    TurboAssembler::LoadStoreMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_b0,0x400000);
    local_b0 = 0x200000000a;
    local_a8 = 0;
    pLVar1 = (Label *)(this + 0x54);
    if (param_2 != (Label *)0x0) {
      pLVar1 = param_2;
    }
    TurboAssembler::Cbnz(*(TurboAssembler **)(this + 0x28),(Register *)&local_b0,pLVar1);
    Assembler::bind(*(Label **)(this + 0x28));
    break;
  case 100:
    local_b8 = 0;
    local_b0 = (ulong)local_b0._1_7_ << 8;
    local_a8 = (uint)local_a8._1_3_ << 8;
    local_90 = 0x30;
    uStack_8c = 0;
    local_c0 = 0x2000000016;
    local_88._0_1_ = 0x13;
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_c0,&local_b0,0,0x40000000);
    local_b8 = 0;
    local_c0 = 0x200000000a;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 9;
    uStack_8c = 0;
    local_88 = CONCAT31(local_88._1_3_,0x13);
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_c0,&local_b0,1,0x40000000);
    goto LAB_0128e230;
  case 0x6e:
    local_b8 = 0;
    local_b0 = (ulong)local_b0._1_7_ << 8;
    local_a8 = (uint)local_a8._1_3_ << 8;
    local_90 = 10;
    uStack_8c = 0;
    local_c0 = 0x2000000016;
    local_88._0_1_ = 0x13;
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_c0,&local_b0,1,0x40000000);
    local_c0 = 0x2000000016;
    local_b8 = 0;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 0xd;
    uStack_8c = 0;
    local_88 = CONCAT31(local_88._1_3_,0x13);
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::ConditionalCompareMacro
              (*(TurboAssembler **)(this + 0x28),&local_c0,&local_b0,0x40000000,1,0x60000000);
    if (*(int *)(this + 0x30) != 2) {
      pRVar2 = this + 0x54;
      if (param_2 != (Label *)0x0) {
        pRVar2 = (RegExpMacroAssemblerARM64 *)param_2;
      }
      uVar4 = 1;
      TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar2,1);
      goto switchD_0128da58_caseD_2b;
    }
    local_c0 = 0x2000000016;
    local_b8 = 0;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 0x2028;
    uStack_8c = 0;
    local_88._0_1_ = 0x13;
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_c0,&local_b0,0,0x40000000);
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_90 = 1;
    uStack_8c = 0;
    local_88 = CONCAT31(local_88._1_3_,0x13);
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::ConditionalCompareMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_b0,0,1,0x60000000);
LAB_0128e230:
    uVar4 = 1;
    pRVar2 = this + 0x54;
    if (param_2 != (Label *)0x0) {
      pRVar2 = (RegExpMacroAssemblerARM64 *)param_2;
    }
    TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar2,8);
    goto switchD_0128da58_caseD_2b;
  case 0x73:
    if (*(int *)(this + 0x30) == 1) {
      local_c8 = 0;
      local_c0 = 0x2000000016;
      local_b8 = 0;
      local_b0 = (ulong)local_b0._1_7_ << 8;
      local_90 = 0x20;
      uStack_8c = 0;
      local_a8 = (uint)local_a8._1_3_ << 8;
      local_88._0_1_ = 0x13;
      local_80 = 0xffffffff;
      local_78 = 2;
      uVar4 = 1;
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_c0,&local_b0,1,0x40000000);
      local_c0 = 0x2000000016;
      local_b8 = 0;
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffff00;
      local_90 = 0xa0;
      uStack_8c = 0;
      local_88._0_1_ = 0x13;
      local_80 = 0xffffffff;
      local_78 = 2;
      TurboAssembler::ConditionalCompareMacro
                (*(TurboAssembler **)(this + 0x28),&local_c0,&local_b0,0x40000000,1,0x60000000);
      TurboAssembler::B(*(TurboAssembler **)(this + 0x28),&local_c8,0);
      local_c0 = 0x2000000016;
      local_b8 = 0;
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffff00;
      local_90 = 9;
      uStack_8c = 0;
      local_88._0_1_ = 0x13;
      local_80 = 0xffffffff;
      local_78 = 2;
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_c0,&local_b0,0,0x40000000);
      local_b8 = 0;
      local_c0 = 0x200000000a;
      local_b0 = local_b0 & 0xffffffffffffff00;
      local_a8 = local_a8 & 0xffffff00;
      local_90 = 4;
      uStack_8c = 0;
      local_88 = CONCAT31(local_88._1_3_,0x13);
      local_80 = 0xffffffff;
      local_78 = 2;
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_c0,&local_b0,1,0x40000000);
      pRVar2 = this + 0x54;
      if (param_2 != (Label *)0x0) {
        pRVar2 = (RegExpMacroAssemblerARM64 *)param_2;
      }
      TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar2,8);
      Assembler::bind(*(Label **)(this + 0x28));
    }
    else {
      uVar4 = 0;
    }
    goto switchD_0128da58_caseD_2b;
  case 0x77:
    if (*(int *)(this + 0x30) != 1) {
      local_c0 = 0x2000000016;
      local_b8 = 0;
      local_b0 = (ulong)local_b0._1_7_ << 8;
      local_a8 = (uint)local_a8._1_3_ << 8;
      local_90 = 0x7a;
      uStack_8c = 0;
      local_88 = CONCAT31(local_88._1_3_,0x13);
      local_80 = 0xffffffff;
      local_78 = 2;
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_c0,&local_b0,1,0x40000000);
      pRVar2 = this + 0x54;
      if (param_2 != (Label *)0x0) {
        pRVar2 = (RegExpMacroAssemblerARM64 *)param_2;
      }
      TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar2,8);
    }
    uVar4 = ExternalReference::re_word_character_map(*(Isolate **)(*(long *)(this + 0x28) + 0x178));
    local_90 = (undefined4)uVar4;
    uStack_8c = (undefined4)((ulong)uVar4 >> 0x20);
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_88 = CONCAT31(local_88._1_3_,7);
    local_80 = 0xffffffff;
    local_78 = 2;
    TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&local_b0,0);
    local_a8 = 0;
    local_a4 = 0x2000000016;
    uStack_94 = 0;
    local_90 = 0;
    local_9c = 0;
    local_b0 = 0x400000000a;
    uStack_8c = 0xffffffff;
    local_88 = 2;
    local_84 = 0;
    TurboAssembler::LoadStoreMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_b0,0x400000);
    local_b0 = 0x200000000a;
    local_a8 = 0;
    pLVar1 = (Label *)(this + 0x54);
    if (param_2 != (Label *)0x0) {
      pLVar1 = param_2;
    }
    TurboAssembler::Cbz(*(TurboAssembler **)(this + 0x28),(Register *)&local_b0,pLVar1);
  }
  uVar4 = 1;
switchD_0128da58_caseD_2b:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

