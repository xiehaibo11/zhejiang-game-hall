
/* v8::internal::RegExpMacroAssemblerARM64::CheckNotCharacterAfterMinusAnd(unsigned short, unsigned
   short, unsigned short, v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckNotCharacterAfterMinusAnd
          (RegExpMacroAssemblerARM64 *this,ushort param_1,ushort param_2,ushort param_3,
          Label *param_4)

{
  long lVar1;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8;
  ulong local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  local_90 = (ulong)param_2;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_c0 = 0x2000000016;
  local_b8 = 0;
  local_b0[0] = 0;
  local_a8 = 0;
  local_88 = 0x13;
  local_80 = 0xffffffff;
  local_78 = 2;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_c0,local_b0,0,0x40000000);
  local_b0[0] = 0;
  local_a8 = 0;
  local_88 = 0x13;
  local_80 = 0xffffffff;
  local_78 = 2;
  local_90 = (ulong)param_3;
  TurboAssembler::LogicalMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&DAT_019f7b6c,local_b0,0);
  CompareAndBranchOrBacktrack(this,0x200000000a,0,param_1,1,param_4);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

