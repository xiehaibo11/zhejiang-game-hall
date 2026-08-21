
long FUN_00f40f4c(Isolate *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  TryCatch aTStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    **(undefined8 **)(param_2 + 0x38) = 0;
  }
  v8::TryCatch::TryCatch(aTStack_68,(Isolate *)param_1);
  v8::TryCatch::SetVerbose(aTStack_68,false);
  v8::TryCatch::SetCaptureMessage(aTStack_68,false);
  lVar2 = FUN_00f407e4(param_1,param_2);
  if (lVar2 == 0) {
    if (*(int *)(param_1 + 0x2bd8) == *(int *)(param_1 + 0x188)) {
      v8::TryCatch::~TryCatch(aTStack_68);
      v8::internal::Isolate::OptionalRescheduleException(param_1,false);
      goto LAB_00f40fc0;
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      uVar3 = v8::TryCatch::Exception(aTStack_68);
      **(undefined8 **)(param_2 + 0x38) = uVar3;
    }
    if (*(int *)(param_2 + 0x30) == 0) {
      v8::internal::Isolate::OptionalRescheduleException(param_1,true);
    }
  }
  v8::TryCatch::~TryCatch(aTStack_68);
LAB_00f40fc0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

