
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessGlobalAccess(v8::internal::FeedbackSlot,
   bool) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessGlobalAccess
          (SerializerForBackgroundCompilation *this,int param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ProcessedFeedback *this_00;
  undefined8 uVar3;
  long lVar4;
  char local_68;
  ObjectRef aOStack_60 [16];
  undefined8 local_50;
  FeedbackSource aFStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2 != -1) && (*(long *)(*(long *)(this + 0x28) + 8) != 0)) {
    FeedbackSource::FeedbackSource(aFStack_48,*(long *)(*(long *)(this + 0x28) + 8),param_2);
    this_00 = (ProcessedFeedback *)
              JSHeapBroker::ProcessFeedbackForGlobalAccess(*(JSHeapBroker **)this,aFStack_48);
    if ((param_3 & 1) != 0) {
      local_50 = 0;
      if (*(int *)this_00 == 6) {
        ProcessedFeedback::AsGlobalAccess(this_00);
        GlobalAccessFeedback::GetConstantHint();
        if (local_68 != '\0') {
          uVar3 = ObjectRef::object(aOStack_60);
          lVar4 = *(long *)(this + 0x20);
          if (lVar4 == 0) {
            lVar4 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
            *(long *)(this + 0x20) = lVar4;
          }
          Hints::AddConstant((Hints *)&local_50,uVar3,lVar4);
        }
      }
      lVar4 = *(long *)(this + 0x28);
      uVar1 = *(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x18);
      if ((-1 < (int)uVar1) &&
         ((ulong)(*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
      }
      *(undefined8 *)(*(long *)(lVar4 + 0x30) + (long)(int)uVar1 * 8) = local_50;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

