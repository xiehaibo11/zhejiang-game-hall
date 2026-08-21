
/* v8::internal::MacroAssembler::CompareInstanceType(v8::internal::Register, v8::internal::Register,
   v8::internal::InstanceType) */

void v8::internal::MacroAssembler::CompareInstanceType
               (TurboAssembler *param_1,ulong param_2,uint param_3,undefined8 param_4,
               undefined4 param_5,ulong param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_a0;
  undefined4 local_98;
  ulong local_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_84 = 0xffffffff;
  local_7c = 2;
  local_78 = 7;
  local_70 = 0xffffffff00000000;
  local_68 = 0xffffffff;
  local_a0 = param_4;
  local_98 = param_5;
  local_90 = param_2;
  local_88 = param_3;
  TurboAssembler::LoadStoreMacro(param_1,&local_a0,&local_90,0x40400000);
  local_70 = param_6 & 0xffff;
  local_68 = CONCAT71(local_68._1_7_,0x13);
  puVar1 = &DAT_019f4018;
  if (local_a0._4_4_ != 0x40) {
    puVar1 = &DAT_019f4000;
  }
  local_90 = local_90 & 0xffffffffffffff00;
  local_88 = local_88 & 0xffffff00;
  local_60 = 0xffffffff;
  local_58 = 2;
  TurboAssembler::AddSubMacro(param_1,puVar1,&local_a0,&local_90,1,0x40000000);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

