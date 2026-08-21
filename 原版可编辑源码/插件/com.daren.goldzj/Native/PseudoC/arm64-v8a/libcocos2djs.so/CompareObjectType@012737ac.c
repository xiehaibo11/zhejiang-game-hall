
/* v8::internal::MacroAssembler::CompareObjectType(v8::internal::Register, v8::internal::Register,
   v8::internal::Register, v8::internal::InstanceType) */

void v8::internal::MacroAssembler::CompareObjectType
               (AssemblerBase *param_1,undefined8 param_2,undefined4 param_3,ulong param_4,
               uint param_5,undefined8 param_6,undefined4 param_7,uint param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  uint local_c8;
  ulong local_c0;
  uint local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 local_98;
  ulong local_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_f4 = 0xffffffff;
  local_ec = 2;
  local_e8 = 0xffffffffffffffff;
  local_e0 = 0xffffffff00000000;
  uStack_d8 = 0xffffffff;
  local_100 = param_2;
  local_f8 = param_3;
  local_d0 = param_4;
  local_c8 = param_5;
  AssemblerBase::RecordComment(param_1,"[ DecompressTaggedPointer");
  local_c0 = 0x200000003f;
  if ((int)param_4 != 0x3f) {
    local_c0 = param_4 & 0xffffffff | 0x2000000000;
  }
  local_b8 = 0;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_c0,&local_100,0x80400000);
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_b8 = local_b8 & 0xffffff00;
  local_a0 = 0;
  local_84 = 0xffffffff00000000;
  local_98 = CONCAT71(local_98._1_7_,0x13);
  local_7c = 0;
  local_90 = param_4;
  local_88 = param_5;
  TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_d0,&DAT_019f4144,&local_c0,0,0);
  AssemblerBase::RecordComment(param_1,"]");
  local_b4 = 0xffffffff;
  local_ac = 2;
  local_a8 = 7;
  local_a0 = 0xffffffff00000000;
  local_98 = 0xffffffff;
  local_100 = param_6;
  local_f8 = param_7;
  local_c0 = param_4;
  local_b8 = param_5;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_100,&local_c0,0x40400000);
  local_a0 = (ulong)param_8 & 0xffff;
  puVar1 = &DAT_019f4018;
  if (local_100._4_4_ != 0x40) {
    puVar1 = &DAT_019f4000;
  }
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_b8 = local_b8 & 0xffffff00;
  local_98 = CONCAT71(local_98._1_7_,0x13);
  local_90 = 0xffffffff;
  local_88 = 2;
  TurboAssembler::AddSubMacro((TurboAssembler *)param_1,puVar1,&local_100,&local_c0,1,0x40000000);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

