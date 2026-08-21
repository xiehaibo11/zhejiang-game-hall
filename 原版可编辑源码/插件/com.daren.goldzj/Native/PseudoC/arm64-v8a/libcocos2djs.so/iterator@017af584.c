
/* v8::internal::compiler::StateValuesAccess::iterator::iterator(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::StateValuesAccess::iterator::iterator(iterator *this,Node *param_1)

{
  long lVar1;
  iterator *piVar2;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0xc0) = 0;
  local_58[0] = SparseInputMaskOf(*(Operator **)param_1);
  SparseInputMask::IterateOverInputs((Node *)local_58);
  piVar2 = this + (long)*(int *)(this + 0xc0) * 0x18;
  *(undefined4 *)(piVar2 + 0x10) = local_40;
  *(undefined8 *)(piVar2 + 8) = uStack_48;
  *(undefined8 *)piVar2 = local_50;
  EnsureValid(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

