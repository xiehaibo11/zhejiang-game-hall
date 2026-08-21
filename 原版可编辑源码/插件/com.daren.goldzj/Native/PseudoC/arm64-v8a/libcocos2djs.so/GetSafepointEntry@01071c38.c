
/* v8::internal::Code::GetSafepointEntry(unsigned long) */

void v8::internal::Code::GetSafepointEntry(ulong param_1)

{
  long lVar1;
  SafepointTable aSStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  SafepointTable::SafepointTable(aSStack_68,*(undefined8 *)param_1);
  SafepointTable::FindEntry((ulong)aSStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

