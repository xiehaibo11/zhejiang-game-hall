
/* v8::internal::RegExpMacroAssemblerARM64::CheckCharacterInRange(unsigned short, unsigned short,
   v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckCharacterInRange
          (RegExpMacroAssemblerARM64 *this,ushort param_1,ushort param_2,Label *param_3)

{
  long lVar1;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90 [8];
  undefined1 local_88;
  ulong local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_a0 = 0x2000000016;
  local_68 = 0x13;
  local_70 = (ulong)param_1;
  local_98 = 0;
  local_90[0] = 0;
  local_88 = 0;
  local_60 = 0xffffffff;
  local_58 = 2;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_a0,local_90,0,0x40000000);
  CompareAndBranchOrBacktrack(this,0x200000000a,0,(uint)param_2 - (uint)param_1,9,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

