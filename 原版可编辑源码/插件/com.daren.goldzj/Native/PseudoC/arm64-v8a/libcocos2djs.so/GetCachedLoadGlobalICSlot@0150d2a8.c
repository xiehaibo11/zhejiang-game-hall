
/* v8::internal::interpreter::BytecodeGenerator::GetCachedLoadGlobalICSlot(v8::internal::TypeofMode,
   v8::internal::Variable*) */

int __thiscall
v8::internal::interpreter::BytecodeGenerator::GetCachedLoadGlobalICSlot
          (BytecodeGenerator *this,int param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  ulong local_60;
  ulong uStack_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = 5;
  if (param_2 == 0) {
    uVar4 = 6;
  }
  plVar7 = (long *)(*(long *)(this + 0x1f8) + 8);
  plVar8 = (long *)*plVar7;
  plVar5 = plVar7;
  if (plVar8 != (long *)0x0) {
LAB_0150d300:
    do {
      if ((int)plVar8[4] < (int)uVar4) {
LAB_0150d2f4:
        plVar2 = (long *)plVar8[1];
      }
      else {
        if ((int)plVar8[4] <= (int)uVar4) {
          if (*(int *)((long)plVar8 + 0x24) < 0) goto LAB_0150d2f4;
          if ((*(int *)((long)plVar8 + 0x24) == 0) && ((ulong)plVar8[5] < param_3)) {
            plVar8 = (long *)plVar8[1];
            if (plVar8 == (long *)0x0) break;
            goto LAB_0150d300;
          }
        }
        plVar2 = (long *)*plVar8;
        plVar5 = plVar8;
      }
      plVar8 = plVar2;
    } while (plVar8 != (long *)0x0);
    if ((((plVar5 != plVar7) && ((int)plVar5[4] <= (int)uVar4)) &&
        (((int)plVar5[4] < (int)uVar4 ||
         ((*(int *)((long)plVar5 + 0x24) < 1 &&
          ((*(int *)((long)plVar5 + 0x24) < 0 || ((ulong)plVar5[5] <= param_3)))))))) &&
       (iVar3 = (int)plVar5[6], iVar3 != -1)) goto LAB_0150d3b0;
  }
  uVar6 = 6;
  if (param_2 == 0) {
    uVar6 = 7;
  }
  iVar3 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar6);
  local_60 = (ulong)uVar4;
  uStack_58 = param_3;
  local_50 = iVar3;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
  ::
  __emplace_unique_key_args<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::pair<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>&>
            (*(__tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
               **)(this + 0x1f8),(tuple *)&local_60,(pair *)&local_60);
LAB_0150d3b0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

