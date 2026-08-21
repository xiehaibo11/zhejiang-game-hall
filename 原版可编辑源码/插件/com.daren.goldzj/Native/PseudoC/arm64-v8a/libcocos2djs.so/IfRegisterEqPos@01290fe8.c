
/* v8::internal::RegExpMacroAssemblerARM64::IfRegisterEqPos(int, v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::IfRegisterEqPos
          (RegExpMacroAssemblerARM64 *this,int param_1,Label *param_2)

{
  undefined8 *puVar1;
  RegExpMacroAssemblerARM64 *pRVar2;
  long lVar3;
  undefined1 local_90 [12];
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_90 = GetRegister(this,param_1,0x200000000a,0);
  local_58 = 0x13;
  local_50 = 0x2000000015;
  puVar1 = (undefined8 *)&DAT_019f7b78;
  if (local_90._0_8_ >> 0x20 != 0x40) {
    puVar1 = &DAT_019f7c68;
  }
  local_80[0] = 0;
  local_78 = 0;
  local_60 = 0;
  uStack_40 = 0xffffffff;
  local_48 = 0;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),puVar1,local_90,local_80,1,0x40000000);
  pRVar2 = this + 0x54;
  if (param_2 != (Label *)0x0) {
    pRVar2 = (RegExpMacroAssemblerARM64 *)param_2;
  }
  TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar2,0);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

