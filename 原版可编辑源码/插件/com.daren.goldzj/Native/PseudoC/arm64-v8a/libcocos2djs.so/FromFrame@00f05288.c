
/* v8::internal::BreakLocation::FromFrame(v8::internal::Handle<v8::internal::DebugInfo>,
   v8::internal::JavaScriptFrame*) */

void __thiscall
v8::internal::BreakLocation::FromFrame
          (undefined8 *param_1,BreakLocation *this,FrameSummary *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 extraout_x1;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  SourcePositionTableIterator aSStack_90 [16];
  undefined4 local_80;
  int local_78;
  uint local_68;
  char local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_a8 = *(undefined8 *)this;
  auVar6 = DebugInfo::CanBreakAtEntry((DebugInfo *)&local_a8);
  if ((auVar6._0_8_ & 1) == 0) {
    FrameSummary::GetTop(param_3,auVar6._8_8_);
    FrameSummary::~FrameSummary((FrameSummary *)&local_a8);
    BreakIterator::BreakIterator((BreakIterator *)&local_a8,this);
    iVar3 = BreakIndexFromCodeOffset(this,extraout_x1,local_80);
    if (0 < iVar3) {
      iVar5 = local_78;
      do {
        iVar3 = iVar3 + -1;
        bVar2 = local_a0 == -1;
        do {
          if (iVar5 == -1) break;
          if ((!bVar2) &&
             (SourcePositionTableIterator::Advance(aSStack_90), iVar5 = local_78, local_78 == -1))
          goto LAB_00f0533c;
          local_9c = (local_68 >> 1 & 0x3fffffff) - 1;
          if (local_60 != '\0') {
            local_98 = local_9c;
          }
          iVar4 = BreakIterator::GetDebugBreakType((BreakIterator *)&local_a8);
          bVar2 = false;
        } while (iVar4 == 0);
        local_a0 = local_a0 + 1;
LAB_00f0533c:
      } while (0 < iVar3);
    }
    BreakIterator::GetBreakLocation();
  }
  else {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0x600000000;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

