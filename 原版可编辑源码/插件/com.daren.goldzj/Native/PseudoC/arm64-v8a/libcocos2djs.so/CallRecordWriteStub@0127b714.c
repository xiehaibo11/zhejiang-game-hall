
/* v8::internal::TurboAssembler::CallRecordWriteStub(v8::internal::Register, v8::internal::Operand,
   v8::internal::RememberedSetAction, v8::internal::SaveFPRegsMode, unsigned long) */

void v8::internal::TurboAssembler::CallRecordWriteStub
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_68 = param_4[1];
  local_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  local_30 = param_4[8];
  uStack_48 = param_4[5];
  local_50 = param_4[4];
  uStack_38 = param_4[7];
  uStack_40 = param_4[6];
  CallRecordWriteStub(param_1,param_2,param_3,&local_70,param_5,param_6,0,param_7);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

