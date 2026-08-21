
/* v8::internal::interpreter::BytecodeGenerator::GetCachedStoreICSlot(v8::internal::Expression
   const*, v8::internal::AstRawString const*) */

int __thiscall
v8::internal::interpreter::BytecodeGenerator::GetCachedStoreICSlot
          (BytecodeGenerator *this,Expression *param_1,AstRawString *param_2)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_60;
  AstRawString *pAStack_58;
  int local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (FLAG_ignition_share_named_property_feedback == '\0') {
    lVar8 = *(long *)(this + 0x1d0);
    uVar5 = 2;
    if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
      uVar5 = 0xb;
    }
  }
  else {
    uVar1 = *(ushort *)(*(long *)(this + 0x1e8) + 0x81);
    iVar6 = 2;
    if ((uVar1 & 1) == 0) {
      iVar6 = 3;
    }
    if ((*(uint *)(param_1 + 4) & 0x3f) == 0x35) {
      iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x20);
      plVar9 = (long *)(*(long *)(this + 0x1f8) + 8);
      plVar10 = (long *)*plVar9;
      plVar7 = plVar9;
      if (plVar10 != (long *)0x0) {
LAB_01515f64:
        do {
          if ((int)plVar10[4] < iVar6) {
LAB_01515f58:
            plVar3 = (long *)plVar10[1];
          }
          else {
            if ((int)plVar10[4] <= iVar6) {
              if (*(int *)((long)plVar10 + 0x24) < iVar4) goto LAB_01515f58;
              if ((*(int *)((long)plVar10 + 0x24) <= iVar4) &&
                 ((AstRawString *)plVar10[5] < param_2)) {
                plVar10 = (long *)plVar10[1];
                if (plVar10 == (long *)0x0) break;
                goto LAB_01515f64;
              }
            }
            plVar3 = (long *)*plVar10;
            plVar7 = plVar10;
          }
          plVar10 = plVar3;
        } while (plVar10 != (long *)0x0);
        if ((((plVar7 != plVar9) && ((int)plVar7[4] <= iVar6)) &&
            (((int)plVar7[4] < iVar6 ||
             ((*(int *)((long)plVar7 + 0x24) <= iVar4 &&
              ((*(int *)((long)plVar7 + 0x24) < iVar4 || ((AstRawString *)plVar7[5] <= param_2))))))
            )) && (iVar4 = (int)plVar7[6], iVar4 != -1)) goto LAB_0151606c;
      }
      uVar5 = 0xb;
      if ((uVar1 & 1) == 0) {
        uVar5 = 2;
      }
      iVar4 = FeedbackVectorSpec::AddSlot
                        ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar5);
      local_60 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 8) + 0x20),iVar6);
      pAStack_58 = param_2;
      local_50 = iVar4;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
      ::
      __emplace_unique_key_args<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::pair<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>&>
                (*(__tree<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::__map_value_compare<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>,std::__ndk1::less<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::tuple<v8::internal::interpreter::BytecodeGenerator::FeedbackSlotCache::SlotKind,int,void_const*>,int>>>
                   **)(this + 0x1f8),(tuple *)&local_60,(pair *)&local_60);
      goto LAB_0151606c;
    }
    lVar8 = *(long *)(this + 0x1d0);
    uVar5 = 0xb;
    if ((uVar1 & 1) == 0) {
      uVar5 = 2;
    }
  }
  iVar4 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(lVar8 + 0x38),uVar5);
LAB_0151606c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

