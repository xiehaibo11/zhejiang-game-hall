
/* v8::internal::compiler::InstructionSelector::VisitInt64AddWithOverflow(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitInt64AddWithOverflow
          (InstructionSelector *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = NodeProperties::FindProjection(param_1,1);
  if (lVar2 == 0) {
    local_78 = (ulong)local_78._4_4_ << 0x20;
  }
  else {
    local_78 = 0x1400000005;
    local_58 = lVar2;
  }
  local_60 = 0xffffffff;
  local_68 = 0;
  FUN_01623308(this,param_1,0x60,0,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

