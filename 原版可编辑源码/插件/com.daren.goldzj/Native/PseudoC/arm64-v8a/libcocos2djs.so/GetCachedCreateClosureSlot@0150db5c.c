
/* v8::internal::interpreter::BytecodeGenerator::GetCachedCreateClosureSlot(v8::internal::FunctionLiteral*)
    */

int __thiscall
v8::internal::interpreter::BytecodeGenerator::GetCachedCreateClosureSlot
          (BytecodeGenerator *this,FunctionLiteral *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 local_40;
  FunctionLiteral *pFStack_38;
  int local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)(*(long *)(this + 0x1f8) + 8);
  plVar5 = (long *)*plVar4;
  plVar3 = plVar4;
  if (plVar5 != (long *)0x0) {
LAB_0150db98:
    do {
      if ((int)plVar5[4] < 7) {
LAB_0150db8c:
        plVar2 = (long *)plVar5[1];
      }
      else {
        if ((int)plVar5[4] == 7) {
          if (*(int *)((long)plVar5 + 0x24) < 0) goto LAB_0150db8c;
          if ((*(int *)((long)plVar5 + 0x24) == 0) && ((FunctionLiteral *)plVar5[5] < param_1)) {
            plVar5 = (long *)plVar5[1];
            if (plVar5 == (long *)0x0) break;
            goto LAB_0150db98;
          }
        }
        plVar2 = (long *)*plVar5;
        plVar3 = plVar5;
      }
      plVar5 = plVar2;
    } while (plVar5 != (long *)0x0);
    if ((((plVar3 != plVar4) && ((int)plVar3[4] < 8)) &&
        (((int)plVar3[4] != 7 ||
         ((*(int *)((long)plVar3 + 0x24) < 1 &&
          ((*(int *)((long)plVar3 + 0x24) < 0 || ((FunctionLiteral *)plVar3[5] <= param_1)))))))) &&
       (iVar6 = (int)plVar3[6], iVar6 != -1)) goto LAB_0150dc48;
  }
  iVar6 = *(int *)(*(long *)(this + 0x1d0) + 0x58);
  *(int *)(*(long *)(this + 0x1d0) + 0x58) = iVar6 + 1;
  local_40 = 7;
  pFStack_38 = param_1;
  local_30 = iVar6;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
  ::
  __emplace_unique_key_args<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::pair<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>&>
            (*(__tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
               **)(this + 0x1f8),(tuple *)&local_40,(pair *)&local_40);
LAB_0150dc48:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

