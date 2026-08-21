
/* v8::internal::compiler::StateValuesAccess::iterator::Push(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::StateValuesAccess::iterator::Push(iterator *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  iterator *piVar3;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0xc0);
  *(int *)(this + 0xc0) = iVar1 + 1;
  if (7 < iVar1 + 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kMaxInlineDepth > current_depth_");
  }
  local_58[0] = SparseInputMaskOf(*(Operator **)param_1);
  SparseInputMask::IterateOverInputs((Node *)local_58);
  piVar3 = this + (long)*(int *)(this + 0xc0) * 0x18;
  *(undefined4 *)(piVar3 + 0x10) = local_40;
  *(undefined8 *)(piVar3 + 8) = uStack_48;
  *(undefined8 *)piVar3 = local_50;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

