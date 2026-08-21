
/* v8::internal::MacroAssembler::JumpToExternalReference(v8::internal::ExternalReference const&,
   bool) */

void __thiscall
v8::internal::MacroAssembler::JumpToExternalReference
          (MacroAssembler *this,ExternalReference *param_1,bool param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = *(undefined8 *)param_1;
  local_58 = 7;
  local_50 = 0xffffffff;
  local_80[0] = 0;
  local_78 = 0;
  local_48 = 2;
  TurboAssembler::Mov((TurboAssembler *)this,&DAT_019f415c,local_80,0);
  uVar2 = CodeFactory::CEntry(*(undefined8 *)(this + 0x178),1,0,0,param_2);
  TurboAssembler::Jump((TurboAssembler *)this,uVar2,0,0xe);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

