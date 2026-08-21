
/* v8::internal::PartialSerializer::SerializeObject(v8::internal::HeapObject) */

void __thiscall
v8::internal::PartialSerializer::SerializeObject(PartialSerializer *this,undefined **param_2)

{
  PartialSerializer *pPVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_78;
  undefined **local_70;
  PartialSerializer *pPStack_68;
  undefined **local_60;
  PartialSerializer *pPStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar5 = Serializer::SerializeHotObject();
  if ((((uVar5 & 1) == 0) &&
      (uVar5 = Serializer::SerializeRoot((Serializer *)this,param_2), (uVar5 & 1) == 0)) &&
     (uVar5 = Serializer::SerializeBackReference((Serializer *)this,param_2), (uVar5 & 1) == 0)) {
    pPVar1 = this + 0x50;
    uVar5 = StartupSerializer::SerializeUsingReadOnlyObjectCache
                      (*(undefined8 *)(this + 0x1c8),pPVar1,param_2);
    if ((uVar5 & 1) == 0) {
      uVar5 = (ulong)param_2 & 0xffffffff00000000 | 7;
      if (((((*(ushort *)(uVar5 + *(uint *)((long)param_2 + -1)) < 0x41) ||
            (*(short *)(uVar5 + *(uint *)((long)param_2 + -1)) == 0xa6)) ||
           ((*(short *)(uVar5 + *(uint *)((long)param_2 + -1)) == 0x42 ||
            ((*(short *)(uVar5 + *(uint *)((long)param_2 + -1)) == 0x9a ||
             (*(short *)(uVar5 + *(uint *)((long)param_2 + -1)) == 0x83)))))) ||
          (*(short *)(uVar5 + *(uint *)((long)param_2 + -1)) == 0x51)) ||
         ((((*(ushort *)(uVar5 + *(uint *)((long)param_2 + -1)) & 0xfffe) == 0x4e ||
           (*(short *)(uVar5 + *(uint *)((long)param_2 + -1)) == 0x5a)) ||
          (*(int *)((long)param_2 + -1) ==
           *(int *)(*(long *)(*(long *)(this + 0x1c8) + 0x68) + 0xe8))))) {
        StartupSerializer::SerializeUsingPartialSnapshotCache
                  (*(StartupSerializer **)(this + 0x1c8),pPVar1,param_2);
      }
      else {
        if (*(short *)(uVar5 + *(uint *)((long)param_2 + -1)) == 0x9f) {
          local_70 = param_2;
          FeedbackVector::ClearSlots((FeedbackVector *)&local_70,*(Isolate **)(this + 0x68));
        }
        if (*(short *)(uVar5 + *(uint *)((long)param_2 + -1)) == 0x5d) {
          puVar2 = &FLAG_interrupt_budget;
          if (FLAG_lazy_feedback_allocation != '\0') {
            puVar2 = &FLAG_budget_for_feedback_vector_allocation;
          }
          *(undefined4 *)((long)param_2 + 7) = *puVar2;
        }
        uVar6 = SerializeJSObjectWithEmbedderFields(this,param_2);
        if ((uVar6 & 1) == 0) {
          if (*(short *)(uVar5 + *(uint *)((long)param_2 + -1)) == 0x439) {
            local_70 = param_2;
            JSFunction::ResetIfBytecodeFlushed((JSFunction *)&local_70);
            uVar5 = (ulong)local_70 & 0xffffffff00000000;
            if (*(int *)((uVar5 | *(uint *)((long)local_70 + 0x17)) + 0x27) != 0x42) {
              uVar3 = *(uint *)((uVar5 | *(uint *)((long)local_70 + 0xb)) + 3);
              if ((uVar3 != 0x84) &&
                 (((uVar3 & 1) == 0 ||
                  (1 < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar3) - 1)) - 0x95)))) {
                local_78 = (ulong)local_70 & 0xffffffff00000000 |
                           (ulong)*(uint *)((long)local_70 + 0xb);
                uVar5 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_78);
                *(int *)((long)local_70 + 0x17) = (int)uVar5;
                if (((uVar5 & 1) != 0) &&
                   ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
                  Heap_MarkingBarrierSlow(local_70,(long)local_70 + 0x17);
                }
              }
            }
          }
          if (((this[0x1e0] != (PartialSerializer)0x0) &&
              (local_70 = param_2, uVar5 = HeapObject::NeedsRehashing((HeapObject *)&local_70),
              (uVar5 & 1) != 0)) &&
             (uVar5 = HeapObject::CanBeRehashed((HeapObject *)&local_70), (uVar5 & 1) == 0)) {
            this[0x1e0] = (PartialSerializer)0x0;
          }
          local_50 = 0;
          local_70 = &PTR__ObjectVisitor_01cbba18;
          pPStack_68 = this;
          local_60 = param_2;
          pPStack_58 = pPVar1;
          Serializer::ObjectSerializer::Serialize((ObjectSerializer *)&local_70);
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

