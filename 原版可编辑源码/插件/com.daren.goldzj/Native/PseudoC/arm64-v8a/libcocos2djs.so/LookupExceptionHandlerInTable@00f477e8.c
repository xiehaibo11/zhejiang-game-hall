
/* v8::internal::OptimizedFrame::LookupExceptionHandlerInTable(int*,
   v8::internal::HandlerTable::CatchPrediction*) */

void v8::internal::OptimizedFrame::LookupExceptionHandlerInTable
               (int *param_1,CatchPrediction *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  HandlerTable aHStack_80 [16];
  ulong local_70;
  SafepointTable aSStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(param_1 + 4) + 0x95d8),
                     **(ulong **)(param_1 + 10));
  uVar5 = *(ulong *)(lVar4 + 8);
  local_70 = uVar5;
  HandlerTable::HandlerTable(aHStack_80,uVar5);
  uVar6 = **(undefined8 **)(param_1 + 10);
  if (*(int *)(uVar5 + 0x17) < 0) {
    iVar2 = Code::OffHeapInstructionStart((Code *)&local_70);
    uVar5 = local_70;
  }
  else {
    iVar2 = (int)uVar5 + 0x3f;
  }
  uVar3 = (int)uVar6 - iVar2;
  if (((*(byte *)(uVar5 + 0x17) & 0x3e) == 0) &&
     ((*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xf)) + 7) & 1) != 0)) {
    SafepointTable::SafepointTable(aSStack_68,local_70);
    uVar3 = SafepointTable::find_return_pc(aSStack_68,uVar3);
  }
  HandlerTable::LookupReturn(aHStack_80,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

