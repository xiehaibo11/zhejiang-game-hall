
/* v8::internal::compiler::InstructionSelector::VisitFloat32LessThanOrEqual(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat32LessThanOrEqual
          (InstructionSelector *this,Node *param_1)

{
  long lVar1;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined4 local_50;
  Node *local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68[0] = 0xc00000005;
  local_58 = 0;
  local_50 = 0xffffffff;
  local_48 = param_1;
  FUN_01622af8(this,param_1,local_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

