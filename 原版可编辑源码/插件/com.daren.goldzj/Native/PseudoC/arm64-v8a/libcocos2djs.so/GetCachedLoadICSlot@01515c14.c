
/* v8::internal::interpreter::BytecodeGenerator::GetCachedLoadICSlot(v8::internal::Expression
   const*, v8::internal::AstRawString const*) */

int __thiscall
v8::internal::interpreter::BytecodeGenerator::GetCachedLoadICSlot
          (BytecodeGenerator *this,Expression *param_1,AstRawString *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong local_60;
  AstRawString *pAStack_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((FLAG_ignition_share_named_property_feedback == '\0') ||
     ((*(uint *)(param_1 + 4) & 0x3f) != 0x35)) {
    iVar3 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
  }
  else {
    iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x20);
    plVar5 = (long *)(*(long *)(this + 0x1f8) + 8);
    plVar6 = (long *)*plVar5;
    plVar4 = plVar5;
    if (plVar6 != (long *)0x0) {
LAB_01515c8c:
      do {
        if ((int)plVar6[4] < 4) {
LAB_01515c80:
          plVar2 = (long *)plVar6[1];
        }
        else {
          if ((int)plVar6[4] == 4) {
            if (*(int *)((long)plVar6 + 0x24) < iVar3) goto LAB_01515c80;
            if ((*(int *)((long)plVar6 + 0x24) <= iVar3) && ((AstRawString *)plVar6[5] < param_2)) {
              plVar6 = (long *)plVar6[1];
              if (plVar6 == (long *)0x0) break;
              goto LAB_01515c8c;
            }
          }
          plVar2 = (long *)*plVar6;
          plVar4 = plVar6;
        }
        plVar6 = plVar2;
      } while (plVar6 != (long *)0x0);
      if ((((plVar4 != plVar5) && ((int)plVar4[4] < 5)) &&
          (((int)plVar4[4] != 4 ||
           ((*(int *)((long)plVar4 + 0x24) <= iVar3 &&
            ((*(int *)((long)plVar4 + 0x24) < iVar3 || ((AstRawString *)plVar4[5] <= param_2))))))))
         && (iVar3 = (int)plVar4[6], iVar3 != -1)) goto LAB_01515d68;
    }
    iVar3 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
    local_60 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x20) << 0x20 | 4;
    pAStack_58 = param_2;
    local_50 = iVar3;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
    ::
    __emplace_unique_key_args<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::pair<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>&>
              (*(__tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
                 **)(this + 0x1f8),(tuple *)&local_60,(pair *)&local_60);
  }
LAB_01515d68:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

