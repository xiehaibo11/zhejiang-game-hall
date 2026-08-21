
/* v8::internal::MacroAssembler::LoadNativeContextSlot(int, v8::internal::Register) */

void v8::internal::MacroAssembler::LoadNativeContextSlot
               (AssemblerBase *param_1,int param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong local_118;
  undefined4 local_110;
  ulong local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  undefined4 local_d0;
  ulong local_c8;
  uint local_c0;
  undefined8 local_a8;
  undefined1 local_a0;
  ulong local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  local_108 = 0x400000001b;
  local_100 = 0;
  local_fc = 0xffffffff;
  local_f4 = 2;
  local_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffff00000000;
  uStack_e0 = 0xffffffff;
  local_118 = param_3;
  local_110 = param_4;
  local_d8 = param_3;
  local_d0 = param_4;
  AssemblerBase::RecordComment(param_1,"[ DecompressTaggedPointer");
  uVar1 = 0x200000003f;
  if ((int)param_3 != 0x3f) {
    uVar1 = param_3 & 0xffffffff | 0x2000000000;
  }
  local_c0 = 0;
  local_c8 = uVar1;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_c8,&local_108,0x80400000);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = 0x13;
  local_8c = 0xffffffff00000000;
  local_84 = 0;
  local_98 = param_3;
  local_90 = param_4;
  TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_d8,&DAT_019f4144,&local_c8,0,0);
  AssemblerBase::RecordComment(param_1,"]");
  local_fc = 0xffffffff;
  local_f4 = 2;
  local_f0 = 0x13;
  local_e8 = 0xffffffff00000000;
  uStack_e0 = 0xffffffff;
  local_108 = param_3;
  local_100 = param_4;
  AssemblerBase::RecordComment(param_1,"[ DecompressTaggedPointer");
  local_c0 = 0;
  local_c8 = uVar1;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_c8,&local_108,0x80400000);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = 0x13;
  local_98 = local_118;
  local_90 = local_110;
  local_8c = 0xffffffff00000000;
  local_84 = 0;
  TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_118,&DAT_019f4144,&local_c8,0,0);
  AssemblerBase::RecordComment(param_1,"]");
  local_f0 = (long)(param_2 * 4 + 7);
  local_fc = 0xffffffff;
  local_f4 = 2;
  local_108 = local_118;
  local_100 = local_110;
  local_e8 = 0xffffffff00000000;
  uStack_e0 = 0xffffffff;
  AssemblerBase::RecordComment(param_1,"[ DecompressTaggedPointer");
  local_c8 = 0x200000003f;
  if ((int)local_118 != 0x3f) {
    local_c8 = local_118 & 0xffffffff | 0x2000000000;
  }
  local_c0 = 0;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&local_c8,&local_108,0x80400000);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = 0x13;
  local_98 = local_118;
  local_90 = local_110;
  local_8c = 0xffffffff00000000;
  local_84 = 0;
  TurboAssembler::AddSubMacro((TurboAssembler *)param_1,&local_118,&DAT_019f4144,&local_c8,0,0);
  AssemblerBase::RecordComment(param_1,"]");
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

