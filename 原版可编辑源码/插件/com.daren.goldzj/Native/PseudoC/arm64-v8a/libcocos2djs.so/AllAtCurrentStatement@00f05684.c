
/* v8::internal::BreakLocation::AllAtCurrentStatement(v8::internal::Handle<v8::internal::DebugInfo>,
   v8::internal::JavaScriptFrame*, std::__ndk1::vector<v8::internal::BreakLocation,
   std::__ndk1::allocator<v8::internal::BreakLocation> >*) */

void v8::internal::BreakLocation::AllAtCurrentStatement
               (undefined8 param_1,FrameSummary *param_2,
               vector<v8::internal::BreakLocation,std::__ndk1::allocator<v8::internal::BreakLocation>>
               *param_3)

{
  undefined8 *puVar1;
  short sVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 extraout_x1;
  int iVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  FrameSummary aFStack_a8 [8];
  int local_a0;
  int local_9c;
  int local_98;
  SourcePositionTableIterator aSStack_90 [8];
  ulong *local_88;
  int local_80;
  int local_78;
  uint local_68;
  char local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FrameSummary::GetTop(param_2,(StandardFrame *)param_2);
  FrameSummary::~FrameSummary(aFStack_a8);
  sVar2 = *(short *)((*local_88 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_88 - 1));
  BreakIterator::BreakIterator((BreakIterator *)aFStack_a8,param_1);
  iVar5 = BreakIndexFromCodeOffset(param_1,extraout_x1,local_80 - (uint)(sVar2 == 0x9a));
  if (0 < iVar5) {
    iVar7 = local_78;
    do {
      iVar5 = iVar5 + -1;
      bVar4 = local_a0 == -1;
      do {
        if (iVar7 == -1) break;
        if ((!bVar4) &&
           (SourcePositionTableIterator::Advance(aSStack_90), iVar7 = local_78, local_78 == -1))
        goto LAB_00f0572c;
        local_9c = (local_68 >> 1 & 0x3fffffff) - 1;
        if (local_60 != '\0') {
          local_98 = local_9c;
        }
        iVar6 = BreakIterator::GetDebugBreakType((BreakIterator *)aFStack_a8);
        bVar4 = false;
      } while (iVar6 == 0);
      local_a0 = local_a0 + 1;
LAB_00f0572c:
    } while (0 < iVar5);
  }
  iVar5 = local_98;
  BreakIterator::BreakIterator((BreakIterator *)aFStack_a8,param_1);
  if (local_78 != -1) {
    iVar7 = local_78;
    do {
      if (local_98 == iVar5) {
        BreakIterator::GetBreakLocation();
        puVar1 = *(undefined8 **)(param_3 + 8);
        if (puVar1 < *(undefined8 **)(param_3 + 0x10)) {
          puVar1[2] = local_b0;
          puVar1[1] = uStack_b8;
          *puVar1 = local_c0;
          *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 0x18;
          iVar7 = local_78;
        }
        else {
          std::__ndk1::
          vector<v8::internal::BreakLocation,std::__ndk1::allocator<v8::internal::BreakLocation>>::
          __push_back_slow_path<v8::internal::BreakLocation>(param_3,(BreakLocation *)&local_c0);
          iVar7 = local_78;
        }
      }
      bVar4 = local_a0 == -1;
      do {
        if (iVar7 == -1) break;
        if ((!bVar4) &&
           (SourcePositionTableIterator::Advance(aSStack_90), iVar7 = local_78, local_78 == -1))
        goto LAB_00f05898;
        local_9c = (local_68 >> 1 & 0x3fffffff) - 1;
        if (local_60 != '\0') {
          local_98 = local_9c;
        }
        iVar6 = BreakIterator::GetDebugBreakType((BreakIterator *)aFStack_a8);
        bVar4 = false;
      } while (iVar6 == 0);
      local_a0 = local_a0 + 1;
    } while (iVar7 != -1);
  }
LAB_00f05898:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

