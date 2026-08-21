
undefined4
FUN_00f12530(Isolate *param_1,ParseInfo *param_2,ulong param_3,undefined8 param_4,
            undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  Message *this;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  TryCatch aTStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  v8::TryCatch::TryCatch(aTStack_78,(Isolate *)param_1);
  if ((param_3 & 1) == 0) {
    uVar4 = v8::internal::parsing::ParseProgram(param_2,param_1,0);
    if ((uVar4 & 1) != 0) {
      uVar4 = v8::internal::Compiler::Analyze(param_2);
      v8::internal::AstValueFactory::Internalize(*(AstValueFactory **)(param_2 + 0x70),param_1);
      uVar4 = uVar4 & 1;
      goto joined_r0x00f125c0;
    }
  }
  else {
    uVar4 = v8::internal::Compiler::CompileForLiveEdit(param_2,param_1);
joined_r0x00f125c0:
    if (uVar4 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0xa8);
      local_88 = 0;
      uVar7 = *(ulong *)(param_1 + 0x58);
      local_98 = 0;
      local_a0 = uVar7;
      local_90 = uVar5;
      local_80 = param_4;
      uVar4 = v8::internal::GetCurrentStackPosition();
      if (uVar4 < uVar7) {
        local_98 = 1;
      }
      else {
        FUN_00f12f78(&local_a0,uVar5);
      }
      uVar2 = 1;
      goto LAB_00f12668;
    }
  }
  v8::internal::Isolate::OptionalRescheduleException(param_1,false);
  this = (Message *)v8::TryCatch::Message(aTStack_78);
  uVar5 = v8::Message::Get(this);
  *(undefined8 *)(param_5 + 4) = uVar5;
  puVar6 = (ulong *)v8::TryCatch::Message(aTStack_78);
  local_a0 = *puVar6;
  uVar2 = v8::internal::JSMessageObject::GetLineNumber((JSMessageObject *)&local_a0);
  param_5[6] = uVar2;
  local_a0 = *puVar6;
  uVar3 = v8::internal::JSMessageObject::GetColumnNumber((JSMessageObject *)&local_a0);
  uVar2 = 0;
  param_5[7] = uVar3;
  *param_5 = 1;
LAB_00f12668:
  v8::TryCatch::~TryCatch(aTStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

