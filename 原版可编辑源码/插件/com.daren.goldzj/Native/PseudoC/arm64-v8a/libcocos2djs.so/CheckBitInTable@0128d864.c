
/* v8::internal::RegExpMacroAssemblerARM64::CheckBitInTable(v8::internal::Handle<v8::internal::ByteArray>,
   v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::CheckBitInTable
          (RegExpMacroAssemblerARM64 *this,undefined8 param_2,Label *param_3)

{
  Label *pLVar1;
  long lVar2;
  undefined8 local_b0;
  undefined4 local_a8;
  ulong local_a0;
  uint local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_80 = (undefined4)param_2;
  uStack_7c = (undefined4)((ulong)param_2 >> 0x20);
  local_78._0_1_ = 3;
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_98 = local_98 & 0xffffff00;
  local_70 = 0xffffffff;
  local_68 = 2;
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),&DAT_019f7b90,&local_a0,0);
  local_a8 = 0;
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_98 = local_98 & 0xffffff00;
  local_80 = 0x7f;
  uStack_7c = 0;
  local_78._0_1_ = 0x13;
  local_b0 = 0x2000000016;
  local_70 = 0xffffffff;
  local_68 = 2;
  TurboAssembler::LogicalMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&local_b0,&local_a0,0);
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_98 = local_98 & 0xffffff00;
  local_80 = 7;
  uStack_7c = 0;
  local_78 = CONCAT31(local_78._1_3_,0x13);
  local_70 = 0xffffffff;
  local_68 = 2;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b6c,&DAT_019f7b6c,&local_a0,0,0);
  local_98 = 0;
  local_94 = 0x200000000a;
  uStack_84 = 0;
  local_80 = 0;
  local_8c = 0;
  local_a0 = 0x400000000b;
  uStack_7c = 0xffffffff;
  local_78 = 2;
  local_74 = 0;
  TurboAssembler::LoadStoreMacro(*(TurboAssembler **)(this + 0x28),&DAT_019f7ba8,&local_a0,0x400000)
  ;
  local_a0 = 0x200000000b;
  local_98 = 0;
  pLVar1 = (Label *)(this + 0x54);
  if (param_3 != (Label *)0x0) {
    pLVar1 = param_3;
  }
  TurboAssembler::Cbnz(*(TurboAssembler **)(this + 0x28),(Register *)&local_a0,pLVar1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

