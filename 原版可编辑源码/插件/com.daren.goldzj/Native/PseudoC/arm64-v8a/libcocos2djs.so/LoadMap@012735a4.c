
/* v8::internal::MacroAssembler::LoadMap(v8::internal::Register, v8::internal::Register) */

void v8::internal::MacroAssembler::LoadMap
               (AssemblerBase *param_1,ulong param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  long lVar1;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined4 local_98;
  ulong local_90;
  uint local_88;
  undefined8 local_70;
  undefined1 local_68;
  ulong local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_c4 = 0xffffffff;
  local_bc = 2;
  local_b8 = 0xffffffffffffffff;
  local_b0 = 0xffffffff00000000;
  uStack_a8 = 0xffffffff;
  local_d0 = param_4;
  local_c8 = param_5;
  local_a0 = param_2;
  local_98 = param_3;
  AssemblerBase::RecordComment(param_1,"[ DecompressTaggedPointer");
  local_90 = 0x200000003f;
  if ((int)param_2 != 0x3f) {
    local_90 = param_2 & 0xffffffff | 0x2000000000;
  }
  local_88 = 0;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_90,&local_d0,0x80400000);
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_70 = 0;
  local_54 = 0xffffffff00000000;
  local_68 = 0x13;
  local_4c = 0;
  local_60 = param_2;
  local_58 = param_3;
  TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_a0,&DAT_019f4144,&local_90,0,0);
  AssemblerBase::RecordComment(param_1,"]");
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

