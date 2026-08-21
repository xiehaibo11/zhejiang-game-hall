
/* v8::internal::Logger::CodeLinePosInfoRecordEvent(unsigned long, v8::internal::Vector<unsigned
   char const>) */

void v8::internal::Logger::CodeLinePosInfoRecordEvent
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  SourcePositionTableIterator aSStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  SourcePositionTableIterator::SourcePositionTableIterator(aSStack_78,param_3,param_4,0);
  FUN_0105e8d8(*(undefined8 *)(param_1 + 0x48),param_2,aSStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

