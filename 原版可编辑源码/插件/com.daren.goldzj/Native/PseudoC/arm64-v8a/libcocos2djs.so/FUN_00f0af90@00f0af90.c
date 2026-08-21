
void FUN_00f0af90(undefined8 param_1,int param_2,int param_3,
                 vector<v8::internal::BreakLocation,std::__ndk1::allocator<v8::internal::BreakLocation>>
                 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  BreakIterator aBStack_a8 [8];
  int local_a0;
  int local_9c;
  int local_98;
  SourcePositionTableIterator aSStack_90 [24];
  int local_78;
  uint local_68;
  char local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  v8::internal::BreakIterator::BreakIterator(aBStack_a8,param_1);
  if (local_78 != -1) {
    iVar5 = local_78;
    do {
      if ((param_2 <= local_9c) && (local_9c < param_3)) {
        v8::internal::BreakIterator::GetBreakLocation();
        puVar1 = *(undefined8 **)(param_4 + 8);
        if (puVar1 < *(undefined8 **)(param_4 + 0x10)) {
          puVar1[2] = local_b0;
          puVar1[1] = uStack_b8;
          *puVar1 = local_c0;
          *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 0x18;
          iVar5 = local_78;
        }
        else {
          std::__ndk1::
          vector<v8::internal::BreakLocation,std::__ndk1::allocator<v8::internal::BreakLocation>>::
          __push_back_slow_path<v8::internal::BreakLocation>(param_4,(BreakLocation *)&local_c0);
          iVar5 = local_78;
        }
      }
      bVar3 = local_a0 == -1;
      do {
        if (iVar5 == -1) break;
        if ((!bVar3) &&
           (v8::internal::SourcePositionTableIterator::Advance(aSStack_90), iVar5 = local_78,
           local_78 == -1)) goto LAB_00f0b0bc;
        local_9c = (local_68 >> 1 & 0x3fffffff) - 1;
        if (local_60 != '\0') {
          local_98 = local_9c;
        }
        iVar4 = v8::internal::BreakIterator::GetDebugBreakType(aBStack_a8);
        bVar3 = false;
      } while (iVar4 == 0);
      local_a0 = local_a0 + 1;
    } while (iVar5 != -1);
  }
LAB_00f0b0bc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

