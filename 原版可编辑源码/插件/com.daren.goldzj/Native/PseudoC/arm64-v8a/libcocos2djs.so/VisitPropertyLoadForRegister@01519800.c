
/* v8::internal::interpreter::BytecodeGenerator::VisitPropertyLoadForRegister(v8::internal::interpreter::Register,
   v8::internal::Property*, v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitPropertyLoadForRegister
          (BytecodeGenerator *this,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = *(undefined8 *)(this + 0x300);
  local_48 = *(int *)(this + 0x118);
  local_40 = 2;
  *(undefined8 **)(this + 0x300) = &local_58;
  pBStack_50 = this;
  VisitPropertyLoad(this,param_2);
  BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),param_4);
  *(undefined8 *)(pBStack_50 + 0x300) = local_58;
  plVar3 = *(long **)(pBStack_50 + 0x120);
  iVar1 = *(int *)(pBStack_50 + 0x118);
  *(int *)(pBStack_50 + 0x118) = local_48;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,CONCAT44(iVar1 - local_48,local_48));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

