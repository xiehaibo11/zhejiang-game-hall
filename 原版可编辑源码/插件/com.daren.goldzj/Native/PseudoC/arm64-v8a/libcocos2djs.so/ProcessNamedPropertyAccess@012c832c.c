
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessNamedPropertyAccess(v8::internal::compiler::Hints*,
   v8::internal::compiler::NameRef const&, v8::internal::FeedbackSlot,
   v8::internal::compiler::AccessMode) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessNamedPropertyAccess
          (SerializerForBackgroundCompilation *this,undefined8 param_1,undefined8 *param_2,
          int param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  ProcessedFeedback *this_00;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  FeedbackSource aFStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_4 != -1) {
    if (*(long *)(*(long *)(this + 0x28) + 8) != 0) {
      FeedbackSource::FeedbackSource(aFStack_58,*(long *)(*(long *)(this + 0x28) + 8),param_4);
      local_70[0] = 1;
      uStack_60 = param_2[1];
      local_68 = *param_2;
      this_00 = (ProcessedFeedback *)
                JSHeapBroker::ProcessFeedbackForPropertyAccess
                          (*(undefined8 *)this,aFStack_58,param_5,local_70);
      if (((((byte)this[0x68] & 1) == 0) || (*(int *)(this + 0x6c) != -1)) || (*(int *)this_00 != 0)
         ) {
        local_78 = 0;
        if (*(int *)this_00 != 0) {
          if (*(int *)this_00 != 9) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar3 = ProcessedFeedback::AsNamedAccess(this_00);
          ProcessNamedAccess(this,param_1,uVar3,param_5,&local_78);
        }
        if (param_5 == 0) {
          lVar4 = *(long *)(this + 0x28);
          uVar1 = *(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18);
          if ((-1 < (int)uVar1) &&
             ((ulong)(*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
          }
          *(undefined8 *)(*(long *)(lVar4 + 0x30) + (long)(int)uVar1 * 8) = local_78;
        }
      }
      else {
        *(undefined8 *)(*(long *)(this + 0x28) + 0x38) =
             *(undefined8 *)(*(long *)(this + 0x28) + 0x30);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

