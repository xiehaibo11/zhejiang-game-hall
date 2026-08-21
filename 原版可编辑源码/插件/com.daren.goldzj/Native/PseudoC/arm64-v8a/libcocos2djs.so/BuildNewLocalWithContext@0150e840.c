
/* v8::internal::interpreter::BytecodeGenerator::BuildNewLocalWithContext(v8::internal::Scope*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildNewLocalWithContext
          (BytecodeGenerator *this,Scope *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_58 = *(undefined8 *)(this + 0x300);
  iVar1 = *(int *)(this + 0x118);
  local_40 = 2;
  *(undefined8 **)(this + 0x300) = &local_58;
  iVar2 = *(int *)(this + 0x11c);
  plVar4 = *(long **)(this + 0x120);
  *(int *)(this + 0x118) = iVar1 + 1;
  if (iVar2 <= iVar1 + 1) {
    iVar2 = iVar1 + 1;
  }
  *(int *)(this + 0x11c) = iVar2;
  pBStack_50 = this;
  local_48 = iVar1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,iVar1);
  }
  BytecodeArrayBuilder::ToObject((BytecodeArrayBuilder *)(this + 0x18),iVar1);
  BytecodeArrayBuilder::CreateWithContext((BytecodeArrayBuilder *)(this + 0x18),iVar1,param_1);
  *(undefined8 *)(pBStack_50 + 0x300) = local_58;
  plVar4 = *(long **)(pBStack_50 + 0x120);
  iVar2 = *(int *)(pBStack_50 + 0x118);
  *(int *)(pBStack_50 + 0x118) = local_48;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar2 - local_48,local_48));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

