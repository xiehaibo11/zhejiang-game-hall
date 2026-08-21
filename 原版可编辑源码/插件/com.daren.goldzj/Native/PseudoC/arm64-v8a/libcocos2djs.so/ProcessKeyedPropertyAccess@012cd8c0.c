
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessKeyedPropertyAccess(v8::internal::compiler::Hints*,
   v8::internal::compiler::Hints const&, v8::internal::FeedbackSlot,
   v8::internal::compiler::AccessMode, bool) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessKeyedPropertyAccess
          (SerializerForBackgroundCompilation *this,undefined8 param_1,undefined8 param_2,
          int param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ProcessedFeedback *this_00;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68;
  FeedbackSource aFStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_4 != -1) && (*(long *)(*(long *)(this + 0x28) + 8) != 0)) {
    FeedbackSource::FeedbackSource(aFStack_58,*(long *)(*(long *)(this + 0x28) + 8),param_4);
    local_70[0] = 0;
    local_68 = 0;
    this_00 = (ProcessedFeedback *)
              JSHeapBroker::ProcessFeedbackForPropertyAccess
                        (*(undefined8 *)this,aFStack_58,param_5,local_70);
    if (((param_6 & 1) == 0) ||
       (((((byte)this[0x68] & 1) == 0 || (*(int *)(this + 0x6c) != -1)) || (*(int *)this_00 != 0))))
    {
      local_78 = 0;
      iVar2 = *(int *)this_00;
      if (iVar2 != 0) {
        if (iVar2 == 9) {
          uVar4 = ProcessedFeedback::AsNamedAccess(this_00);
          ProcessNamedAccess(this,param_1,uVar4,param_5,&local_78);
        }
        else {
          if (iVar2 != 4) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar4 = ProcessedFeedback::AsElementAccess(this_00);
          ProcessElementAccess(this,param_1,param_2,uVar4,param_5);
        }
      }
      if (param_5 == 0) {
        lVar5 = *(long *)(this + 0x28);
        uVar1 = *(int *)(lVar5 + 0x1c) + *(int *)(lVar5 + 0x18);
        if ((-1 < (int)uVar1) &&
           ((ulong)(*(long *)(lVar5 + 0x38) - *(long *)(lVar5 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
        }
        *(undefined8 *)(*(long *)(lVar5 + 0x30) + (long)(int)uVar1 * 8) = local_78;
      }
    }
    else {
      *(undefined8 *)(*(long *)(this + 0x28) + 0x38) =
           *(undefined8 *)(*(long *)(this + 0x28) + 0x30);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

