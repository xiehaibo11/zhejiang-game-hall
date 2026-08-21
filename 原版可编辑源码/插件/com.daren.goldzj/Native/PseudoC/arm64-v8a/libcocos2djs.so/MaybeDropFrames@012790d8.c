
/* v8::internal::MacroAssembler::MaybeDropFrames() */

void __thiscall v8::internal::MacroAssembler::MaybeDropFrames(MacroAssembler *this)

{
  long lVar1;
  undefined8 uVar2;
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
  local_70 = ExternalReference::debug_restart_fp_address(*(Isolate **)(this + 0x178));
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_68 = CONCAT71(local_68._1_7_,7);
  local_60 = 0xffffffff;
  local_58 = CONCAT44(local_58._4_4_,2);
  TurboAssembler::Mov((TurboAssembler *)this,&DAT_019f415c,&local_90,0);
  local_88 = 0;
  local_84 = 0xffffffff;
  local_7c = 2;
  local_78 = 0;
  local_90 = 0x4000000001;
  local_70 = 0xffffffff00000000;
  local_68 = 0xffffffff;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&DAT_019f415c,&local_90,0xc0400000);
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_70 = 0;
  local_68 = CONCAT71(local_68._1_7_,0x13);
  local_60 = 0x4000000001;
  uStack_50 = 0xffffffff;
  local_58 = 0;
  TurboAssembler::LogicalMacro
            ((TurboAssembler *)this,&DAT_019f4018,&DAT_019f415c,&local_90,0x60000000);
  uVar2 = Builtins::builtin_handle((Builtins *)(*(long *)(this + 0x178) + 0x9e00),0x58);
  TurboAssembler::Jump((TurboAssembler *)this,uVar2,0,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

