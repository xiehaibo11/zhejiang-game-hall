
/* v8::internal::BreakLocation::BreakIndexFromCodeOffset(v8::internal::Handle<v8::internal::DebugInfo>,
   v8::internal::Handle<v8::internal::AbstractCode>, int) */

void v8::internal::BreakLocation::BreakIndexFromCodeOffset
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BreakIterator aBStack_a8 [8];
  int local_a0;
  int local_9c;
  int local_98;
  SourcePositionTableIterator aSStack_90 [24];
  int local_78;
  int local_70;
  uint local_68;
  char local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  BreakIterator::BreakIterator(aBStack_a8,param_1);
  if (local_78 == -1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    iVar4 = 0x7fffffff;
    while (((param_3 < local_70 || (iVar2 = param_3 - local_70, iVar4 <= iVar2)) ||
           (iVar3 = local_a0, iVar4 = iVar2, iVar2 != 0))) {
      if (local_a0 != -1) goto LAB_00f05488;
      while( true ) {
        local_9c = (local_68 >> 1 & 0x3fffffff) - 1;
        if (local_60 != '\0') {
          local_98 = local_9c;
        }
        iVar2 = BreakIterator::GetDebugBreakType(aBStack_a8);
        if (iVar2 != 0) break;
LAB_00f05488:
        SourcePositionTableIterator::Advance(aSStack_90);
        if (local_78 == -1) goto LAB_00f054d4;
      }
      local_a0 = local_a0 + 1;
    }
  }
LAB_00f054d4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

