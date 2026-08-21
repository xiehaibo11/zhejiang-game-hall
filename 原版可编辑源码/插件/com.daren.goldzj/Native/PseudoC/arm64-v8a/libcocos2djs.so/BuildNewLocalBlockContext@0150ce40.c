
/* v8::internal::interpreter::BytecodeGenerator::BuildNewLocalBlockContext(v8::internal::Scope*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildNewLocalBlockContext
          (BytecodeGenerator *this,Scope *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  BytecodeGenerator *pBStack_40;
  int local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_48 = *(undefined8 *)(this + 0x300);
  local_38 = *(int *)(this + 0x118);
  local_30 = 2;
  *(undefined8 **)(this + 0x300) = &local_48;
  pBStack_40 = this;
  BytecodeArrayBuilder::CreateBlockContext((BytecodeArrayBuilder *)(this + 0x18),param_1);
  *(undefined8 *)(pBStack_40 + 0x300) = local_48;
  plVar3 = *(long **)(pBStack_40 + 0x120);
  iVar1 = *(int *)(pBStack_40 + 0x118);
  *(int *)(pBStack_40 + 0x118) = local_38;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,CONCAT44(iVar1 - local_38,local_38));
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

