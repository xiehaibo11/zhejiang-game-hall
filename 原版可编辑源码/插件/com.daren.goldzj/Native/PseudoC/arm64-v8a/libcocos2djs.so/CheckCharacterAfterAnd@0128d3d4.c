
/* v8::internal::RegExpMacroAssemblerARM64::CheckCharacterAfterAnd(unsigned int, unsigned int,
   v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckCharacterAfterAnd
          (RegExpMacroAssemblerARM64 *this,uint param_1,uint param_2,Label *param_3)

{
  long lVar1;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [8];
  undefined1 local_78;
  ulong local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_90 = 0x2000000016;
  local_58 = 0x13;
  local_60 = (ulong)param_2;
  local_88 = 0;
  local_80[0] = 0;
  local_78 = 0;
  local_50 = 0xffffffff;
  local_48 = 2;
  TurboAssembler::LogicalMacro(*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_90,local_80,0)
  ;
  CompareAndBranchOrBacktrack(this,0x200000000a,0,param_1,0,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

