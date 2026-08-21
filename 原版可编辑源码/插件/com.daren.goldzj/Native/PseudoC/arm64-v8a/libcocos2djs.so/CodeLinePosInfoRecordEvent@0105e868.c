
/* v8::internal::Logger::CodeLinePosInfoRecordEvent(unsigned long, v8::internal::ByteArray) */

void __thiscall
v8::internal::Logger::CodeLinePosInfoRecordEvent(Logger *this,undefined8 param_1,undefined8 param_3)

{
  long lVar1;
  SourcePositionTableIterator aSStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  SourcePositionTableIterator::SourcePositionTableIterator(aSStack_78,param_3,0);
  FUN_0105e8d8(*(undefined8 *)(this + 0x48),param_1,aSStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

