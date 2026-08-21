
/* v8::internal::TurboAssembler::CallRecordWriteStub(v8::internal::Register, v8::internal::Operand,
   v8::internal::RememberedSetAction, v8::internal::SaveFPRegsMode) */

void v8::internal::TurboAssembler::CallRecordWriteStub
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_88 = param_4[1];
  local_90 = *param_4;
  uStack_78 = param_4[3];
  uStack_80 = param_4[2];
  local_50 = param_4[8];
  uStack_68 = param_4[5];
  local_70 = param_4[4];
  uStack_58 = param_4[7];
  uStack_60 = param_4[6];
  uVar2 = Builtins::builtin_handle((Builtins *)(*(long *)(param_1 + 0x178) + 0x9e00),0);
  CallRecordWriteStub(param_1,param_2,param_3,&local_90,param_5,param_6,uVar2,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

