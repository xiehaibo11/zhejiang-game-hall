
/* v8::internal::RegExpMacroAssemblerARM64::CheckGreedyLoop(v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckGreedyLoop
          (RegExpMacroAssemblerARM64 *this,Label *param_1)

{
  RegExpMacroAssemblerARM64 *pRVar1;
  long lVar2;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  ulong local_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_90 = 0x4000000017;
  local_88 = 0;
  local_84 = 0xffffffff;
  local_7c = 2;
  local_78 = 0;
  local_70 = 0xffffffff00000000;
  local_68 = 0xffffffff;
  TurboAssembler::LoadStoreMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_90,0x80400000);
  local_98 = 0;
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_70 = 0;
  local_a0 = 0x2000000015;
  local_68._0_1_ = 0x13;
  local_60 = 0x200000000a;
  uStack_50 = 0xffffffff;
  local_58 = 0;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7c68,&local_a0,&local_90,1,0x40000000);
  Assembler::cset(*(Assembler **)(this + 0x28),&DAT_019f7b90,0);
  local_a0 = 0x4000000017;
  local_98 = 0;
  local_b0 = 0x4000000017;
  local_a8 = 0;
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_70 = 0;
  local_68 = CONCAT71(local_68._1_7_,0x13);
  local_60 = 0x400000000b;
  uStack_50 = 0x2ffffffff;
  local_58 = 0;
  TurboAssembler::AddSubMacro(*(TurboAssembler **)(this + 0x28),&local_a0,&local_b0,&local_90,0,0);
  pRVar1 = this + 0x54;
  if (param_1 != (Label *)0x0) {
    pRVar1 = (RegExpMacroAssemblerARM64 *)param_1;
  }
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar1,0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

