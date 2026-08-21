
/* v8::internal::RegExpMacroAssemblerARM64::ReadStackPointerFromRegister(int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::ReadStackPointerFromRegister
          (RegExpMacroAssemblerARM64 *this,int param_1)

{
  long lVar1;
  undefined1 auVar2 [12];
  undefined8 local_a0;
  undefined4 local_98;
  ulong local_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [12];
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  auVar2 = GetRegister(this,param_1,0x200000000a,0);
  local_78 = 0xfffffffffffffff0;
  local_90 = 0x400000001d;
  local_88 = 0;
  local_84 = 0xffffffff;
  local_7c = 2;
  local_70 = 0xffffffff00000000;
  local_68 = 0xffffffff;
  TurboAssembler::LoadStoreMacro
            (*(TurboAssembler **)(this + 0x28),&DAT_019f7b90,&local_90,0xc0400000);
  local_a0 = 0x4000000017;
  local_98 = 0;
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_70 = 0;
  local_68 = CONCAT71(local_68._1_7_,0x13);
  local_54 = 0x6ffffffff;
  local_4c = 0;
  local_60 = auVar2;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(this + 0x28),&local_a0,&DAT_019f7b90,&local_90,0,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

