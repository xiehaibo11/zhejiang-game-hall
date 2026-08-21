
/* v8::internal::RegExpMacroAssemblerARM64::PushBacktrack(v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::PushBacktrack
          (RegExpMacroAssemblerARM64 *this,Label *param_1)

{
  long lVar1;
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
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)param_1 < 0) {
    TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),(Register *)&DAT_019f7b6c,
                        (long)(0x3e - *(int *)param_1));
  }
  else {
    TurboAssembler::Adr(*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,param_1,1);
    local_90 = local_90 & 0xffffffffffffff00;
    local_88 = local_88 & 0xffffff00;
    local_70 = 0;
    local_68._0_1_ = 0x13;
    local_60 = 0x4000000014;
    uStack_50 = 0xffffffff;
    local_58 = 0;
    TurboAssembler::AddSubMacro
              (*(TurboAssembler **)(this + 0x28),&DAT_019f7b84,&DAT_019f7b84,&local_90,0,0x40000000)
    ;
    if ((*(TurboAssembler **)(this + 0x28))[0xc0] != (TurboAssembler)0x0) {
      local_90 = local_90 & 0xffffffffffffff00;
      local_88 = local_88 & 0xffffff00;
      local_68 = CONCAT71(local_68._1_7_,0x13);
      local_70 = 0xffffffff;
      local_60 = 0xffffffff;
      local_58 = CONCAT44(local_58._4_4_,2);
      TurboAssembler::AddSubMacro
                (*(TurboAssembler **)(this + 0x28),&DAT_019f7b78,&DAT_019f7b84,&local_90,1,
                 0x40000000);
      TurboAssembler::Check(*(TurboAssembler **)(this + 0x28),9,0x11);
    }
  }
  local_a0 = 0x200000000a;
  local_98 = 0;
  local_90 = 0x4000000017;
  local_78 = 0xfffffffffffffffc;
  local_88 = 0;
  local_84 = 0xffffffff;
  local_7c = 2;
  local_70 = 0xffffffff00000001;
  local_68 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),&local_a0,&local_90,0x80000000);
  CheckStackLimit(this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

