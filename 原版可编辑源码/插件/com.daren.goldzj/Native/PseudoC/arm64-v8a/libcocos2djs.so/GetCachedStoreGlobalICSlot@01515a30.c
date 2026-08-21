
/* v8::internal::interpreter::BytecodeGenerator::GetCachedStoreGlobalICSlot(v8::internal::LanguageMode,
   v8::internal::Variable*) */

int __thiscall
v8::internal::interpreter::BytecodeGenerator::GetCachedStoreGlobalICSlot
          (BytecodeGenerator *this,ulong param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  ulong local_60;
  ulong uStack_58;
  int local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)(*(long *)(this + 0x1f8) + 8);
  plVar8 = (long *)*plVar7;
  if (plVar8 != (long *)0x0) {
    uVar1 = (uint)param_2 & 1;
    plVar5 = plVar7;
LAB_01515a84:
    do {
      if ((int)plVar8[4] < (int)uVar1) {
LAB_01515a78:
        plVar3 = (long *)plVar8[1];
      }
      else {
        if ((int)plVar8[4] <= (int)uVar1) {
          if (*(int *)((long)plVar8 + 0x24) < 0) goto LAB_01515a78;
          if ((*(int *)((long)plVar8 + 0x24) == 0) && ((ulong)plVar8[5] < param_3)) {
            plVar8 = (long *)plVar8[1];
            if (plVar8 == (long *)0x0) break;
            goto LAB_01515a84;
          }
        }
        plVar3 = (long *)*plVar8;
        plVar5 = plVar8;
      }
      plVar8 = plVar3;
    } while (plVar8 != (long *)0x0);
    if ((((plVar5 != plVar7) && ((int)plVar5[4] <= (int)uVar1)) &&
        (((int)plVar5[4] < (int)uVar1 ||
         ((*(int *)((long)plVar5 + 0x24) < 1 &&
          ((*(int *)((long)plVar5 + 0x24) < 0 || ((ulong)plVar5[5] <= param_3)))))))) &&
       (iVar4 = (int)plVar5[6], iVar4 != -1)) goto LAB_01515b34;
  }
  uVar6 = 10;
  if ((param_2 & 1) == 0) {
    uVar6 = 1;
  }
  iVar4 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar6);
  local_60 = param_2 & 1;
  uStack_58 = param_3;
  local_50 = iVar4;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
  ::
  __emplace_unique_key_args<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::pair<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>&>
            (*(__tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
               **)(this + 0x1f8),(tuple *)&local_60,(pair *)&local_60);
LAB_01515b34:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

