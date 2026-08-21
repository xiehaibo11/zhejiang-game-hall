
/* v8::internal::SourcePositionTableBuilder::AddPosition(unsigned long,
   v8::internal::SourcePosition, bool) */

void __thiscall
v8::internal::SourcePositionTableBuilder::AddPosition
          (SourcePositionTableBuilder *this,undefined4 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  undefined4 local_40 [2];
  undefined8 local_38;
  byte local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)this == 2) {
    local_30 = param_4 & 1;
    local_40[0] = param_2;
    local_38 = param_3;
    AddEntry(this,(PositionTableEntry *)local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

