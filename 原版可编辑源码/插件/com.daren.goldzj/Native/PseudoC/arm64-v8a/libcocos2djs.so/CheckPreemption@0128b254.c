
/* v8::internal::RegExpMacroAssemblerARM64::CheckPreemption() */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckPreemption(RegExpMacroAssemblerARM64 *this)

{
  long lVar1;
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
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = ExternalReference::address_of_jslimit(*(Isolate **)(*(long *)(this + 0x28) + 0x178));
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_68 = CONCAT71(local_68._1_7_,7);
  local_60 = 0xffffffff;
  local_58 = CONCAT44(local_58._4_4_,2);
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&local_90,0);
  local_88 = 0;
  local_84 = 0xffffffff;
  local_7c = 2;
  local_78 = 0;
  local_90 = 0x400000000a;
  local_70 = 0xffffffff00000000;
  local_68 = 0xffffffff;
  TurboAssembler::LoadStoreMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&local_90,0xc0400000);
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_70 = 0;
  local_68 = CONCAT71(local_68._1_7_,0x13);
  local_60 = 0x400000000a;
  uStack_50 = 0xffffffff;
  local_58 = 0;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b78,&DAT_019f7c44,&local_90,1,0x40000000);
  local_90 = 0;
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),&local_90,8);
  Assembler::bl(*(Assembler **)(this + 0x28),(Label *)(this + 100));
  Assembler::bind(*(Label **)(this + 0x28));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

